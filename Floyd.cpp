#include<stdio.h> 
#include<stdlib.h>
#define MAX 100
#define MAXX 100000000
int main(){
	int edge[MAX][MAX];
	int vertex,edges;
	int a,b,value;
	scanf("%d %d",&vertex,&edges);
	for(int i=1;i<=vertex;i++){
		for(int j=1;j<=vertex;j++){
			if(i==j)
			   edge[i][j]=0;
			else
			   edge[i][j]=MAXX;
		}
	}
	for(int i=1;i<=edges;i++){
	    scanf("%d %d %d",&a,&b,&value);
		edge[a][b]=value; 
    }
    for(int i=1;i<=vertex;i++){
    	for(int j=1;j<=vertex;j++){
    		for(int m=1;m<=vertex;m++){
    			if(edge[i][j]>edge[i][m]+edge[m][j])
    			    edge[i][j]=edge[i][m]+edge[m][j];
			}
		}
	}
	for(int i=1;i<=vertex;i++){
		for(int j=1;j<=vertex;j++){
			printf("%10d",edge[i][j]);
		}
		printf("\n");
	}
}
