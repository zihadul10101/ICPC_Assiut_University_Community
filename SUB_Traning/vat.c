#include<stdio.h>

int main(){
   int id;
   float vat,cost;
   char name;
  scanf("%d %f %c",&id,&cost,&name);

  printf("name = %c\n",name);
  printf("id = %d\n",id);

 if(cost<149){
    vat=cost;
    printf("vat is = %f",vat);
 }
 else if(cost>150 && 249<=cost){
      vat=cost * 0.05;
     printf("vat is = %f",vat);
 }
 else if(cost>249 && 349<=cost){
   vat=cost * 0.07;
    printf("vat is = %f",vat);
 }

else{
    vat=cost * 0.1;
   printf("vat is = %f",vat);
}
    return 0;
}