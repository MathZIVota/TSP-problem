#pragma once
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct vertex{
  double x,y;
};
int Solution(vector<vertex>&);
int input_func(vector<vertex>&);
double dist(vertex, vertex);
