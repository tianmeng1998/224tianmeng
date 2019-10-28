#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 80
void NAME();
void score();
int grade[80];
struct student
  {

 char name[10];
 
 int chinese;
 int english;
 int cleg;
 int linuxc;
 int python;
 int math;
 int sum;
 int ave;
 }stu[81];


void NAME()
{	char a[10];int t1,t2;
	for(int i=0;i<N;i++)
	{
	t1=rand()%3+1;
	 for (int j=0;j<t1;j++)
	 {
	 t2=rand()%25+97;
	 if(j==0){
	 t2=t2-32;}
	a[j]=t2;
	 }
	strcpy(stu[i].name,a);
	}
}


void score(int a)
{int i,j,k;
	srand((unsigned)time(0));
	for(i=0;i<80;i++)
	grade[i]=rand()%100+1;
	if (grade[i]<60)
	{
	j++;
	if(j>8)
		{if(grade[i]<60)
			i--;
			}
	}

	if(grade[i]>90)
	{
	k++;
	if(k>8)
	{
	if(grade[i]>90)
		i--;
	}
	}



}



int main()
{
srand((unsigned)time(NULL));
int i;
NAME();

score(1);
for(i=0;i<80;i++)
{
stu[i].chinese=grade[i];
}

score(2);
for(i=0;i<80;i++)
{
stu[i].english=grade[i];
}

score(3);
for(i=0;i<80;i++)
{
stu[i].math=grade[i];
}

score(4);
for(i=0;i<80;i++)
{
stu[i].linuxc=grade[i];}


score(5);
for(i=0;i<80;i++)
{stu[i].python=grade[i];}

score(6);
for(i=0;i<80;i++)
{stu[i].cleg=grade[i];
}

for(i=0;i<80;i++)
{
stu[i].sum=stu[i].chinese+stu[i].math+stu[i].english+stu[i].cleg+stu[i].python+stu[i].linuxc;
stu[i].ave=stu[i].sum/6;
}


int m,n;
for(m=0;m<80;m++)
{
for(n=m+1;n<80;n++)
{
if(stu[m].sum>stu[n].sum)
{stu[81]=stu[m];
stu[m]=stu[n];
stu[n]=stu[81];}
}
}
for(i=0;i<80;i++)
{
printf("Name:%s  grade:%d %d %d %d %d %d sum:%d ave:%d \n",stu[i].name,stu[i].chinese,stu[i].english,stu[i].math,stu[i].python,stu[i].linuxc,stu[i].cleg,stu[i].sum,stu[i].ave);

}



	return 0;

}


