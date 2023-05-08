import requests
import os
import glob
import time
import requests
s = 0
for filepath in glob.glob(os.path.join("E:\\temp\\PTIT-Source\\CodePTIT - DSA", '*.cpp')):
    with open(filepath) as f:
        if s == 20:
            exit()
        s += 1
        l = []
        path = "E:\\temp\\PTIT-Source\\CodePTIT - DSA\\"
        l = f.name.split('\\')
        list = []
        name_file = l[6]
        list = l[6].split('.')
        url = "https://code.ptit.edu.vn/student/question/"
        url += list[0]
        content = f.read()
        f.close()
        burp0_url = "https://code.ptit.edu.vn:443/student/solution"
        burp0_cookies = {"__zi": "3000.SSZzejyD2CeYdgEpqWm8sIZ9eUVCGWR1QvMpxTDGHDDzXVQobL53bZ6EyhkGN0kMCeoukPzU2PGvZRcv.1", "XSRF-TOKEN": "eyJpdiI6ImU2b1ViWWdlSGtTaXZLT2VtQzE3L3c9PSIsInZhbHVlIjoiTU5aMG5kRWNtamVsNlRlN2daR2o3aVNZVFJqNTduTEdPVjRFUVZ2Uit3bFhWY1Jha1d1dGQxb3krb212dk8zbTlBRWt6ejZrcHVqUzNTRjJkQnRKSjNvbElwY2xiN1JEelJZa3AvczZrNW5iWlFWRWJuM0t2Q1ZQbkNRK2tadTIiLCJtYWMiOiJkMjg2ZmRlMzA0OGYxNjBlZjdjNTAzZjg4NTAzOGE0NTgzMmFkOTlhN2IzYWFiOTNlMmVhOWEzNjFlZmE1NjljIiwidGFnIjoiIn0%3D",
                         "ptit_code_session": "eyJpdiI6IlFMdzlneEJTQUVmd0VNdTZNeEkyMkE9PSIsInZhbHVlIjoiV0Z3SVBXTnhKSDlOcTRCWkt4Sm9PSGkxWGVSeTIxbGlYN24wZm1kVVllYkxJckVZc2lyUmJyaHMvWTRtUElNTHAwUlVKQ241NWtHVWVMRjF6N2U3eFhRN1BXSmpCMm9FWWkycU1DNlI5TGNza2U4RVVndEtOTkVaMDBFUFcvVkYiLCJtYWMiOiJjNTFmNzIyYTQyZTk2MjQ0ODgwZTM2ZTI2OWFmY2E5ZWQxNDNkYjhhYjE0NzA2NzIxNzA4MzZmYThhYzAxODQyIiwidGFnIjoiIn0%3D"}
        burp0_headers = {"Cache-Control": "max-age=0", "Sec-Ch-Ua": "\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"104\"", "Sec-Ch-Ua-Mobile": "?0", "Sec-Ch-Ua-Platform": "\"Windows\"", "Upgrade-Insecure-Requests": "1", "Origin": "https://code.ptit.edu.vn", "Content-Type": "multipart/form-data; boundary=----WebKitFormBoundaryzCAve0RHYRqvBWiR",
                         "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/104.0.5112.102 Safari/537.36", "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9", "Sec-Fetch-Site": "same-origin", "Sec-Fetch-Mode": "navigate", "Sec-Fetch-User": "?1", "Sec-Fetch-Dest": "document", "Referer": url, "Accept-Encoding": "gzip, deflate", "Accept-Language": "en-US,en;q=0.9"}
        burp0_data = "------WebKitFormBoundaryWgAHagIBs7AfY7yc\r\nContent-Disposition: form-data; name=\"_token\"\r\n\r\nVHm7AJ5lRfv3Q4NkW4bVce5PFesX5k4MkJjKVzzQ\r\n------WebKitFormBoundaryWgAHagIBs7AfY7yc\r\nContent-Disposition: form-data; name=\"question\"\r\n\r\n"+list[0]+"\r\n------WebKitFormBoundaryWgAHagIBs7AfY7yc\r\nContent-Disposition: form-data; name=\"compiler\"\r\n\r\n2\r\n------WebKitFormBoundaryWgAHagIBs7AfY7yc\r\nContent-Disposition: form-data; name=\"code_file\"; filename=" + name_file + "\r\nContent-Type: text/plain\r\n\r\n" +\
            content+"\r\n\r\n------WebKitFormBoundaryWgAHagIBs7AfY7yc--\r\n"
        time.sleep(5)
        requests.post(burp0_url, headers=burp0_headers,
                      cookies=burp0_cookies, data=burp0_data)
