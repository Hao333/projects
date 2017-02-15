#include <stdio.h>
#include <stdlib.h>
main(){
int a,b;
printf ("vvedite summu ne menee 1k;a=");scanf("%d",&a);
if (a<1000) printf ("error summa menee 1k");
printf ("vvedite srok vklada ot 0 do 365;b=");scanf("%d",&b);
if (b<0 or b>365) printf("error ne vernoe kolichestvo dney");
if (b>=0 and b<=30) a=a*0.9;
if (b>=31 and b<=120) a=a*1.02;
if (b>=121 and b<=240) a=a*1.06;
if (b>=241 and b<=365) a=a*1.12;
printf("summa v konce sroka=%d",a);
system("pause");
}
