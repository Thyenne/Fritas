#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

  int fritas1, fritas,min1, min2 , fritas2;
  float horas1, horas2;
int main() {

  std::cout << "digite quantas fritas você tem ";
  std::cin >> fritas1;

  fritas1==fritas2;
  
  fritas1=20000-fritas1;

  
do{

fritas1 = fritas1 - 2;
min1 = min1 + 10;
 
}while(fritas1>0);

    horas1 = min1/60;
    std::cout<<"você precisa de " << horas1 << " horas assistidas pra resgatar a analise!" << endl;
  

 fritas2=40000-fritas2;
   
  
do{

fritas2 = fritas2 - 2;
min2 = min2 + 10;
 
}while(fritas2>0);

    horas2 = min2/60;
    std::cout<<"você precisa de " << horas2 << " horas assistidas pra resgatar o coach!" << endl;

}