#include <iostream>
#include <cmath>
using namespace std;
double a;
double b;
double c;

int main() {



cout << "a degiskeni girin" << endl;
cin >> a;
cout << "b degiskeni girin" << endl;
cin >> b;
cout << "c degiskeni girin" << endl;
cin >> c;

cout << a <<"s^2+"<<b<< "s+"<< c << endl;

double delta = (b * b) - (4 * a * c);
if (delta >= 1) {
	cout << delta << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << sqrt(delta) << endl;
	cout << " iki farkli kok bulundu " << endl;
	double kok_1 = ((( - 1 * b) / (2 * a)) + (sqrt(delta) / (2 * a)));
	double kok_2 = ((( - 1 * b) / (2 * a)) - (sqrt(delta) / (2 * a)));
	cout << "kok_1 :" << kok_1 << " " << "kok_2 : " << kok_2 << endl;
	
}
else if (delta == 0) {
	cout << " cift katli kok bulundu " << endl;
	double kok_1 = (-b)/ (2 * a);
	cout << "kok_1 :" << kok_1 <<" " << "kok_2 : " << kok_1 << endl;

}
else if(delta < 0) {
	cout <<"delta :"<< delta << endl;
	cout << " iki irrasyonel kok bulundu " << endl;
	double kok_1_reel = -(b/(2*a));
	double kok_2_reel = -(b / (2 * a));
	double kok_1_imaj = sqrt(delta*(-1))/(2*a);
	double kok_2_imaj = -1*(sqrt(delta*(-1))/(2*a)) ;
	cout << "kok_1 :" << kok_1_reel << "+" << kok_1_imaj<<"j" << endl;
	cout << "kok_2 :" << kok_2_reel << "+" << kok_2_imaj << "j" << endl;
}
	return 0;
}
