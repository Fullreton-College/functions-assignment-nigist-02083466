#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int coinValue, int& num, int& amountLeft);

int main()
{

  //your code goes here
  int amountLeft;
  int quarters, dimes, pennies;
  char ans = 'y';

  while(ans == 'y' || ans == 'Y')
  {
      cout << "Enter change amount (1 - 99 cents): ";
      cin >> amountLeft;

      computeCoins(25, quarters, amountLeft);
      computeCoins(10, dimes, amountLeft);
      computeCoins(1, pennies, amountLeft);

      cout << endl;
      cout << quarters << " quarter(s) "
           << dimes << " dime(s) and "
           << pennies << " penny(pennies)" << endl;

      cout << "\nEnter Y or y to continue, any other halts\n";
      cin >> ans;
  }

return 0;
}

//implement functions
void computeCoins(int coinValue, int& num, int& amountLeft)
{
    num = amountLeft / coinValue;
    amountLeft = amountLeft % coinValue;
}
