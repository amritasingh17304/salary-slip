#include<stdio.h>
struct salary
{
    float bsal,nsal;
    struct
    {
        float hra,da;
    }benefit;
    struct
    {
        float gst,st;
    }deduct;
};
void line(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        printf("_");
    }
}
int main()
{
    float b;
    int year,i;
    char ch[30];
    struct salary s;
    char ch1[30];
    printf("Enter your name :\n ");
    scanf("%[^\n]",ch);
	getchar();
    printf("Enter your designation :\n");
    scanf("%[^\n]",ch1);
    getchar();
    printf("Enter your base salary");
    scanf("%f",&b);
    printf("Enter your experience in years : \n");
    scanf("%d",&year);
    s.benefit.hra=0.1*b;
    s.benefit.da=0.08*b;
    s.deduct.st=0.01*b;
    s.deduct.gst=0.05*b;
    s.nsal=b+s.benefit.hra+s.benefit.da-s.deduct.st-s.deduct.gst;
    printf("                EMPLOYEE             \n");
    printf("                ALLAHABAD            \n");
    line(120);
    printf("Name: %s                       Experience: %d\n",ch,year);
    printf("Designation: %s                base salary: %f\n",ch1,b);
    line(120);
    printf("Benefit                          Deduction\n");
    printf("hra: %f                      gst=%f\n",s.benefit.hra,s.deduct.gst);
    printf("da: %f                        st=%f\n",s.benefit.da,s.deduct.st);
    line(120);
    printf("           Net Salary: %f         \n",s.nsal);
    line(120);
    return 0;
}
