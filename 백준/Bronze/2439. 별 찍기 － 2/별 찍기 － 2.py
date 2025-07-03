a=int(input())
for i in range(1,a+1):
    for _ in range(a-i+1,1,-1):
        print(" ",end="")
    for _ in range(1,i+1):
        print("*",end="")
    print()    