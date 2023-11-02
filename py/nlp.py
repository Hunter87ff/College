# Author : Hunter87
# Github : https://github.com/hunter87ff
# Insta  : https://instagram.com/im_hunter87
# Youtube: https://youtube.com/@hunter87

import numpy as np

sents2 = """Elephants are the largest living land mammals. India is the world's largest democracy. Engineers are destroying jobs, they even destroying their own jobs. The world's largest desert is the Sahara, which covers nearly all of northern Africa.India has largest popoulation in the world.Westbengal state has more population than canada."""

def token(q: str) -> str:
    q = q.lower().translate(str.maketrans('', '', '^`~@?,\'"!;:')).replace("  ", " ").replace("\n", "").strip()
    return q.split()

def p2l(para:str):
    para = para.lower().translate(str.maketrans('', '', '^`~@?\'"!;:')).replace("  ", " ").replace("\n", "").strip()
    st=para.split(".")
    return st

def query(q:str, para) -> str:
    sents = p2l(para)
    q = token(q)
    matched = []
    x = np.array(q)
    for s in sents:
        y = np.array(s.lower().split())
        ints = np.intersect1d(x, y)
        if len(ints) >0:
            perc = len(ints) / len(q)
            print(perc)
            matched.append({"m":len(ints), "a":s.strip(), "perc":perc})
    if len(matched) == 0:return "I don't have enough information to answer that."
    matched = sorted(matched, key=lambda k: k['m'], reverse=True)
    return matched


pra = input("Enter the paragraph: ")
while True:
    qry = input("Enter your question: ")
    if qry == "exit":
        break
    print(query(qry, pra)[0]['a'])
# q  = "which is the largest desert in the world?"
# print(query(q, sents2)[0]['a'])
