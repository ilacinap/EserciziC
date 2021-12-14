# include <fatt.h>

long int fatt (long int n){
  if (n==1){return 1}
  else {return (n*fatt(n-1)}
}
