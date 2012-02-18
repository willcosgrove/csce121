/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
2/14/2012
Homework 3, Problem 3
*/

#include "std_lib_facilities.h"
#include <algorithm>
#include <iostream>
#include <iterator>

struct stats {
  double smallest;
  double largest;
  double mean;
  double median;
} vector_stats;

// The following methods take only a vector and return the result
double find_smallest(vector<double> v){
  double smallest;
  for(int i = 0; i < v.size(); i++){
    if(i == 0 || smallest > v[i]){
      smallest = v[i];
    }
  }
  return smallest;
}

double find_largest(vector<double> v){
  double largest;
  for(int i = 0; i < v.size(); i++){
    if(i == 0 || largest < v[i]){
      largest = v[i];
    }
  }
  return largest;
}

double find_mean(vector<double> v){
  double sum = 0;
  for(int i = 0; i < v.size(); i++){
    sum += v[i];
  }
  double mean = sum / v.size();
  return mean;
}

double find_median(vector<double> v){
  double median;
  sort(v.begin(), v.end());
  if(v.size() % 2 != 0){
    median = v[ceil(v.size() / 2.0)];
  } else {
    median = ((v[v.size()/2] + v[(v.size()/2)-1])/ 2.0);
  }
  return median;
}

// The following functions take a vector and a variable to store the answer in
void find_smallest(vector<double> v, double& smallest){
  for(int i = 0; i < v.size(); i++){
    if(i == 0 || smallest > v[i]){
      smallest = v[i];
    }
  }
}

void find_largest(vector<double> v, double& largest){
  for(int i = 0; i < v.size(); i++){
    if(i == 0 || largest < v[i]){
      largest = v[i];
    }
  }
}

void find_mean(vector<double> v, double& mean){
  double sum = 0;
  for(int i = 0; i < v.size(); i++){
    sum += v[i];
  }
  mean = sum / v.size();
}

void find_median(vector<double> v, double& median){
  sort(v.begin(), v.end());
  if(v.size() % 2 != 0){
    median = v[ceil(v.size() / 2.0)];
  } else {
    median = ((v[v.size()/2] + v[(v.size()/2)-1])/ 2.0);
  }
}

int main(){
  vector<double> v;
  copy ( istream_iterator<double> ( cin ), istream_iterator<double>(), back_inserter ( v ) );
  vector_stats.smallest = find_smallest(v);
  vector_stats.largest = find_largest(v);
  vector_stats.median = find_median(v);
  vector_stats.mean = find_mean(v);
  double mean, median, largest, smallest;
  find_smallest(v, smallest);
  find_largest(v, largest);
  find_median(v, median);
  find_mean(v, mean);
  cout << "Struct ---------------\n";
  cout << "Smallest: " << vector_stats.smallest << endl;
  cout << "Largest: " << vector_stats.largest << endl;
  cout << "Median: " << vector_stats.median << endl;
  cout << "Mean: " << vector_stats.mean << endl << endl;
  cout << "Pass Back ------------\n";
  cout << "Smallest: " << smallest << endl;
  cout << "Largest: " << largest << endl;
  cout << "Median: " << median << endl;
  cout << "Mean: " << mean << endl;
  return 0;
}
