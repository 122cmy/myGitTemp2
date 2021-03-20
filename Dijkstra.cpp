#include<iostream>
using namespace std;
const int inf=0x3f3f3f3f;
const int MAX=1000;
int sides[MAX][MAX];//边的邻接矩阵
int path[MAX];//标记
int dis[MAX];//距离
int vertexNum,sideNum;
int a1,a2,value;
int main(void){
	cin>>vertexNum>>sideNum;
	for(int i=1;i<=vertexNum;i++){
		for(int j=1;j<=vertexNum;j++){
			if(i==j)
			sides[i][j]=0;
			else
			sides[i][j]=inf;
		}
	}
	for(int i=1;i<=sideNum;i++){
		cin>>a1>>a2>>value;
		sides[a1][a2]=value;
	}
	for(int i=1;i<=vertexNum;i++){
		dis[i]=sides[1][i];
	}
	for(int i=1;i<=vertexNum;i++){
		path[i]=0;
	}
	path[1]=1;
	for(int i=1;i<=vertexNum-1;i++){
		int min=inf;
		int index=0;
		for(int j=1;j<=vertexNum;j++){
			if(min>dis[j] &&  path[j]==0){
			min=dis[j];
			index=j;
		}
	}
	path[index]=1;//标记
	for(int j=1;j<=vertexNum;j++){
		if(sides[index][j]<inf){
			if(dis[j]>dis[index]+sides[index][j]){
				dis[j]=dis[index]+sides[index][j];
			}
		}
	} 
}
for(int i=1;i<=vertexNum;i++){
	cout<<dis[i]<<' ';
}
}
 

