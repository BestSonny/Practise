#include "StaticMath.h"
#include <iostream>
using namespace std;

StaticMath::StaticMath(void){
  ;
}
StaticMath::~StaticMath(void){
  ;
}

double StaticMath::add(double a, double b){
  return a+b;
}
double StaticMath::sub(double a, double b){
  return a-b;
}
double StaticMath::mul(double a, double b){
  return a*b;
}
double StaticMath::div(double a, double b){
  return a/(b+1e-9);
}

void StaticMath::print(){
  cout << "I'm here" << endl;
}
