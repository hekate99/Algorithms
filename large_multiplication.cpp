#include<bits/stdc++.h>
using namespace std;
int main() {
    long long num, p = 1, temp;
    scanf("%lld", &num);
    for(int i=0; i<num; i++)
    { 
        scanf("%lld",&temp);
        p=(p*temp) % 1000000007;
    }
    printf("%lld",p);
}