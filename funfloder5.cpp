/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double num, squareRoot;
	cout << "Enter number: ";
	cin >> num;
	squareRoot = sqrt(num);
	cout << "The square root of " << num << " is: " << squareRoot;
	return 0;
}


#include <iostream>
using namespace std;

void fun(int *ptr)
{
    *ptr = 30;
}

int main() {
    int x = 20;
    fun(&x);
    cout << "x = " << x;

    return 0;
}*/
#include <iostream>
using namespace std;

void odd (int x);
void even (int x);

int main()
{
  int i;
  do {
    cout << "Please, enter number (0 to exit): ";
    cin >> i;
    odd (i);
  } while (i!=0);
  return 0;
}

void odd (int x)
{
  if ((x%2)!=0) cout << "It is odd.\n";
  else even (x);
}

void even (int x)
{
  if ((x%2)==0) cout << "It is even.\n";
  else odd (x);
}














