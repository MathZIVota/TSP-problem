#include"TSP.hpp"
#include<fstream>

int input_func(vector<vertex>&V){
  int N;
  vertex W; 
  cin >> N;
  for (size_t i=0; i<N; i++){
    cin >> W.x >> W.y;
    V.push_back(W);
  }
  return N;
}