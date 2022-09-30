#include <iostream>
using namespace std;

int main () {
     float n, jumlah=0, mean, sigma=0, variansi;
     cin>> n;
  
     for(int x=0; x<=n; x++) {
           jumlah=jumlah+x;
       
      }mean=jumlah/n;
      for(int y=1; y<=n; y++) {
          sigma+=(y-mean)*(y-mean);
        
      }   variansi=sigma/(n-1);
      cout<< variansi;

       return 0;

}