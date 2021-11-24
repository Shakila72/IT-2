#include<stdio.h>

int main ()
{
 char a[]="phython";
 int count=0;
 for (int i=0;a[i];i++)
 {
 count++;
 }
 count--;
 //printf ("%d",count);
 for (int i=0;a[i]>a[count];i++||count--)
 {
 char temp=a[i];
 a[i]=a[count];
 a[count]=temp;
 }
 printf ("%s",a);
}
