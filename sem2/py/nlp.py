# Author : Hunter87
# Github : https://github.com/hunter87ff
# Insta  : https://instagram.com/im_hunter87
# Youtube: https://youtube.com/@hunter87
#import numpy as np
import os
os.system("ffmpeg -version")

def token(q: str) -> str:
    q = q.lower().translate(str.maketrans('', '', '^`~@?,\'"!;:')).replace("  ", " ").replace("\n", "").strip()
    return q.split()

def p2l(para:str):
    para = para.lower().translate(str.maketrans('', '', '^`~@?\'"!;:')).replace("  ", " ").replace("\n", "").strip()
    st=para.split(".")
    return st
    
def intersect(arr1, arr2):
  return [x for x in arr1 if x in arr2]
  
def query(q:str, para) -> str:
    sents = p2l(para)
    q = token(q)
    qlen = len(q)
    matched = []
    x = q
    for s in sents:
        y = s.lower().split()
        ints = intersect(x, y)
        if len(ints) > 0:
            perc = len(ints) / qlen
            print(perc) #accuracy
            matched.append({"m":len(ints), "a":s.strip(), "perc":perc})
    if len(matched) == 0:return "I don't have enough information to answer that."
    matched = sorted(matched, key=lambda k: k['m'], reverse=True)
    return matched

"""
pra = input("Enter the paragraph: ")
while True:
    qry = input("Enter your question: ")
    if qry == "exit":
        break
    print(query(qry, pra)[0]['a'])
"""
sents2 = """Elephants are the largest living land mammals. India is the world's largest democracy. Engineers are destroying jobs, they even destroying their own jobs. The world's largest desert is the Sahara, which covers nearly all of northern Africa.India has largest popoulation in the world.Westbengal state has more population than canada. india is the father of pakistan. pakistan just play cricket, but it's national game is terrorism"""
q  = "father of pakistan"
print(query(q, sents2)[0]['a'])
