#include"TSP.hpp"
#include<fstream>

int input_func(vector<pair<double,double>>&vertex){
  int N;
  double x,y; 
  cin >> N;
  for (size_t i=0; i<N; i++){
    cin >> x >> y;
    vertex.push_back(make_pair(x,y));
  }
  return N;
}