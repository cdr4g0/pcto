#include <stdio.h> 
int main()
{
    int n;
     

    printf("inserisci il tuo anno di nascita");
    scanf("%d",&n);
    if(n<1969)
    {
    
      printf ( "sei nato prima %d prima dello sbarco della luna\n ",1969-n);
    }
    else if (n>1969)

{

printf ("sei nato dopo %d dopo lo sbarco della luna\n", n-1969);

}
else
{
    printf( "sei nato lo stesso anno");
}

}