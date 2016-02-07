# include <stdio.h>
# include <math.h>


int main(void)
{
    int w= 20;
    int z = 200000000;
    int a = 20;// 
    int m;
//creates walking people
    while(a != -1){
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    if(a !=0){
    printf(" o");//1
    for(m=0; m<=a; m++){printf(" ");}// the distance
    if(a%2 == 0)
    printf("   o");
    else
    printf("  o");
    
    printf("\n/|\\");//1
    for(m=0; m<=a; m++){printf(" ");}// the distance 
    if(a%2 ==0)
    printf("o/|\\");
    else
    printf("/|\\");
    
    printf("\n/\\");//1
    for(m=0; m<=a; m++){printf(" ");}
    if(a%2 == 0)
    printf("  /\\");
    else
    printf(" o/\\");
    
    }// end creating walking people
    else
    {
        printf(" o");printf("    o");
        printf("\n/|\\");printf("<3/|\\");
        printf("\n/\\"); printf("   /\\");
    
    while(z!= 0){ z--;}// wasting time
    z=2000000000;
    }
    
    
    while(z!= 0){ z--;}// wasting time
    z=200000000;
    system("cls");
    a--;
    }
    system("pause");
}
