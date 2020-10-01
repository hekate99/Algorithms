def sel_st(a):
    for i in range(len(a)):
        min_index=i
        for j in range(i+1,len(a)):
            if a[min_index]>a[j]:
                min_index=j 
        a[i],a[min_index]=a[min_index],a[i]
l=list(map(int,input().split()))
sel_st(l)
for i in l:
    print(i,end=" ")
