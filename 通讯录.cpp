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
	cout<<"�˵�����"<<endl;
	cout<<"1 (1)���� (2)��Ӽ�¼"<<endl;
	cout<<"2 (1)��ʾ (2)��ѯ��¼"<<endl;
	cout<<"3 �޸ļ�¼"<<endl;
	cout<<"4 д���ļ�"<<endl;
	cout<<"-1 �����˵�����"<<endl;
}
void xianshi()
{
	int t;
	for(p=head->next,t=0;p!=0;p=p->next)
				    {cout<<"���:"<<p->a<<" "<<"����:"<<p->name<<" "<<"�Ա�:"<<p->sex<<" "<<"����:"<<p->age<<" "<<"�绰:"<<p->phone<<" "<<"����:"<<p->jiguan<<" "<<"�ֹ�����λ:"<<p->job<<" "<<"��ͥסַ:"<<p->adress<<" "<<"ͨ�ŵ�ַ���ʱ�:"<<p->tongxin<<endl;t++;}
			   if(t==0) cout<<"����Ϣ"<<endl;
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
		cout<<"1 ����    2 ��Ӽ�¼    0 ���ز˵�"<<endl;
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
			cout<<"������"<<endl;
		}
		if(m==2)
		{
			cout<<"���������Ϣ:���:";
			cin>>b;
			for(p=head->next,t=0;p!=0;p=p->next)
				if(strcmp(p->a,b)==0) {cout<<"�����ʹ��"<<endl;t++;break;}
			if(t!=0) ;
			else
			{
            p=(k*)malloc(len);
			strcpy(p->a,b);
			cout<<"	     ����:";
			cin>>p->name;
			cout<<"	     �Ա�:";
			cin>>p->sex;
			cout<<"	         ����:";
			cin>>p->age;
			cout<<"	         �绰:";
			cin>>p->phone;
			cout<<"	     ����:";
			cin>>p->jiguan;
			cout<<"	       �ֹ�����λ:";
			cin>>p->job;
			cout<<"	     ��ͥסַ:";
			cin>>p->adress;
			cout<<"ͨ�ŵ�ַ���ʱ�:";
			cin>>p->tongxin;
			cout<<"������ӣ�"<<endl;
			l->next=p;
			l=p;
			}
			l->next=0;
		}
		}
	if(n==2)
		while(1)
		{
			cout<<"1 ��ʾ    2 ��ѯ��¼    0 ���ز˵�"<<endl;
			cin>>m;
			if(m==0) break;
		    if(m==1)
			   xianshi();
		    if(m==2)
		    {
			   cout<<"������Ϣ:"<<endl;
			   xianshi();
			   cout<<"�������ѯ����Ϣ:";
			   cin>>b;
			   for(p=head->next,t=0;p!=0;p=p->next)
				   if(strcmp(p->a,b)==0||strcmp(p->name,b)==0||strcmp(p->sex,b)==0||strcmp(p->age,b)==0||strcmp(p->jiguan,b)==0||strcmp(p->job,b)==0||strcmp(p->adress,b)==0||strcmp(p->phone,b)==0||strcmp(p->tongxin,b)==0)  {cout<<"���:"<<p->a<<" "<<"����:"<<p->name<<" "<<"�Ա�:"<<p->sex<<" "<<"����:"<<p->age<<" "<<"�绰:"<<p->phone<<" "<<"����:"<<p->jiguan<<" "<<"�ֹ�����λ:"<<p->job<<" "<<"��ͥסַ:"<<p->adress<<" "<<"ͨ�ŵ�ַ���ʱ�:"<<p->tongxin<<endl;t++;}
			   if(t==0) cout<<"�޴����"<<endl;
		    }
		}
	if(n==3)
	while(1)
	 {
		cout<<"1 �޸�    2 ɾ��    0 ���ز˵�"<<endl;
		cin>>m;
		if(m==0) break;
		if(m==1)
		{
			cout<<"������Ϣ:"<<endl;
			xianshi();
			cout<<endl<<"�����޸����:";
			cin>>b;
			for(p3=head,p=head->next,t=0;p!=0;p3=p,p=p->next)
			if(strcmp(p->a,b)==0)
			{
				cout<<"ԭ��Ϣ:"<<"���:"<<p->a<<" "<<"����:"<<p->name<<" "<<"�Ա�:"<<p->sex<<" "<<"����:"<<p->age<<" "<<"�绰:"<<p->phone<<" "<<"����:"<<p->jiguan<<" "<<"�ֹ�����λ:"<<p->job<<" "<<"��ͥסַ:"<<p->adress<<" "<<"ͨ�ŵ�ַ���ʱ�:"<<p->tongxin<<endl;
				t++;
				cout<<"�޸���ԭ��Ϣ:";
				cin>>b;
				    if(strcmp(p->a,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->a;}
					if(strcmp(p->name,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->name;}
					if(strcmp(p->sex,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->sex;}
					if(strcmp(p->age,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->age;}
					if(strcmp(p->jiguan,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->jiguan;}
					if(strcmp(p->job,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->job;}
					if(strcmp(p->adress,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->adress;}
					if(strcmp(p->phone,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->phone;}
					if(strcmp(p->tongxin,b)==0){ cout<<"�޸����޸ĺ���Ϣ:";cin>>p->tongxin;}
			        cout<<"�����޸ģ�"<<endl;
				    break;
			}
			if(t==0) cout<<"�޴����"<<endl;
		}
		if(m==2)
		{
			cout<<"������Ϣ:"<<endl;
			xianshi();
			cout<<endl<<"��ɾ�������:";
			cin>>b;
			for(pre=head,p=pre->next,t=0;p!=0;pre=p,p=pre->next)
			if(strcmp(p->a,b)==0)
			{
				pre->next=p->next;
				cout<<"ɾ���ɹ�"<<endl;
				free(p);
				t++;
				break;
			}
			if(t==0) cout<<"�޴����"<<endl;
		}
	}

	if(n==4)
	{
		while(1)
		{
		cout<<"1 д���ļ�    0 ���ز˵�"<<endl;
		cin>>m;
		if(m==0)break;
		if(m==1)
		{
			for(p=head->next,t=0;p!=0;p=p->next)
			{fprintf(p2,"%s %s %s %s %s %s %s %s %s\n",p->a,p->name,p->sex,p->age,p->phone,p->jiguan,p->job,p->adress,p->tongxin);t++;}
			if(t==0) cout<<"����Ϣ"<<endl;
			else 
				{
					cout<<"��д��"<<endl;
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
			cout<<"�����˵�����"<<endl;
			break;
		}
		zimeau(n);
		system("cls");
	}
	system("pause");
	return 0;
}
