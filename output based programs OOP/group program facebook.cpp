//can someone tell me why?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person{
char name[20];
char surname[20];
char gender;
};
void getinfo(person p[],int l){
for(int i=0;i<l;i++)
{
printf("enetr person %d's name:\n",i+1);
gets(p[i].name);
printf("enetr person %d's surname:\n",i+1);
gets(p[i].surname);
printf("enetr person %d's gender:\n",i+1);
scanf("%c",&p[i].gender);
char ch;
scanf("%c",&ch);
}
return;
}
void printinfo(person p[],int l){
for(int i=0;i<l;i++)
{
printf("%s\n",p[i].name);
printf("%s\n",p[i].surname);
printf("%c",p[i].gender);
}
return;
}
int main(){
person p[2];
getinfo(p,2);
printinfo(p,2);
return 0;
}
