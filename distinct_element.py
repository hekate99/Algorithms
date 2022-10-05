# l=[1,2,3,3,3,3,4,5,6,7]
# ans=[]
# for i in l:
#     if i not in ans:
#         ans.append(i)
# print(ans)
#####################################################
# l=[1,2,3,3,3,3,4,5,6,7]
# for i in range(len(l)):
#     d=0
#     for j in range(0,i):
#         if l[i]==l[j]:
#             d=1 
#             break 
#     if d==0:
#         print(l[i], end=" ")
#####################################################
##nlogn by using sorting 
l=[1,2,3,3,3,3,4,5,6,7]
l.sort()
for i in range(len(l)):
    if(i<len(l)-1 and l[i]==l[i+1]):
        while i<len(l)-1 and(l[i]==l[i+1]):
            i+=1 
    
    else:
        print(l[i], end=" ")

