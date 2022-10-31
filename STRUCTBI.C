 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 struct student
 {
  int rn;
  char name[20];
  int s1;
  int s2;
  int s3;
  int s4;
  int total;
  int avg;
  char stat[10];
  char cls[15];
  };
  void main()
  {
  struct student p[3],temp;
  int i,j,fail=0,pass=0,first=0,sec=0;
  clrscr();
  for(i=0;i<3;i++)
  {
  flushall();
  printf("enter roll number:");
  scanf("%d",&p[i].rn);
  flushall();
  printf("enter name:");
  gets(p[i].name);
  flushall();
  printf("enter marks of first subject:");
  scanf("%d",&p[i].s1);
  printf("enter marks of second subject:");
  scanf("%d",&p[i].s2);
  printf("enter marks of third subject:" );
  scanf("%d",&p[i].s3);
  printf("enter marks of fourth subject:");
  scanf("%d",&p[i].s4);
  /*total and average of all students indivualy*/
  p[i].total=p[i].s1+p[i].s2+p[i].s3+p[i].s4;
  p[i].avg=p[i].total/4;
  /*checking status of student wheather pass or fail*/
  if(p[i].s1>=50 && p[i].s2>=50 && p[i].s3>=50 && p[i].s4>=50)
  {
  strcpy(p[i].stat,"pass");
  }
  else
  {
  strcpy(p[i].stat,"fail");
  fail++;
  }
  strcpy(p[i].cls,"fail");
  /*grade division*/
  if(p[i].avg>=0 && p[i].avg<=50 && (strcmp(p[i].stat,"pass")==0))
  {
    strcpy(p[i].cls,"fail");
    }
    if(p[i].avg>=50 && p[i].avg<=55 && (strcmp(p[i].stat,"pass")==0))
    {
    strcpy(p[i].cls,"pass");
    }
    if(p[i].avg>=55 && p[i].avg<=70 &&(strcmp(p[i].stat,"pass")==0))
    {
    strcpy(p[i].cls,"second");
    }
    if(p[i].avg>=70 && (strcmp(p[i].stat,"pass")==0))
    {
    strcpy(p[i].cls,"first");
    }
    clrscr();
    }
    /* name sorting*/
    for(i=0;i<3;i++)
    {
    for(j=1;j<3;j++)
    {
    if(strcmp(p[j-1].name,p[j].name)>0)
    {
    temp=p[j-1];
    p[j-1]=p[j];
    p[j]=temp;
    }
    }
    }
    printf("\n ================================");
    printf("\n		 student details    " );
    printf("\n==================================");
    printf("\nROLL NO.\tname\tsub1\tsub2\tsub3\tsub4\ttotal\taverage\tclass");
    for(i=0;i<3;i++)
    {
    printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%s",p[i].rn,p[i].name,p[i].s1,p[i].s2,p[i].s3,p[i].s4,p[i].total,p[i].avg,p[i].cls);
    }
    printf("\n\nenter any key for more info");
    getch();
    clrscr();
    printf("\n first class");
    printf("\n=============");
    for(i=0;i<3;i++)
    {
    if(strcmp(p[i].cls,"first")==0)
    {
    printf("%s\t%d\t%d",p[i].name,p[i].total,p[i].avg);
    first++;
    }
    }
    printf(" student got first class are=%d",first);
    getch();
    printf("second class");
    printf("\n============");
    for(i=0;i<3;i++)
    {
    if(strcmp(p[i].cls,"second")==0)
    {
    printf("%s\t%d\t%d",p[i].name,p[i].total,p[i].avg);
    sec++;
    }
    }
    printf(" students got second clas are=%d",sec);
    getch();

    printf("pass");
    printf("\n======");
    for(i=0;i<3;i++)
    {
    if(strcmp(p[i].cls,"pass")==0)
    {
    printf("%s\t%d\t%d",p[i].name,p[i].total,p[i].avg);
    pass++;
    }
    }
    printf("student got pass=%d",pass);
    getch();

    printf("fail");
    printf("\n=====");
    for(i=0;i<3;i++)
    {
    if(strcmp(p[i].cls,"fail")==0)
    {
    printf("%s\t%d\t%d",p[i].name,p[i].total,p[i].avg);
    fail++;
    }
    }
    printf("students got fail=%d",fail);
    getch();
    printf("enter any key to come out");
    getch();
    }




