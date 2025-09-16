#include<stdio.h>
int main()
{

int unt;
float bill,tot,cost;
scanf("%d",&unt);
if(unt>0)
{
if(unt<=50)
{
    printf("Total electricity bill: Rs. %.2f",unt*0.50+((unt*0.50)*0.20));
}
 else if(unt>50&&unt<=150)//120
{
    tot=50*0.50+((unt-50)*0.75);
    tot+=tot* 0.20;
printf("Total electricity bill: Rs. %.2f",tot);

}
else if(unt>150 && unt<=250)
{
    tot=50*0.50+(100*0.75)+(unt-150)*1.20;
    tot+=tot*0.20;
printf("Total electricity bill: Rs.  %.2f",tot);

}
else
{
    tot=50*0.50+100*0.75+100*1.20+(unt-250)*1.50;
    tot+=tot*0.20;
printf("Total electricity bill: Rs. %.2f",tot);

}
}else 
{
    printf("Total electricity bill: Rs. 0.00");

}
return 0;
}
