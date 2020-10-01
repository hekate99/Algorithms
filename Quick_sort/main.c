#include<stdio.h>
int swap(int *, int *);
void qui_st(int a[], int l, int h);
int parti(int a[],int l,int h);

int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d\n ",&a[i]);
    }
    qui_st(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

   return 0;
}

int swap(int* p,int* q){
    int tp= *p;
    *p=*q;
    *q=tp;
}   
int parti(int a[],int l,int h){
    int pi=a[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(a[j]<pi){
            i=i+1;
            swap(&a[i],&a[j]);
        }

    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
void qui_st(int a[], int l, int h){
    if(l<h){
        int pi=parti(a,l,h);
        qui_st(a,l,pi-1);
        qui_st(a,pi+1,h);
    }
}

