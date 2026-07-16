#include <stdio.h>
int main() {
    int l;
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        int n;
        scanf("%d",&n);
        
        char s[100];
        scanf("%s",s);
        
        int res=0,max=0,count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                count++;
            }
            else{
                res=(count+1)/2;
                if(res>max){
                    max=res;
                }
                count=0;
            }
        }
        res=(count+1)/2;
        if(res>max)
            max=res;
        printf("%d\n",max);
    }
    return 0;
}