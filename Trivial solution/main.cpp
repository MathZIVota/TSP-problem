#include"TSP.hpp"
using namespace std;

int main()
{
  vector<pair<double,double>> vert;
  int N = input_func(vert);
  cout << "Out:\n";
  for (auto v: vert){
    cout << v.first << " " << v.second << endl;
  }
  cout << "End\n";
  return 0;
}