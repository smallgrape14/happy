#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{ 	char type_of_variable[5],variable_name[25],initial_value[6],operating[3];
	scanf("%s%s%s%s",type_of_variable,variable_name,operating,initial_value);//��ʼ�������� 
	int sum,s=0;   void last(int sum);
	int set_initial_value(char in[]);
	int set_changing_value(int sum,char variable_name[]);//�������� 
    s=set_initial_value(initial_value);//��ʼֵ 
	sum=set_changing_value(s,variable_name);   //����ֵ 
	last(sum);
    system("PAUSE");
	    return 0;
} 
    int transform_initial_value1(char initial_value[])//����.1. ���������ֵ�ת�� 
 {
 	int s;
 	if(strcmp("��",initial_value)==0) s=0;
	 else if(strcmp("һ",initial_value)==0)s=1;
	 else if(strcmp("��",initial_value)==0)s=2;
	 else if(strcmp("��",initial_value)==0)s=3;
	 else if(strcmp("��",initial_value)==0)s=4;
     else if(strcmp("��",initial_value)==0)s=5;
	 else if(strcmp("��",initial_value)==0)s=6;
	 else if(strcmp("��",initial_value)==0)s=7;
	 else if(strcmp("��",initial_value)==0)s=8;
	 else if(strcmp("��",initial_value)==0)s=9;
	 else if(strcmp("ʮ",initial_value)==0)s=10;
   
 return s;}
 int transform_initial_value2(char initial_value[])//����.2. ���������ֵ�ת��
 {
 	 int s;
 	 if(strcmp("ʮһ",initial_value)==0)s=11;
	 else if(strcmp("ʮ��",initial_value)==0)s=12;
	 else if(strcmp("ʮ��",initial_value)==0)s=13;
	 else if(strcmp("ʮ��",initial_value)==0)s=14;
     else if(strcmp("ʮ��",initial_value)==0)s=15;
	 else if(strcmp("ʮ��",initial_value)==0)s=16;
	 else if(strcmp("ʮ��",initial_value)==0)s=17;
	 else if(strcmp("ʮ��",initial_value)==0)s=18;
	 else if(strcmp("ʮ��",initial_value)==0)s=19;
	 return s;
}
 int transform_initial_value3(char initial_value[])//����.3. ���������ֵ�ת��
 {
 	int s;
 	if (strcmp("һʮ",initial_value)==0) s=10;
 else if(strcmp("��ʮ",initial_value)==0) s=20;
	 else if(strcmp("��ʮ",initial_value)==0)s=30;
	 else if(strcmp("��ʮ",initial_value)==0)s=40;
     else if(strcmp("��ʮ",initial_value)==0)s=50;
	 else if(strcmp("��ʮ",initial_value)==0)s=60;
	 else if(strcmp("��ʮ",initial_value)==0)s=70;
	 else if(strcmp("��ʮ",initial_value)==0)s=80;
	 else if(strcmp("��ʮ",initial_value)==0)s=90;
	return s;
}
  void retransform_ultimate_value1(int sum)//������4.ת������ֵ 
  {
  	switch(sum)
		{
		case 0:printf("��");break;
		case 1:printf("һ");break;
		case 2:printf("��");break;
		case 3:printf("��");break;
		case 4:printf("��");break;
		case 5:printf("��");break;
		case 6:printf("��");break;
		case 7:printf("��");break;
		case 8:printf("��");break;
		case 9:printf("��");break;
		
	   }
  }
  void retransform_ultimate_value2(int sum)//������5.ת������ֵ 
  {
  	switch(sum)
		{
		case 0:printf("ʮ");break;
		case 1:printf("ʮһ");break;
		case 2:printf("ʮ��");break;
		case 3:printf("ʮ��");break;
		case 4:printf("ʮ��");break;
		case 5:printf("ʮ��");break;
		case 6:printf("ʮ��");break;
		case 7:printf("ʮ��");break;
		case 8:printf("ʮ��");break;
		case 9:printf("ʮ��");break;
		}
  }
int set_initial_value(char in[])//������6.���ó�ʼֵ 
{   int length=strlen(in),sum;char b[3],c[3];
    int transform_initial_value1(char initial_value[]);
	int transform_initial_value2(char initial_value[]);
	int transform_initial_value3(char initial_value[]);
	 if(length==2)
	    sum=transform_initial_value1(in);
	else if(length==4)
	{   
	    sum=transform_initial_value3(in);
	}
	else if(length==6)
	{ 
	     b[0]=in[0];b[1]=in[1];
	     b[2]=in[2];b[3]=in[3];
		 b[4]='\0';
		 c[0]=in[4];c[1]=in[5];
		 c[2]='\0';
		sum=transform_initial_value3(b)+transform_initial_value1(c);
	} 
	return sum;
}
int set_changing_value(int sum,char variable_name[])//����.7.�趨�м�ֵ 
{   int i,s;char variable_name2[25],operating[3],value[3];
    int set_initial_value(char in[]);
    scanf("%s%s%s",variable_name2,operating,value);
	for(i=0;strcmp(variable_name,variable_name2)==0;i++)
	{
		if(i!=0)
		scanf("%s",value);//���� 
		s=set_initial_value(value);
	    if(strcmp("����",operating)==0)//�ж� 
		sum+=s;
		else if(strcmp("����",operating)==0)
		sum-=s;
		scanf("%s%s",variable_name2,operating);
		
	}
	return sum;
}
void last(int sum)
{   int i,a[3];void retransform_ultimate_value1(int sum);
     void retransform_ultimate_value2(int sum);//�������� 
	for(i=0;;i++)
	{    a[i]=sum%10;    
	      sum=sum/10;	
	      if(sum==0)break;
	}
	if(i==0&&sum>=0)
		   retransform_ultimate_value1(a[0]);
	else if(i==1&&sum>=0) 
	{
		retransform_ultimate_value1(a[1]);
	    retransform_ultimate_value2(a[0]);
	}
	else
	printf("error!");//������ܳ�����ʮ�� Ҳ����С���� 
}
