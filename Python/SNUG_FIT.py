for _ in range(int(input())):
    number = int(input())
    length1 = sorted(list(map(int,input().split())))
    length2 = sorted(list(map(int,input().split())))
    lfin=[]
    ll=list(zip(length1,length2))
    for i in range(number):
        lfin+=[min(ll[i])]
    print(sum(lfin))
