#include <stdio.h>

int main() {
	int n,maxf,maxs=-1,maxt=-1,cur;
	scanf("%d %d",&n,&maxf);
	for(int i=1;i<=n;i++){
	    scanf("%d",&cur);
	    if(cur>maxf){
	        maxt=maxs;
	        maxs=maxf;
	        maxf=cur;
	    }else if(cur>maxs){
	        maxt=maxs;
	        maxs=cur;
	    }
	    else if(cur>maxt){
	        maxt=cur;
	    }
	}
	printf("%d %d %d",maxf,maxs,maxt);

}
