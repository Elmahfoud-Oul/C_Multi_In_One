//this program contain various mini-programs, to check click run
#include<stdio.h>
void year_Func(int x){
    char rep;
    rep='Y';
    while(rep=='Y'){
    printf("\nEnter a year: ");
    scanf("%i", &x);
    while(x<0){
     printf("Error, Positive num Renter a year: ");
      scanf("%i", &x);
    }
    if (x%400==0 || x%4==0 && x%100!=0){
        printf("The year %i is leap",x);
    }else{
        printf("The year %i isn't leap",x);
    }
    printf("\nDo you want to repeat, Write Y:Yes or N:No? ");
    scanf(" %c", &rep);
   }
}
int Coun_Func(int nub){
    int done,i;
    int ty=nub;
    for(i=1;i<=nub;i++){ //you use also do while more easer
         ty=ty/10;
        if(ty==0){
            done=i;
            i=nub;
         }
    }
    return done;
}
void pos_neg_Func(){
    int tab;
    printf("Enter array size: ");
    scanf("%i", &tab);    
    float tabi[tab];
    int i,j,m;
    for(i=0;i<=tab-1;i++){
        printf("\nValue of Tab[%i]: ",i+1);
        scanf("%f", &tabi[i]);
    }
    printf("\nNegative num are: ");
    for(j=0;j<=tab-1;j++){
        if(tabi[j]<0){
            printf(" %.0f ", tabi[j]);
        } else if(tabi[j]==0){
            printf(" %.0f'Null' ", tabi[j]);
        }
    } // if you want add part of null numbers its okay
    printf("\nPositive num are: ");
    for(m=0;m<=tab-1;m++){
        if(tabi[m]>0){
            printf(" %.0f ", tabi[m]);
        }
    }
}
void revers_Func(int nums){
    float tab[nums];
    for(int i=0;i<nums;i++){
        printf("Tab[%i]:", i+1);
        scanf("%f", &tab[i]);
    }printf("List of array: ");
        for(int i=0;i<nums;i++){
        printf(" %.1f ", tab[i]);
    }printf("\nInverse of array: ");
    for(int i=nums-1;i>=0;i--){
    printf(" %.1f ", tab[i]);
}
}
int main(){
    int num1,num2,num3,choise;
    char anw;
  do{
    printf("------------------------ Be Welcome :) ------------------------\n");
    printf("\n 1:Years Checker Leap \t 2:Detect Total Numbers \t 3:Positive & Negativ Array \t 4:Iverse Array Ellements\n \n *Choise one of these options: ");
    scanf("%i", &choise);
    while(choise<=0 || choise>=5){
        printf("Error Num must be 1, 2, 3 or 4? Renter pls: ");
        scanf("%i", &choise);
    }
    if(choise==1){
        year_Func(num1);
    }else if(choise==2){
      printf("\nEnter the list of Nums: ");
     scanf("%i", &num2);
    printf("\nTotale num in %i are: %i",num2, Coun_Func(num2));
    }else if(choise==3){
        pos_neg_Func();    
    }else if(choise==4){
        int size;
        printf("Enter your array size: ");
        scanf("%i", &size);
        revers_Func(size);
        }
      printf("\nDo you want to relunch the program again A:Accept or R:Reject? ");
      scanf(" %c", &anw);  
  }while(anw!='R');
printf("\n\nGood bye!");
}