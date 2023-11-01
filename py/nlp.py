import numpy as np
sents = [
    "Elephants are the largest living land mammals.",
    "India is the world's largest democracy.",
    "Engineers are destroying jobs, they even destroying their own jobs.",
    "The world's largest desert is the Sahara, which covers nearly all of northern Africa.",
    "India has largest popoulation in the world.",
    "westbengal state has more population than canada.",
]

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

q = "which  state has more popoulation then canada"

def query(q:str, sents) -> str:
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
    if len(matched) == 0:
        print("Sorry! but i don't have any details about it.")
        return
    matched = sorted(matched, key=lambda k: k['m'], reverse=True)
    return matched[0]['a']
    

print(query(q))
