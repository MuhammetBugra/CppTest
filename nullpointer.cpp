#include <iostream>
using namespace std;
int main() {
	int *ptr=NULL;
	ptr=new int;
	*ptr=10;
	delete ptr; 
	*ptr=10; //dangling reference
	cout << *ptr ;
	return 0;
}
