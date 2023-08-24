#include"TSP.hpp"

int main()
{
  vector<vertex> V;
  int N = input_func(V);

  Solution(V);

  cout << "End\n";
  return 0;
}