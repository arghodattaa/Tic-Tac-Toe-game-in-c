#include<stdio.h>
#include<stdlib.h>
void print();
char a[9]={'1','2','3','4','5','6','7','8','9'};
char plear1, plear2;
int input1, input2;
int chak1=1, chak2=1, chak3=1;
int main(){
    printf("inter the plear1 opshon, o or x => ");
    scanf("%c",&plear1);
    if(plear1=='x' || plear1=='X'){ plear1='X'; plear2 ='O';}
    else if(plear1=='o'|| plear1=='O'){ plear1='O'; plear2 ='X';}
    else{ printf("wrong opshon you chose , please tri again"); exit(0);}
    printf("%c is the plear2 opshon",plear2);

    for(int i=0;i<10;i++){

  
      print();
      
      if(i==0){
    if(plear1=='X'){printf("1st  plear1 move & chose the opshon => ");
        scanf("%d",&input1); a[input1-1]='X'; chak1++;
     }
    else{ printf("2nd plear2 move & chose the opshon => ");
         scanf("%d",&input2); a[input2-1]='X'; chak2++;
        }

      }
                 if(i<=8){
    if(plear1=='X' && i>0){
       if(chak1< chak2 ){ printf("1th plear1 move & chose the opshon => ");
            scanf("%d",&input1); a[input1-1]='X'; chak1++; chak2--;
       }
        else{ printf("2nd plear2 move & chose the opshon => ");
            scanf("%d",&input2); a[input2-1]='O'; chak2++;chak1--;
        }
    }
    else if(plear1=='O' && i>0){
       if(chak1< chak2 ){ printf("1th plear1 move & chose the opshon => ");
            scanf("%d",&input1); a[input1-1]='O'; chak1++;chak2--;
       }
        else{ printf("2nd plear2 move & chose the opshon => ");
            scanf("%d",&input2); a[input2-1]='X'; chak2++;chak1--;
        }
    }

                 }
                                          //chake
        if(i>3){
           if(a[0]==a[1] && a[0]==a[2] ){ 
               if(a[0]==plear1){ printf("plear1 is worn");
              print();
               exit(0);}
                else{ printf("plear2 is worn");
                print();
                exit(0);}
            } else chak3++;

             if(a[0]==a[3] && a[0]==a[6] ){  if(a[0]==plear1){ printf("       plear1 is worn ");print(); exit(0);}
                else {printf("plear2 is worn");print(); exit(0);}
            }  else chak3++;
             if(a[0]==a[4] && a[0]==a[8] ){  if(a[0]==plear1){ printf("plear1 is worn");print(); exit(0);}
                else{ printf("plear2 is worn");print(); exit(0);}
            }  else chak3++;
             if(a[3]==a[4] && a[3]==a[5] ){  if(a[3]==plear1) {printf("plear1 is worn");print(); exit(0);}
                else{ printf("plear2 is worn fuck");print(); exit(0);}
            }  else chak3++;
             if(a[6]==a[7] && a[6]==a[8] ){  if(a[6]==plear1) {printf("plear1 is worn");print(); exit(0);}
                else{ printf("plear2 is worn");print(); exit(0);}
            }  else chak3++;
             if(a[6]==a[4] && a[6]==a[2] ){  if(a[6]==plear1){ printf("plear1 is worn");print(); exit(0);}
                else{ printf("plear2 is worn"); print();exit(0);}
            }  else chak3++;
             if(a[1]==a[4] && a[1]==a[7] ){  if(a[1]==plear1){ printf("plear1 is worn");print(); exit(0);}
                else{ printf("plear2 is worn");print(); exit(0);}
            }  else chak3++;
             if(a[2]==a[5] && a[2]==a[8] ){  if(a[2]==plear1){ printf("plear1 is worn");print(); exit(0);}
                else{ printf("plear2 is worn"); print();exit(0);}
            }  else chak3++;

             if(i==9 && chak3>1){ printf("mash drow");print();}
        }


   // system("clear");
    }


    return 0;
}
void print(){
    system("clear");
    printf("\t \t|\t \t|\t \t\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n",a[0],a[1],a[2]);//1
    printf("\t \t|\t \t|\t \t\n");
    printf("--------------------------------------------------\n");
    printf("\t \t|\t \t|\t \t\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n",a[3],a[4],a[5]);//2
    printf("\t \t|\t \t|\t \t\n");
    printf("--------------------------------------------------\n");
    printf("\t \t|\t \t|\t \t\n");
    printf("\t%c\t|\t%c\t|\t%c\t\n",a[6],a[7],a[8]);//3
    printf("\t \t|\t \t|\t \t\n");
    
}