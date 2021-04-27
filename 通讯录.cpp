#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define len sizeof(struct k)
#include<iostream>
using namespace std;
typedef struct k
{
	char a[9],name[100],sex[100],age[100],phone[20],jiguan[100],job[100],adress[100],tongxin[100];
	struct k *next;
}k;
k  *head=(k*)malloc(len),*p,*pre,*l=head,*p3;
void meau()
{
	cout<<"菜单功能"<<endl;
	cout<<"1 (1)输入 (2)添加记录"<<endl;
	cout<<"2 (1)显示 (2)查询记录"<<endl;
	cout<<"3 修改记录"<<endl;
	cout<<"4 写入文件"<<endl;
	cout<<"-1 结束菜单功能"<<endl;
}
void xianshi()
{
	int t;
	for(p=head->next,t=0;p!=0;p=p->next)
				    {cout<<"序号:"<<p->a<<" "<<"姓名:"<<p->name<<" "<<"性别:"<<p->sex<<" "<<"年龄:"<<p->age<<" "<<"电话:"<<p->phone<<" "<<"籍贯:"<<p->jiguan<<" "<<"现工作单位:"<<p->job<<" "<<"家庭住址:"<<p->adress<<" "<<"通信地址及邮编:"<<p->tongxin<<endl;t++;}
			   if(t==0) cout<<"无信息"<<endl;
}
void zimeau(int n)
{
	int m,t;
	char b[9];
	FILE *p1,*p2;
	p1=fopen("1.txt","r");
	p2=fopen("2.txt","w");
	if(n==1)
		while(1)
		{
		cout<<"1 输入    2 添加记录    0 返回菜单"<<endl;
		cin>>m;
		if(m==0) break;
		if(m==1)
		{
			while(!feof(p1))
			{   p=(k*)malloc(len);
				fscanf(p1,"%s %s %s %s %s %s %s %s %s",p->a,p->name,p->sex,p->age,p->phone,p->jiguan,p->job,p->adress,p->tongxin);
				l->next=p;
			    l=p;
			}
			l->next=0;
			cout<<"已输入"<<endl;
		}
		if(m==2)
		{
			cout<<"输入添加信息:序号:";
			cin>>b;
			for(p=head->next,t=0;p!=0;p=p->next)
				if(strcmp(p->a,b)==0) {cout<<"序号已使用"<<endl;t++;break;}
			if(t!=0) ;
			else
			{
            p=(k*)malloc(len);
			strcpy(p->a,b);
			cout<<"	     姓名:";
			cin>>p->name;
			cout<<"	     性别:";
			cin>>p->sex;
			cout<<"	         年龄:";
			cin>>p->age;
			cout<<"	         电话:";
			cin>>p->phone;
			cout<<"	     籍贯:";
			cin>>p->jiguan;
			cout<<"	       现工作单位:";
			cin>>p->job;
			cout<<"	     家庭住址:";
			cin>>p->adress;
			cout<<"通信地址及邮编:";
			cin>>p->tongxin;
			cout<<"（已添加）"<<endl;
			l->next=p;
			l=p;
			}
			l->next=0;
		}
		}
	if(n==2)
		while(1)
		{
			cout<<"1 显示    2 查询记录    0 返回菜单"<<endl;
			cin>>m;
			if(m==0) break;
		    if(m==1)
			   xianshi();
		    if(m==2)
		    {
			   cout<<"已有信息:"<<endl;
			   xianshi();
			   cout<<"输入需查询的信息:";
			   cin>>b;
			   for(p=head->next,t=0;p!=0;p=p->next)
				   if(strcmp(p->a,b)==0||strcmp(p->name,b)==0||strcmp(p->sex,b)==0||strcmp(p->age,b)==0||strcmp(p->jiguan,b)==0||strcmp(p->job,b)==0||strcmp(p->adress,b)==0||strcmp(p->phone,b)==0||strcmp(p->tongxin,b)==0)  {cout<<"序号:"<<p->a<<" "<<"姓名:"<<p->name<<" "<<"性别:"<<p->sex<<" "<<"年龄:"<<p->age<<" "<<"电话:"<<p->phone<<" "<<"籍贯:"<<p->jiguan<<" "<<"现工作单位:"<<p->job<<" "<<"家庭住址:"<<p->adress<<" "<<"通信地址及邮编:"<<p->tongxin<<endl;t++;}
			   if(t==0) cout<<"无此序号"<<endl;
		    }
		}
	if(n==3)
	while(1)
	 {
		cout<<"1 修改    2 删除    0 返回菜单"<<endl;
		cin>>m;
		if(m==0) break;
		if(m==1)
		{
			cout<<"已有信息:"<<endl;
			xianshi();
			cout<<endl<<"输入修改序号:";
			cin>>b;
			for(p3=head,p=head->next,t=0;p!=0;p3=p,p=p->next)
			if(strcmp(p->a,b)==0)
			{
				cout<<"原信息:"<<"序号:"<<p->a<<" "<<"姓名:"<<p->name<<" "<<"性别:"<<p->sex<<" "<<"年龄:"<<p->age<<" "<<"电话:"<<p->phone<<" "<<"籍贯:"<<p->jiguan<<" "<<"现工作单位:"<<p->job<<" "<<"家庭住址:"<<p->adress<<" "<<"通信地址及邮编:"<<p->tongxin<<endl;
				t++;
				cout<<"修改项原信息:";
				cin>>b;
				    if(strcmp(p->a,b)==0){ cout<<"修改项修改后信息:";cin>>p->a;}
					if(strcmp(p->name,b)==0){ cout<<"修改项修改后信息:";cin>>p->name;}
					if(strcmp(p->sex,b)==0){ cout<<"修改项修改后信息:";cin>>p->sex;}
					if(strcmp(p->age,b)==0){ cout<<"修改项修改后信息:";cin>>p->age;}
					if(strcmp(p->jiguan,b)==0){ cout<<"修改项修改后信息:";cin>>p->jiguan;}
					if(strcmp(p->job,b)==0){ cout<<"修改项修改后信息:";cin>>p->job;}
					if(strcmp(p->adress,b)==0){ cout<<"修改项修改后信息:";cin>>p->adress;}
					if(strcmp(p->phone,b)==0){ cout<<"修改项修改后信息:";cin>>p->phone;}
					if(strcmp(p->tongxin,b)==0){ cout<<"修改项修改后信息:";cin>>p->tongxin;}
			        cout<<"（已修改）"<<endl;
				    break;
			}
			if(t==0) cout<<"无此序号"<<endl;
		}
		if(m==2)
		{
			cout<<"已有信息:"<<endl;
			xianshi();
			cout<<endl<<"需删除的序号:";
			cin>>b;
			for(pre=head,p=pre->next,t=0;p!=0;pre=p,p=pre->next)
			if(strcmp(p->a,b)==0)
			{
				pre->next=p->next;
				cout<<"删除成功"<<endl;
				free(p);
				t++;
				break;
			}
			if(t==0) cout<<"无此序号"<<endl;
		}
	}

	if(n==4)
	{
		while(1)
		{
		cout<<"1 写入文件    0 返回菜单"<<endl;
		cin>>m;
		if(m==0)break;
		if(m==1)
		{
			for(p=head->next,t=0;p!=0;p=p->next)
			{fprintf(p2,"%s %s %s %s %s %s %s %s %s\n",p->a,p->name,p->sex,p->age,p->phone,p->jiguan,p->job,p->adress,p->tongxin);t++;}
			if(t==0) cout<<"无信息"<<endl;
			else 
				{
					cout<<"已写入"<<endl;
					fclose(p2);
			    }
		}
		}
	}	
}
int main()
{
	int n;
	head->next=0;
	while(1)
	{   
		meau();
		scanf("%d",&n);
		if(n==-1)
	    {
			cout<<"结束菜单功能"<<endl;
			break;
		}
		zimeau(n);
		system("cls");
	}
	system("pause");
	return 0;
}
