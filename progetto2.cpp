#include<iostream>   
#include <vector>
using namespace std;
  int Sommamassima(vector<int> B) {
    auto max = 0;
    auto n=B.size();

    for(auto i=0; i<n;i++){
        for (auto j= i ; j<n; j++) {
            auto somma=0;
        for (auto k=1; k<= j; k++)
        somma+=B[k];
        if (somma>max)
        max=somma;
        
        }
         }
    
        

        return 0;
 }