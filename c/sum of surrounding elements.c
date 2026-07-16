#include <stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int rd[]={-1,-1,-1,0,0,1,1,1};
    int cd[]={-1,0,1,-1,1,-1,0,1};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int sum=0;
            for(int s=0;s<8;s++){
                int ar=i+rd[s],ac=j+cd[s];
                if(ar>=0 && ar<r && ac>=0 && ac<c){
                    sum+=arr[ar][ac];
                }
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}