# include <fatt.h>

unsigned long long int fatt (unsigned long long int n){
  if (n==1){return 1}
  else {return (n*fatt(n-1)}
}
