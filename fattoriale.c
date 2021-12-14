# include <fatt.h>

long int fattoriale (int n){
  if (n==1){return 1}
  else {return (n*fatt(n-1)}
}
