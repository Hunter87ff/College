import requests as req
from bs4 import BeautifulSoup
login="https://www.brainwareuniversity.ac.in/studentselfservice/"
payload = {"student_code":"BWU/BCA/<yr>/<code>", "password" : "<password>", "login":"Login"}



web = "https://www.brainwareuniversity.ac.in/studentselfservice/student-student-forum-new.php?type=topic&actiontype=modify&boardid=13&topicid=44416"
env= "https://www.brainwareuniversity.ac.in/studentselfservice/student-student-forum-new.php?type=topic&actiontype=modify&boardid=13&topicid=44477"

session = req.Session()
session.post(login, data=payload)
data = session.get(web).content

def get_doc(content):
    docl = []
    soup = BeautifulSoup(content, features="html5lib")
    docs = soup.findAll('a')
    for i in docs:
        if "get_file" in str(i.get('href')):
            url = i.get('href').replace("./get_file_content.php","https://www.brainwareuniversity.ac.in/studentselfservice/get_file_content.php")
            docl.append(url)
    return docl

print(get_doc(data))
