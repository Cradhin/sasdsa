#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
# include "roki.h"
int main(void)
{
//rules
int x, a, b, c, d;
do {
kkkk(x,a,b,c,d);
}
while (a==b||a==c||a==d||b==c||b==d||c==d);
printf("x=%d\n",x);
printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
int y=0, q, w, e, r, n=0, t=0;
char ch;
while (y!=x&&t==0){
printf("Guess: ");
scanf("%d",&y);
if(y==x)printf("winner have 4 bulls: ");
if (1234<=y&&y<=9876){
q=y/1000, w=y/100%10, e=y/10%10, r=y%10;}
else {t=1;
printf("Try again\n");
}//end
ch=q;
if (!isdigit(ch)) {t=1;
printf("Try again\n");};
ch=w;
if (!isdigit(ch)) {t=1;
printf("Try again\n");};
ch=e;
if (!isdigit(ch)) {t=1;
printf("Try again\n");};
ch=r;
if (!isdigit(ch)) {t=1;
printf("Try again\n");};
n++;
printf("a1=%d\nb1=%d\nc1=%d\nd1=%d\n",q,w,e,r);//del
dsa(a,b,c,d,q,w,e,r);
}
if (t==0){printf("Congratulations!\nYou won in %d chances ",n);

}
}
