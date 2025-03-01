
def isIndex(arr, i, j)-> int:
    try:
        return arr[i][j]
    except:
        return None

def nextMax(arr:list, i, j):
    ij2 = isIndex(arr, i,j+1)
    i2j = isIndex(arr, i+1, j)
    if  ij2 and i2j:
        mx = max(ij2, i2j)
        return [ij2, i, j+1] if mx==ij2 else [i2j, i+1, j]
    elif ij2:
        return [ij2, i, j+1]
    elif i2j:
        return [i2j, i+1, j]
    else:
        return None


def sumMax(arr, m, n):
    sum=0
    i,j=0,0
    for _ in range(m+n):
        if i==0 and j==0 :
            print(arr[i][j], end=" ")
            sum+=arr[i][j]
        
        nm = nextMax(arr, i,j)
        if nm:
            i,j = nm[1:3]
            print(nm[0], end=" ")
            sum+=nm[0]
    print()
    print(sum)

_arr =[[1, 3, 1],
 [1, 1, 1],
 [100, 1, 100]]
 
sumMax(_arr, 3,3)
