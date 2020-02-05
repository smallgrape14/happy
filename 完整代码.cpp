#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{ 	char type_of_variable[5],variable_name[25],initial_value[6],operating[3];
	scanf("%s%s%s%s",type_of_variable,variable_name,operating,initial_value);//初始化的输入 
	int sum,s=0;   void last(int sum);
	int set_initial_value(char in[]);
	int set_changing_value(int sum,char variable_name[]);//函数声明 
    s=set_initial_value(initial_value);//初始值 
	sum=set_changing_value(s,variable_name);   //最终值 
	last(sum);
    system("PAUSE");
	    return 0;
} 
    int transform_initial_value1(char initial_value[])//函数.1. 文字与数字的转换 
 {
 	int s;
 	if(strcmp("零",initial_value)==0) s=0;
	 else if(strcmp("一",initial_value)==0)s=1;
	 else if(strcmp("二",initial_value)==0)s=2;
	 else if(strcmp("三",initial_value)==0)s=3;
	 else if(strcmp("四",initial_value)==0)s=4;
     else if(strcmp("五",initial_value)==0)s=5;
	 else if(strcmp("六",initial_value)==0)s=6;
	 else if(strcmp("七",initial_value)==0)s=7;
	 else if(strcmp("八",initial_value)==0)s=8;
	 else if(strcmp("九",initial_value)==0)s=9;
	 else if(strcmp("十",initial_value)==0)s=10;
   
 return s;}
 int transform_initial_value2(char initial_value[])//函数.2. 文字与数字的转换
 {
 	 int s;
 	 if(strcmp("十一",initial_value)==0)s=11;
	 else if(strcmp("十二",initial_value)==0)s=12;
	 else if(strcmp("十三",initial_value)==0)s=13;
	 else if(strcmp("十四",initial_value)==0)s=14;
     else if(strcmp("十五",initial_value)==0)s=15;
	 else if(strcmp("十六",initial_value)==0)s=16;
	 else if(strcmp("十七",initial_value)==0)s=17;
	 else if(strcmp("十八",initial_value)==0)s=18;
	 else if(strcmp("十九",initial_value)==0)s=19;
	 return s;
}
 int transform_initial_value3(char initial_value[])//函数.3. 文字与数字的转换
 {
 	int s;
 	if (strcmp("一十",initial_value)==0) s=10;
 else if(strcmp("二十",initial_value)==0) s=20;
	 else if(strcmp("三十",initial_value)==0)s=30;
	 else if(strcmp("四十",initial_value)==0)s=40;
     else if(strcmp("五十",initial_value)==0)s=50;
	 else if(strcmp("六十",initial_value)==0)s=60;
	 else if(strcmp("七十",initial_value)==0)s=70;
	 else if(strcmp("八十",initial_value)==0)s=80;
	 else if(strcmp("九十",initial_value)==0)s=90;
	return s;
}
  void retransform_ultimate_value1(int sum)//函数。4.转换最终值 
  {
  	switch(sum)
		{
		case 0:printf("零");break;
		case 1:printf("一");break;
		case 2:printf("二");break;
		case 3:printf("三");break;
		case 4:printf("四");break;
		case 5:printf("五");break;
		case 6:printf("六");break;
		case 7:printf("七");break;
		case 8:printf("八");break;
		case 9:printf("九");break;
		
	   }
  }
  void retransform_ultimate_value2(int sum)//函数。5.转换最终值 
  {
  	switch(sum)
		{
		case 0:printf("十");break;
		case 1:printf("十一");break;
		case 2:printf("十二");break;
		case 3:printf("十三");break;
		case 4:printf("十四");break;
		case 5:printf("十五");break;
		case 6:printf("十六");break;
		case 7:printf("十七");break;
		case 8:printf("十八");break;
		case 9:printf("十九");break;
		}
  }
int set_initial_value(char in[])//函数。6.设置初始值 
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
int set_changing_value(int sum,char variable_name[])//函数.7.设定中间值 
{   int i,s;char variable_name2[25],operating[3],value[3];
    int set_initial_value(char in[]);
    scanf("%s%s%s",variable_name2,operating,value);
	for(i=0;strcmp(variable_name,variable_name2)==0;i++)
	{
		if(i!=0)
		scanf("%s",value);//输入 
		s=set_initial_value(value);
	    if(strcmp("增加",operating)==0)//判断 
		sum+=s;
		else if(strcmp("减少",operating)==0)
		sum-=s;
		scanf("%s%s",variable_name2,operating);
		
	}
	return sum;
}
void last(int sum)
{   int i,a[3];void retransform_ultimate_value1(int sum);
     void retransform_ultimate_value2(int sum);//函数声明 
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
	printf("error!");//结果不能超过九十九 也不能小于零 
}
