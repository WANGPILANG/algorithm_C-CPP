#include<stdio.h>

long long F[91];//n范围大于0小于90

int main(){
    F[1]=1;//已知
    F[2]=2;

    for(int i=3;i<=90;i++){
        F[i]=F[i-1]+F[i-2];//递推
    }
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%lld\n",F[n]);
    }
    return 0;

}
