#include <stdio.h>
void findmax(int fsmax[],int row,int n,int copy[row][n]){
    int maxf=copy[row][0],smax=-1;
    for(int col=1;col<n;col++){
        if(copy[row][col]>maxf){
            smax=maxf;
            maxf=copy[row][col];
        }
    }
    fsmax[0]=maxf;
    fsmax[1]=smax;
}

int main() {
	int n,m,maxf,maxs=-1,maxt=-1,cur;
	scanf("%d %d",&m,&n);
	int arr[m][n],copy[m][n];
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        scanf("%d",&arr[i][j]);
	        if (i==0){
	            copy[i][j]=arr[i][j];
	        }
	    }
	}
	int fsmax[2];
	for(int row=1;row<m;row++){
	    findmax(fsmax,row-1,n,copy);
	    for(int i=0;i<n;i++){
	        copy[row][i]=arr[row][i]+(copy[row-1][i]==fsmax[0]?fsmax[1]:fsmax[0]);
	    }
	}
	printf("%d",maxf);
}
/*
70 50 80 50
100 90 60 150
200 60 40 30
*/