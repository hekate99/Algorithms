def knapsack(W,weights,profits):
    ratios=[p/w for p,w in zip(profits, weights)]
    n=len(weights)
    index=list(range(n))
    index.sort(key=lambda i: ratios[i],reverse=True)
    max_value=0
    fractions=[0]*n
    for i in index:
        if weights[i]<=W:
            max_value+=profits[i]
            W-= weights[i]
            fractions[i]=1
        else:
            fractions[i]=W/weights[i]
            max_value+=profits[i]*fractions[i]
            break
    return max_value    

weights=[10,20,30]
profits=[50,60,70]
W=60
print(knapsack(W, weights,profits))
