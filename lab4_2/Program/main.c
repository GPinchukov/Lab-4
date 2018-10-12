#include <stdio.h>

void main() {
    float average;
    int len = 5, a[len]; 
    int i,j ;
    int s = 0;

    for(i=0; i<len; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        s += a[i];
    }

    average = s*(1.0/len);
  printf("srednee znachenie %.2f ==> ", average);
  for(i = 0; i < len; i++) { 
  if(a[i] < average) {
    for (j = i; j < len - 1; j++) {
      a[j] = a[j+1];
    }
    len--;
    }
  }


    for(i=0; i<len; i++){ 
       printf("%d ", a[i]);
    }
}
