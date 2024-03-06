#include <stdio.h> 
int main()
{ 
int a;
int b;
int c;
  printf("inserisci 3 lunghezze");
  scanf ("%d %d %d",&a, &b, &c);
  if (a==b&&b==c)
  {
    printf("il triangolo e equilatero\n");
  }
  else if(a!=b&&b!=c&&a!=c)
  { 
    printf("il triangolo e scaleno\n");
  }

  else 
{

printf("il triangolo e isoscele\n" ) ;
}
}