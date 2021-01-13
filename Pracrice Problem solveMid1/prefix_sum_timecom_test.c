#include<stdio.h>


int main(){
    int arr[1005];
    int prefix_sum[1005];
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    prefix_sum[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    int q,l,r;
    scanf("%d",&q);
    for(int i = 0; i < q; i++){
        scanf("%d%d",&l,&r);
        printf("%d\n",prefix_sum[r-1] - prefix_sum[l-2]);
    }

    return 0;
}
