//This program will calculate and display the approximate number of customers in the survey purchasing one or more energy drinks per week & the approximate number of customers in the survey who prefer citrus-flavored energy drinks.
#include <iostream>
using namespace std;
int main()
{ 
  int multBuy = 16500 * 0.15;
  int citrus = multBuy * 0.58;
  cout << "Out of the 16,500 customers of X soft drink company, " << multBuy << " people buy one or more energy drinks per week. Out of these customers, approximately " << citrus  << " people prefer citrus-flavored energy drinks!\n";
  return 0;
}