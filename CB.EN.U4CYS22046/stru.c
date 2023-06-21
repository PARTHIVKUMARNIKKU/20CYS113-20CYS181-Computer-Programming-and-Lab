#include <stdio.h>
#include <string.h>
#define MAX 72

struct student {
   int srollno[5];
   //char sname[5][30];
   struct name
   {
      char sfirstname[30];
      char slastname[30];
   }n;
   char sfathername[5][30];
   char smothername[5][30];
   double ssgpa[5], savg[5];
   int stotal[5];
   long semergencycontact[5];
   };

void main()
{
struct student s;
for(int i=0;i<2;i++)
{
printf("please enter your roll number\n");
int roll,total,avg;char fstname[30],lstname[30],fname[30],mname[30];double sgpa;long econtact;
scanf("%d", &roll);
s.srollno[i]=roll;




printf("enter the first name\n");
scanf("%s",&fstname);
strcpy(s.n.sfirstname[i],fstname);
printf("the first name is %s ",s.n.sfirstname[i]);
printf("enter the last name\n");
scanf("%s",&lstname);
strcpy(s.n.slastname[i],lstname);
printf("the last name is %s ",s.n.slastname[i]);


printf("please enter your father name\n");
scanf("%s",&fname);
strcpy(s.sfathername[i],fname);
printf("please enter the mother name\n");
scanf("%s",&mname);
printf("please enter the emergency contact number\n");
scanf("%ld",&econtact);
s.semergencycontact[i]=econtact;
strcpy(s.smothername[i],mname);
printf("please enter the total\n");
scanf("%d",&total);
s.stotal[i]=total;
avg=(s.stotal[i])/6;
s.savg[i]=avg;
sgpa=avg/10;
s.ssgpa[i]=sgpa;
printf("the value of i here is %d\n",i);
}
for (int j=0; j<5; j++)
{
   printf("your rollno is %d\n",s.srollno[j]);
   printf("your name is %s\n",name[j]);
   printf("your father name is %d\n",s.sfathername[j]);
   printf("your mother name is %d\n",s.smothername[j]);
   printf("your emergency contact number is %d\n",s.semergencycontact[j]);
   printf("your total is %d\n",s.stotal[j]);
   printf("your average is %d\n",s.savg[j]);
   printf("your sgpa is %d\n",s.ssgpa[j]);
}
}
