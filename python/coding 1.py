
from unittest import result


def solve(A):
    sum=0
    for i in A:
        sum+=int(i)
    if sum==1:
        return 1
    elif sum<9:
        return 0
    else:
        return solve(str(sum))
if __name__=='__main__':
    #x= input("enter the number ")
    #print(solve(x))

    A=input()
    result= solve(A)