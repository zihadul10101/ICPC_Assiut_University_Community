#include<stdio.h>

int main(){
// s=ut+1/2at*t 
// a=v-u/t
  double s;
  int u,t,a,v;
  printf("Enter u v t ");
  scanf("%d %d %d",&u,&v,&t);

    a=(v-u)/t;
    s=u*t+1/2*a*t*t;
    printf(" %lf",s);
    return 0;
}