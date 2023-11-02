import numpy as np

sents2 = """Elephants are the largest living land mammals. India is the world's largest democracy. Engineers are destroying jobs, they even destroying their own jobs. The world's largest desert is the Sahara, which covers nearly all of northern Africa.India has largest popoulation in the world.Westbengal state has more population than canada."""


def filter(q:str) -> str:
    q = q.lower()
    q = q.replace("?", "")
    q = q.replace(".", "")
    q = q.replace(",", "")
    q = q.replace("'", "")
    q = q.replace('"', "")
    q = q.replace("!", "")
    q = q.replace("  ", " ")
    q = q.strip()
    return q


def p2l(q:str):
    q = q.lower()
    q = q.replace("?", "")
    q = q.replace(",", "")
    q = q.replace("'", "")
    q = q.replace('"', "")
    q = q.replace("!", "")
    q = q.replace("  ", " ")
    q = q.replace("\n", "")
    st=q.split(".")
    q = q.strip()
    return st

def query(q:str, sents) -> str:
    sents = p2l(sents)
    q = filter(q)
    matched = []
    x = np.array(q.lower().split())
    for s in sents:
        y = np.array(s.lower().split())
        ints = np.intersect1d(x, y)
        if len(ints) >0:
            perc = len(ints) / len(q.split())
            print(perc)
            matched.append({"m":len(ints), "a":s, "perc":perc})
    if len(matched) == 0:return "I don't have enough information to answer that."
    matched = sorted(matched, key=lambda k: k['m'], reverse=True)
    return matched


inp = input("Enter the paragraph: ")
while True:
    inp = input("Enter your question: ")
    if inp == "exit":
        break
    print(query(inp, sents2)[0]['a'])
