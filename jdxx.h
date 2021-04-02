#include<stdio.h>
#pragma once
#define maxview 50//最大景点
#define FINITY 8888//无穷大
#define NOTVISITED 0//没有参观到
#define VISITED 1
#define MaxSize 100 
//typedef int edg;//权值类型
 typedef struct
{
	char name[20];//景点名称
	char number[10];//景点数字编号
	char intro[500];//景点介绍
}xinx;//存放景点信息
typedef struct
{
	int num;//顶点编号
	xinx date;//景点信息
}view;//单个景点类型
typedef struct
{   
	int n,e;//n为实际顶点数，e为实际边数
	view view1 [maxview];//存放顶点信息
	int len [maxview][maxview];//路径长度
}way;//路径图类型
way mgr;//全局变量,定义mgr为way类型 
void input();//录入信息
void chage();//修改信息
void map();//地图
void show();//查询景点信息
void sshort();//最短路径
void all();//所有路径
//void dfsm();//深度优先遍历
void add();//增加信息
void del();//删除信息
void creat(way *g,char *s ,int c)//辅助函数文件导入
{
	int i,j,k,w;           /*建立网络的邻接矩阵存储结构*/
	FILE *rf ;
	rf = fopen(s, "r") ;   /*从文件中读取图的边信息*/
	if (rf)
	{
		fscanf(rf,"%d%d",&g->n,&g->e);  /*读入图的顶点数与边数*/
		for(i=0;i<g->n;i++)    /*读入图中的顶点值*/
			fscanf(rf,"%1s",&g->view1[i]);
 
		for(i=0;i<g->n;i++)    /*初始化邻接矩阵*/
			for(j=0;j<g->n;j++)
				if (i==j) g->len[i][j]=0;//主对角全零
				else g->len[i][j]=FINITY;//趋于正无穷大
		for(k=0;k<g->e;k++)
		{
			fscanf(rf,"%d%d%d", &i,&j,&w);
			g->len[i][j]=w;
			if (c==0) g->len[j][i]=w;   /*如果C==0则建立无向网邻接矩阵，否则建立有向网邻矩阵*/
		}
		fclose(rf);
	}
	else g->n=0;
}//建立邻接表
//void  print(way g)
//{  /*辅助函数，输出邻接矩阵表示的图g*/
//	int i,j;
// 
//	for (i=0;i<g.n;i++)
//		printf("%c ",g.view1[i]); 
//
//	printf("\n");
//	for (i=0;i<g.n;i++)
//	{    
//		for (j=0;j<g.n;j++)
//			printf("%6d",g.len[i][j]);
//		printf("\n");
//	}
//}

