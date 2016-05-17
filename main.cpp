#include <iostream>
#include "HugeInt.h"
using namespace std;

int main()
{
	 HugeInt h1(99999),h2(99999),h3(0);
	  h3=h1+h2;
	   h3.Print();
i	    return 0;
}
