#include <stdio.h>
int main() {
    int as,rs;
	scanf("%d %d",&as,&rs);
	long long prefix[as+1];
	prefix[0]=0;
	for(int i=1;i<=as;i++){
	    long long value;
	    scanf("%lld",&value);
	    prefix[i]=prefix[i-1]+value;
	}
	for(int i=0;i<rs;i++){
	    int left,right;
	    scanf("%d%d",&left,&right);
	    long long sum=prefix[right]-prefix[left-1];
	    printf("%lld\n",sum);
	}
	return 0;

}

