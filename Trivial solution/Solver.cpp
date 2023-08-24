#include "TSP.hpp"

double dist(vertex a, vertex b){
  double d = pow((a.x-b.x),2)+pow((a.y-b.y),2); 
  return sqrt(d);
}

int Minimum(int i, vector<vertex> V, vector<unsigned int> &used, double &distance){
  double min_dist = -1;
  int min_index = i;

  for (int j=0; j<V.size(); j++){
    if (used[j]) continue;
    double d = dist(V[j], V[i]); 
    if (min_dist < 0 || d < min_dist){
      min_dist = d;
      min_index = j;
    }
  }
  used[min_index] = 1;
  if(min_dist >= 0) distance += min_dist;
  return min_index;
}

double Solver(int i, vector<vertex> &V){
  vector<unsigned int> used;
  for(int j=0; j<V.size(); j++) used.push_back(0);
  used[i] = 1;
  int tmp_index = i;
  double distance = 0;

  for(int k=0; k<V.size(); k++){
    tmp_index = Minimum(tmp_index, V, used, distance);
  }
  distance += dist(V[tmp_index], V[i]);
  return distance;
}

int Solution(vector<vertex>&V){
  vector<double> distances;
  for(auto x: V) distances.push_back(0);
  for(int i=0; i<V.size(); i++){
    distances[i] = Solver(i, V);
  }
  double min_dist = -1;
  int min_index = -1;

  for (int i = 0; i < V.size(); i++) {
      if (min_dist < 0 || distances[i] < min_dist) {
          min_dist = distances[i];
          min_index = i;
      }
  }
  cout << "Answer:" << min_dist << endl;
  //Solver(min_index, V, Out);
  
  return 0;
}