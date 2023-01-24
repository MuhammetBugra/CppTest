#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int *ptr=new int;
	*ptr=5;
	delete ptr;
	return 0;
}
