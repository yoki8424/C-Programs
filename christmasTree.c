# include <stdio.h>
# include <math.h>


int main(void)
{
    int w= 20;
    int z = 200000000;
    int a = 20;
    int m;
//creates walking people
    while(a != -1){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    if(a !=0){
    printf(" o");//1
    for(m=0; m<=a; m++){printf(" ");}
    if(a%2 == 0)
    printf("   o");
    else
    printf("  o");
    
    printf("\n/|\\");//1
    for(m=0; m<=a; m++){printf(" ");}
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
    
    }
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
   while(w != 0){
    int c = '*';
    int i=0, j=0, k=0,l;
    int n=20, sum =1;
    char left[31];
    char right[31];
    //char t = '//';
    strcpy(right,"/");
      
/* Seed random number generator */
  int seed = time(NULL);
  srand(seed);

  
  int y = rand()%50;

    int x=n;
    
    // draws the triangle
    for(i=0; i<n; i++)
    {
             for(k=0; k<=x; k++)
             {printf(" ");}
             x--;
             
             for(j=0; j<sum; j++)
             {printf("%c", c);}
             
             sum+= 2;
             printf("\n");
    }
    
    
    for(k=0; k<=y; k++)
    {
             printf(" "); 
    }
    printf("Merry Christmas !!");
    while(z!= 0){ z--;}// wasting time
    z=2000000000;
    system("cls");
   
    w--;
    }
    
   
    system("pause");
}
