#include <iostream>
using namespace std;
class Employee {
	private:
	string name;
	int age;
	public:
	void setyasage(int yas) {
	if(yas<0) {
	cout << "hatali deger" ; }
	else {
	age=yas; } }
	int getage() {
	return age; }
	void setname(string isim) {
	name=isim; }
	string getname() {
	return name; } };
int main() {
	Employee employee;
	employee.setname("asd");
	employee.setyasage(20);
	cout << employee.getname() << endl ;
	cout << employee.getage() ;
	return 0; }
