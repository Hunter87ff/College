
#fibonacci
nx=0; fs=0; sn=1
for i in range(int(input("Enter terms : "))):
  nx=fs+sn
  fs=sn
  sn=nx
  print(nx)
