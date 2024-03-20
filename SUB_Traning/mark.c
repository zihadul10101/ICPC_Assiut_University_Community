#include<stdio.h>

int main(){
   int math,phy,che;
   float total,mathPhy;
   printf("Enter sub ");
   scanf("%d %d %d",&math,&phy,&che);

   total=math+phy+che;
   mathPhy=math+phy;
   if(math>=65 && phy>=55 && che>=50){
    if(total>=190 || mathPhy>=140){
        printf("The can is eg"); 
    }else{
         printf("The can is not eg");  
    }
   }else{
    printf("The can is not eg");
   }
    return 0;
}