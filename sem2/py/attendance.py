li = [
559, 587, 602, 603, 605, 606, 607, 608, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 629, 630, 631, 632, 633, 634, 636, 637, 639, 640, 641, 646, 647, 648, 649, 650, 652, 653, 654, 655, 656, 658, 659, 660, 728
]
# PRESENT STUDENT CODES
present = set(sorted([
  
  ]))
pcodes=""
acodes = ""
print("Present : ", len(present))
for i in li:
  if i in present:pcodes+= f"BWU/BCA/23/{i}\n"
  if i not in present: acodes+=f"BWU/BCA/23/{i}\n"
print(pcodes)
print("Absent : ", len(li)-len(present))
print(acodes)
