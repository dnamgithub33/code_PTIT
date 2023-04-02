#include <bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;
int W=0;
// Khai báo cấu trúc Edge để lưu trữ thông tin về một cạnh của đồ thị
struct Edge {
    int src, dest, weight;
};

// Hàm so sánh 2 cạnh theo trọng số
bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

// Hàm tìm đỉnh cha của một đỉnh trong cây bao trùm nhỏ nhất
int find(int parent[], int i) {
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}

// Hàm gộp 2 cây con thành một cây bao trùm nhỏ nhất
void Union(int parent[], int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

// Hàm thực hiện thuật toán Kruskal để tìm cây bao trùm nhỏ nhất
void Kruskal(Edge edges[], int V, int E) {
    // Sắp xếp các cạnh theo thứ tự tăng dần của trọng số
    stable_sort(edges, edges + E, compare);

    int parent[V];
    memset(parent, -1, sizeof(parent));

    int count = 0, i = 0;
    while (count < V - 1 && i < E) {
        Edge current_edge = edges[i++];

        // Kiểm tra xem cạnh đó có tạo thành chu trình không
        int x = find(parent, current_edge.src);
        int y = find(parent, current_edge.dest);
        if (x != y) {
            pair<int,int> p;
            p.first=current_edge.src +1;
            p.second=current_edge.dest +1;
            v.push_back(p);
            W+=current_edge.weight;
            //cout << current_edge.src +1<< " " << current_edge.dest +1<< " "<< endl;
            Union(parent, x, y);
            
            count++;
        }
    }
}

int main() {
    int V, E;
    Edge edges[100000];
    E=0;
    cin>>V;
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            int a;
            cin>>a;
            if(j>i&&a>0)
            {
                edges[E].src=i;
                edges[E].dest=j;
                edges[E].weight=a;
                E++;
            }
        }
            
    }
    // Khởi tạo các cạnh của đồ thị
    /*edges[0].src = 0;
    edges[0].dest = 1;
    edges[0].weight = 10;

    edges[1].src = 0;
    edges[1].dest = 2;
    edges[1].weight = 6;

    edges[2].src = 0;
    edges[2].dest = 3;
    edges[2].weight = 5;

    edges[3].src = 1;
    edges[3].dest = 3;
    edges[3].weight = 15;

    edges[4].src = 2;
    edges[4].dest = 3;
    edges[4].weight = 4;*/

    Kruskal(edges, V, E);
    cout<<"dH = "<<W<<endl;
    for(auto x:v)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
