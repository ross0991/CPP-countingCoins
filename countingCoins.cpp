//Dynamic Programming Approach

#include <iostream>
#include <vector>

using namespace std;

#define MAXN 100
vector<int> coins = {1, 3, 4};

int main(){
  int count[MAXN];
  
  for(int i=0; i<MAXN; i++){
    count[i] = 0;
  };
  
  count[0] = 1;
  for(int x=0; x<MAXN; x++){
    for(auto c : coins){
      if(x -c >= 0){
        count[x] += count[x-c];
      }
    }
  }
  
  cout << count[5] << "\n";
  
  return 0;
  
};
