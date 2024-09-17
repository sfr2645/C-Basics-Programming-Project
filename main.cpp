//This project  calculates and displays the distance the car can //travel on one tank of gas when driven in town and when driven on the //highway.
#include <iostream>
using namespace std;
int main()
{ 
  double tankSize = 20;
  double townMPG = 23.5, highwayMPG = 28.9;
  double townDistance, highwayDistance;
  townDistance = tankSize * townMPG;
  highwayDistance = tankSize * highwayMPG;
  cout << "The distance a " << tankSize << " gallon gas tank can drive in town is " << townDistance << " miles on one tank of gas.\n";
  cout << "The distance a " << tankSize << " gallon gas tank can drive on the highway is " << highwayDistance << " miles on one tank of gas.";
  return 0;
}