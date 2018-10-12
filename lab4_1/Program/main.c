#include <stdio.h>
int main() 
{
int a[4]; 
int i; 
for(i=0; i<4; i++) {
printf("a[%d] = ", i);
scanf("%d", &a[i]); 
}

if (a[0]>a[1]) printf(" elementi massiva raspologeni ne po narastauschei");
else
if (a[1]>a[2]) printf(" elementi massiva raspologeni ne po narastauschei");
else
if (a[2]>a[3]) printf(" elementi massiva raspologeni ne po narastauschei");
else
printf(" elementi massiva rasologeni  po narastauschei");
}

