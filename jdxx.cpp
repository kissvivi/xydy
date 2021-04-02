#include "jdxx.h"//景点信息
#include<stdlib.h>
#include <string.h>
#define N 14//现有最大景点数
void input()//存入景点信息
{
	mgr.view1[1].num=1;
	strcpy (mgr.view1[1].date.name,"校门");
	strcpy (mgr.view1[1].date.number,"001");
	strcpy (mgr.view1[1].date.intro,"毗邻三环，几经返修，终于形成现在的校门，正面武汉工商学院几个大字，背后是我们的校训：弘德博问，和谐拓新。");
	mgr.view1[2].num=2;
	strcpy (mgr.view1[2].date.name,"实验楼");
	strcpy (mgr.view1[2].date.number,"002");
	strcpy (mgr.view1[2].date.intro,"实验楼顾名思义肯定是我大工商学子做实验的地方，此楼是我校多个实验基地，人才的发源地，旁边有一个快递收发点。");
	mgr.view1[3].num=3;
	strcpy (mgr.view1[3].date.name,"综合楼");
	strcpy (mgr.view1[3].date.number,"003");
	strcpy (mgr.view1[3].date.intro,"综合楼是我们学校教学的主要地方，也是老师办公的主要集聚地，综合楼大气美丽，是我们学校楼群中的颜值担当。");
	mgr.view1[4].num=4;
	strcpy (mgr.view1[4].date.name,"外语楼");
	strcpy (mgr.view1[4].date.number,"004");
	strcpy (mgr.view1[4].date.intro,"此楼全名应叫外语艺术楼，因为它一般是外语楼，一半是艺术楼，我们却更习惯以叫它外语楼，因为我们是非艺术类专业，但它的正门是有艺术与设计学院的，要找到它这几个大字是很明显的标志");
	mgr.view1[5].num=5;
	strcpy (mgr.view1[5].date.name,"1-4栋宿舍群");
	strcpy (mgr.view1[5].date.number,"005");
	strcpy (mgr.view1[5].date.intro,"这四栋寝室住着我们学校各个学院的学生，其中单数是女生宿舍，双数为男生宿舍");
	mgr.view1[6].num=6;
	strcpy (mgr.view1[6].date.name,"一食堂");
	strcpy (mgr.view1[6].date.number,"006");
	strcpy (mgr.view1[6].date.intro,"这里呢是有3个建筑的，一食堂、弘德楼和5栋宿舍，一食堂分两层特色各不同，味道算是可以的，和一食堂紧挨的楼栋呢就是弘德楼，也是我们学校最高的楼，这栋楼以租房的形式呢提供给老师同学自由的住宿，5栋是女生宿舍，就没什么好说的呢，只是听说有段时间，都叫它考研楼，因为有一整个宿舍都一起考上了研究生");
	mgr.view1[7].num=7;
	strcpy (mgr.view1[7].date.name,"体育馆");
	strcpy (mgr.view1[7].date.number,"007");
	strcpy (mgr.view1[7].date.intro,"体育馆全名体育运动中心，室内有各种“小球”项目，室外一边是足球场一边是篮球场。学校医务室就在体育管的靠湖那边。");
	mgr.view1[8].num=8;
	strcpy (mgr.view1[8].date.name,"足球场");
	strcpy (mgr.view1[8].date.number,"008");
	strcpy (mgr.view1[8].date.intro,"我们学校最大的一块活动区域，是不是会有露天活动在这举行，同时每天都会有人在这跑步、散步、运动。");
	mgr.view1[9].num=9;
	strcpy (mgr.view1[9].date.name,"图书馆");
	strcpy (mgr.view1[9].date.number,"009");
	strcpy (mgr.view1[9].date.intro,"图书馆是一个大学的灵魂，我们学校也是，图书馆需刷卡进入，还会不定时举行各种读书活动，以及各类讲坛，6楼是考研的学长学姐们的聚集地");
	mgr.view1[10].num=10;
	strcpy (mgr.view1[10].date.name,"静思湖");
	strcpy (mgr.view1[10].date.number,"010");
	strcpy (mgr.view1[10].date.intro,"静思湖是我们学校的内湖，有一个不能过湖的桥所以久而久之我们都叫那个桥为“回心转意桥”，同时每天也会有人去那里散步。");
	mgr.view1[11].num=11;
	strcpy (mgr.view1[11].date.name,"二食堂");
	strcpy (mgr.view1[11].date.number,"011");
	strcpy (mgr.view1[11].date.intro,"总会觉得二食堂的饭会比一食堂好吃，因为本人是住在一食堂这边的。二食堂也是两层，各种风味都有");
	mgr.view1[12].num=12;
	strcpy (mgr.view1[12].date.name,"清真食堂");
	strcpy (mgr.view1[12].date.number,"012");
	strcpy (mgr.view1[12].date.intro,"由于我们学校有预科班，所以就为信仰伊斯兰教的少数民族专门准备了清真食堂。");
	mgr.view1[13].num=13;
	strcpy (mgr.view1[13].date.name,"6-13栋宿舍群");
	strcpy (mgr.view1[13].date.number,"013");
	strcpy (mgr.view1[13].date.intro,"6-13栋寝室的男女分布情况我就不是特别清楚了，只知道13栋是女生寝室，9栋是男寝，9栋一楼有一个小食堂一样吃东西的地方。");
	mgr.view1[14].num=14;
	strcpy (mgr.view1[14].date.name,"黄家湖");
	strcpy (mgr.view1[14].date.number,"014");
	strcpy (mgr.view1[14].date.intro,"黄家湖很大，我们学校只是沾了一个黄家湖的边而已");
	way g;
	
}
void add()
{
	
	while(1)
	{printf("请输入要添加的顶点编号：<按00结束添加>");
		int a;
		xinx b;
		scanf("%d",&a);
		if(a==00)
		{
			break;
		}else{
			N+1;
		printf("请输入要添加的景点名称：");
		scanf("%s",b.name);
		printf("请输入要添加的景点编号：");
		scanf("%s",b.number);
		printf("请输入要添加的景点描述：");
		scanf("%s",b.intro);
		mgr.view1[a].num=a;
		strcpy (mgr.view1[a].date.name,b.name);
		strcpy (mgr.view1[a].date.number,b.number);
		strcpy (mgr.view1[a].date.intro,b.intro);}
	}
}
void chage()//修改信息 
{
	int n,a;
	   
	for(int i=0;i<N;i++)
	{
		printf("请输入要修改的景点编号<输入00结束插入>\n");
		scanf("%d",&n);
		if(n==00)
		{
			break;
		}
	    printf("********************************************************\n");
		printf("                     1.顶点编号                         \n");
		printf("                     2.景点名称                         \n");
		printf("                     3.景点编号                         \n");
		printf("                     4.景点简介                         \n");
		printf("                     5.退出                             \n");
		printf("********************************************************\n");
		printf("请按提示输入要修改的信息:");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
		printf("请输入顶点编号:");
		scanf("%d",&mgr.view1[n].num);
		break;
		case 2:
		printf("请输入景点名称:");
		scanf("%s",mgr.view1[n].date.name);
		break;
		case 3:
		printf("请输入景点编号:");
		scanf("%s",mgr.view1[n].date.number);
		break;
		case 4:
		printf("请输入景点简介:");
		scanf("%s",mgr.view1[n].date.intro);
		break;
		case 5:return;
		}
	}
}
void map()
{   
	printf("|------------------------------------------------------------------------------------------------------|\n");
	printf("|   |-------------------------------------------------------------------|    |---------------------|   |\n");
	printf("|   |               武  汉  工  商  学  院  地  图                      |    |  6-12   |  |        |   |\n");
	printf("|   |                                           made in  vivi           |    |---------|  |--------|   |\n");
	printf("|   |-------------------------------------------------------------------|    |  学 生  |  |     13   | |\n");
	printf("|                                                                            |---------|  |----------| |\n");
	printf("|                           |----------|                                     |  公 寓  |  |    13栋  | |\n");
	printf("| |                         |  实验楼2 |                                     |-----------------------| |\n");
	printf("| |                         |----------|                                              |-------------|  |\n");
	printf("| |                 |--------------|                                                  | 清 真食堂12 |  |\n");
	printf("|---|               |    综合楼3   |                          ~~~~~~~~                |-------------|  |\n");
	printf("|校 |               |--------------|            /--\\        ~    静   ~          |---------|           |\n");
	printf("|门 |                                     |---       ---|   ~    思    ~         |   二    |           |\n");
	printf("| 1 |                                     |   图书馆 9  |   ~    湖    ~         |      11 |           |\n");
	printf("|---|     |-------|---|                   |-------------|    ~    10   ~         |   食 堂 |           |\n");
	printf("| |       |-------|---|                                       ~~~~~~~~           |         |           |\n");
	printf("| |        外 语 楼 4 |             |-----------------------|                    |---------|           |\n");
	printf("| |       |-------|---|             |     足  球  场        |                                          |\n");
	printf("|         |-------|---|             |           8           |                                          |\n");
	printf("|                                   |-----------------------|              ~ ~ ~                       |\n");
	printf("|      |---------|------|             |-----   -----|                    ~             ~  ~            |\n");
	printf("|      |         |      |             |   体 育 馆7 |                    ~                  ~          |\n");
	printf("|      |-------|--------|             |---        --|                            ~黄~              ~   |\n");
	printf("|      |1-4学生|  宿舍5 |                                              ~                          ~    |\n");
	printf("|      |-------|--------|                                             ~                          ~     |\n");
	printf("|                                                                    ~           ~家~             ~    |\n");
	printf("|             |-----|                                                 ~                           ~    |\n");
	printf("|             |  弘-|                  |----|                       ~                      14      ~   |\n");
	printf("|             |  德-|----  -----  -----|- 5-|                                      ~湖~            ~   |\n");
	printf("|             |  楼-|    一食堂 6      |-栋-|                          ~                          ~    |\n");
	printf("|             |-----|__________________|----|                          ~                           ~   |\n");
	printf("|                                                                      ~ ~                      ~~     |\n");
	printf("|------------------------------------------------------------------------------------------------------|\n");
}
typedef int dist[N];//距离向量类型
typedef int path[N];//路径类型
//typedef enum{F,T} boolean;//F为0，T为1
void dijkstra(way g,int v0,path p,dist d)//迪杰斯拉算法
{
	int final[N];
	int i,j,k,v,min,x;
	/*第一步 初始化集合s与距离向量d*/
	for(v=0;v<g.n;v++)
	{
		final[v]=NOTVISITED;
		d[v]=g.len[v0][v];
		if (d[v]<FINITY&&d[v]!=0)
			p[v]=v0;
		else
			p[v]=-1;//v无前驱
		final[v0]=VISITED; d[v0]=0;//初始状态
	}
	/*第二步 依次找出n-1个节点加入到s中*/
	for (i=1;i<g.n;i++)
	{
		min=FINITY;
		for (k=1;k<g.n;++k)//找最小边入节点
			if(!final[k]&&d[k]<min)//！final[k]表示k还在v-s中
			{
				v=k;min=d[k];
			}
			//printf("\n%c---%d\n",g.view1[v],min);//输出本次入选的顶点距离
			if(min==FINITY) return;
			final[v]=VISITED;
			/*第三步 修改s与v-s中各节点的距离*/
			for(k=1;k<g.n;++k)
				if(!final[k]&&(min+g.len[v][k]<d[k]))
				{
					d[k]=min+g.len[v][k];
					p[k]=v;
				}
	}
}
void print_gpd(way g,path p,dist d)//输出路径
{
	int st[N],i,pre,top=-1;
	for(i=0;i<g.n;i++)
	{
		printf("\n距离：%7d,路径:",d[i]);
		st[++top]=i;
		pre=p[i];
		while(pre!=-1)
		{
			st[++top]=pre;
			pre=p[pre];
		}
		while(top>0)
			printf("-->%2d",st[top--]);
	}
}
typedef int dist1[N][N];//距离向量类型
typedef int path1[N][N];//路径
void floyd(way g,path1 p,dist1 d)//佛洛依德算法
{
	int i,j,k;
	for(i=0;i<g.n;i++)//初始化
		for(j=0;j<g.n;j++)
		{
			d[i][j]=g.len[i][j];
			if(/*i!=j&&*/d[i][j]<FINITY)
				p[i][j]=i;
			   /* p[j][i]=i;*/
			/*else p[i][j]=-1;*/
		}
		for (k=0;k<g.n;k++)//递推求解每一对定点间的最短距离
		  {
			  for(i=0;i<g.n;i++)
				  for(j=0;j<g.n;j++)
					  if(d[i][j]>(d[i][k]+d[k][j]))
					  {
					d[i][j]=d[i][k]+d[k][j];
					p[i][j]=k;
					/*p[j][i]=k;*/
				      }
		}
}
void display(way g,dist1 d,path1 p,int i,int j)  
{         /*打印两个景点的路径及最短路径*/  
    int x,y;  /*creat(&g,"map.txt",0);*/
    x=i;  
    y=j;  
    printf("您要查询的两景点间最短路径是： \n\n"); 
	fflush(stdin);
    if(i<j)  
    {  
        printf("结束点：%d",y);  
		while(p[i][j]!=0)  
        {  
            printf("<--%d",d[i][j]);  
            if(i<j)  
                j=d[i][j];  
            else  
                i=d[j][i];  
        }  
        printf("<--开始点：%d\n\n",x);  
        printf("%d->%d的最短路径是： %d 米。\n\n",x,y,p[x][y]);  
    }  
    else  
    {  
        printf("开始点：%d",x); 
		while(p[i][j]!=0)  
        {  
            printf("-->%d",d[i][j]);  
            if(i<j)  
                j=d[i][j];  
            else  
                i=d[j][i];  
        }  
        printf("->%d结束点：\n\n",y);  
        printf("%d->%d的最短路径是： %d 米。\n\n",x,y,p[x][y]);  
    }  
}
void sshort()  
{    /*要查找的两景点的最短路径*/  
    int i,j;
	way g;dist1 d;path1 p;
	creat(&g,"map.txt",0);
    printf("请输入要查询的两个景点的数字编号(1->14)中间用空格间隔开。\n");  
    scanf("%d %d",&i,&j);  
    if(i>N||i<0||j>N||j<0)  
    {  
        printf("输入信息错误！\n\n");  
        printf("请输入要查询的两个景点的数字编号（1->14）中间用空格间隔开。\n");  
        scanf("%d %d",&i,&j);  
    }  
    else  
    {  
        floyd(g,d,p);  
        display(g,d,p,i,j);  
    }     
}
//void print_gpd1(way g,path1 p,dist1 d)
//{
//	int i,j,pre;
//	for(i=0;i<g.n;i++)
//		for(j=0;j<g.n;j++)
//			/*if(i!=j)
//			{
//				printf("%d-->%d:",&i,&j);*/
//				if(d[i][j]==FINITY)
//				{
//					if(i!=j)
//						printf("不存在路径");
//				}
//				else
//				{
//					printf("%d->%d路径长度为%d:路径为：",i,j,d[i][j]);
//					printf("%d,",i);//输出路径上的
//					//Ppath(p,i,j);    //输出路径上的中间点
//                   printf("%d\n",j);//输出路径上的终点
//					/*pre=d[i][j];
//					while(pre!=-1)
//					{
//						pre=d[pre][j];
//					}
//					printf("%d",j);*/
//				}
//			}
//void sshort()
//{
//	way g;path1 p;dist1 d;int i,j;
//	creat(&g,"map.txt",0);
//	printf("请输入您的所在位置：");
//	scanf("%d",&i);
//	printf("请输入您要去的位置：");
//	scanf("%d",&j);
//	floyd(g,p,d);
//	print_gpd1(g,p,d);
//}
void all()
{
	way g;path p;dist d;int v0,v;
	creat(&g,"map.txt",0);
	printf("请输入您的所在位置v0：");
	scanf("%d",&v0);
	if(v0>N||v0<0)  
    {  
        printf("输入信息错误！\n\n");  
        printf("请输入您的所在位置v0：");  
        scanf("%d ",&v0);  
    }
	else{
	dijkstra(g,v0,p,d);
	printf("从当前位置出发的所有路径如下：\n");
	print_gpd(g,p,d);}
}
void show()
{
    int m;  
    printf("请输入查询景点序号（序号以地图标识为准）:\n");  
    scanf("%d",&m); fflush(stdin);
	if(m>maxview)
		printf("\n输入错误");
	else if(m){
	    printf("景点编号:%s\t",mgr.view1[m].date.number);  
        printf("景点名称:%s\n",mgr.view1[m].date.name);  
		printf("景点简介:%s\n",mgr.view1[m].date.intro);  }
	
   /* switch(m)  
    {  
    case m:  
        printf("景点编号:%s\t",mgr.view1[m].date.number);  
        printf("景点名称:%s\n",mgr.view1[m].date.name);  
        printf("景点简介:%s\n",mgr.view1[m].date.intro);  
        break;  
    case 2:  
        printf("景点编号:%s\t",mgr.view1[2].date.number);  
        printf("景点名称:%s\n",mgr.view1[2].date.name);  
        printf("景点简介:%s\n",mgr.view1[2].date.intro);   
        break;  
    case 3:  
        printf("景点编号:%s\t",mgr.view1[3].date.number);  
        printf("景点名称:%s\n",mgr.view1[3].date.name);  
        printf("景点简介:%s\n",mgr.view1[3].date.intro);  
        break;  
    case 4:  
        printf("景点编号:%s\t",mgr.view1[4].date.number);  
        printf("景点名称:%s\n",mgr.view1[4].date.name);  
        printf("景点简介:%s\n",mgr.view1[4].date.intro); 
        break;  
    case 5:  
        printf("景点编号:%s\t",mgr.view1[5].date.number);  
        printf("景点名称:%s\n",mgr.view1[5].date.name);  
        printf("景点简介:%s\n",mgr.view1[5].date.intro);  
        break;  
    case 6:  
        printf("景点编号:%s\t",mgr.view1[6].date.number);  
        printf("景点名称:%s\n",mgr.view1[6].date.name);  
        printf("景点简介:%s\n",mgr.view1[6].date.intro);  
        break;  
    case 7:  
        printf("景点编号:%s\t",mgr.view1[7].date.number);  
        printf("景点名称:%s\n",mgr.view1[7].date.name);  
        printf("景点简介:%s\n",mgr.view1[7].date.intro);
        break;  
    case 8:  
        printf("景点编号:%s\t",mgr.view1[8].date.number);  
        printf("景点名称:%s\n",mgr.view1[8].date.name);  
        printf("景点简介:%s\n",mgr.view1[8].date.intro);  
        break;  
    case 9:  
        printf("景点编号:%s\t",mgr.view1[9].date.number);  
        printf("景点名称:%s\n",mgr.view1[9].date.name);  
        printf("景点简介:%s\n",mgr.view1[9].date.intro);  
        break;  
    case 10:  
        printf("景点编号:%s\t",mgr.view1[10].date.number);  
        printf("景点名称:%s\n",mgr.view1[10].date.name);  
        printf("景点简介:%s\n",mgr.view1[10].date.intro);  
        break;  
    case 11:  
        printf("景点编号:%s\t",mgr.view1[11].date.number);  
        printf("景点名称:%s\n",mgr.view1[11].date.name);  
        printf("景点简介:%s\n",mgr.view1[11].date.intro);  
        break;  
    case 12:  
        printf("景点编号:%s\t",mgr.view1[12].date.number);  
        printf("景点名称:%s\n",mgr.view1[12].date.name);  
        printf("景点简介:%s\n",mgr.view1[12].date.intro);  
        break;  
    case 13:  
        printf("景点编号:%s\t",mgr.view1[13].date.number);  
        printf("景点名称:%s\n",mgr.view1[13].date.name);  
        printf("景点简介:%s\n",mgr.view1[13].date.intro);  
        break;  
    case 14:  
        printf("景点编号:%s\t",mgr.view1[14].date.number);  
        printf("景点名称:%s\n",mgr.view1[14].date.name);  
        printf("景点简介:%s\n",mgr.view1[14].date.intro); 
        break;  
    default:  
        printf("输入序号错误。\n");  
        break;  
    }  */
    printf("\n");  
}
int visit[N];//标记数组
//void init()//初始化标记术组
//{
//	for(int i=0;i<N;i++)
//		visit[i]=0;
//}
//void dfsm(way g,int v)
//{
//	
//	if(!visit[v])
//	{
//		printf("%d",g.len);
//		visit[v]=1;
//	}
//	for(int i=0;i<g.n;i++)
//		dfsm(g,v);
//}
//void dfsp()
//{
//	way g;init();
//	creat(&g,"map.txt",0);
//	
//	dfsm(g,1);
//}
void del()
{
int n,a;
	 xinx c;  
	for(int i=0;i<N;i++)
	{
		printf("请输入要删除的景点编号<输入00结束插入>\n");
		scanf("%d",&n);
		if(n==00)
		{
			break;
		}
	    printf("********************************************************\n");
		printf("                     1.顶点编号                         \n");
		printf("                     2.景点名称                         \n");
		printf("                     3.景点编号                         \n");
		printf("                     4.景点简介                         \n");
		printf("                     5.退出                             \n");
		printf("********************************************************\n");
		printf("请按提示输入要删除的信息:");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			mgr.view1[n].num=00/*mgr.view1[n+1].num*/;
			N-1;
		break;
		case 2:
			strcpy(mgr.view1[n].date.name,"删除成功"/*mgr.view1[n+1].date.name*/);
			N-1;
		break;
		case 3:
			strcpy(mgr.view1[n].date.number,"删除成功"/*mgr.view1[n+1].date.number*/);
			N-1;
		break;
		case 4:
			strcpy(mgr.view1[n].date.intro,"删除成功"/*mgr.view1[n+1].date.intro*/);
			N-1;
		break;
		case 5:return;
		}
	}
}
void addw()
{
	FILE *fp;
if((fp=fopen("map.txt","w"))==NULL) {
	printf("File cannot be opened/n");
	exit(0);
}
else
	printf("File opened for writing/n");

fclose(fp); 
}
void menu()
{
	while(1)
	{
		printf("**********************************************************************\n");
		printf("*                    欢迎进入武汉工商学院导游系统                    *\n");
		printf("**********************************************************************\n");
		printf("                     1.武汉工商学院地图                               \n");
		printf("                     2.查询景点信息                                   \n");
		printf("                     3.修改景点信息                                   \n");
		printf("                     4.最短路径查询                                   \n");
		printf("                     5.所有路径查询                                   \n");
		printf("                     6.删除景点信息                                   \n");
		printf("                     7.添加景点信息                                   \n");
		printf("                     8.退出                                           \n");
		printf("**********************************************************************\n");
	int m;way g;
	printf("请输入你的选择：");
	scanf("%d",&m);
	switch(m)
	{
	case 1:
		map();
		break;
	case 2:
		show();
		break;
	case 3:
		chage();
		break;
	case 4:sshort();
		break;
    case 5:all();
		break;
    case 6:del();
		break;
	case 7:add();
		break;
	case 8:
		exit(0);
		break;
		default:  
        printf("输入序号错误。\n");  
        break;  
	}system("pause");
	system("cls");}
}
void main()
{   way g;
	input();
	menu();
	system("pause");
}