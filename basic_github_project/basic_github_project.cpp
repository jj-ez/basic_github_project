#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

	double over_speed, fine;

	cout << " Enter value over speed limit " << endl;
	cin >> over_speed;

	if (over_speed >= 0 & over_speed <= 5) {
		fine = 20.00;
	}
	else if (over_speed > 5 && over_speed <= 10) {
		fine = 75.00;
	}
	else if (over_speed > 10 && over_speed <= 15) {
		fine = 150.00;
	}
	else {
		fine = 150.00 + (over_speed - 15) * 20.00;
	}

	cout << " Fine for being " << over_speed << " MPH over the speed limit is $ " << fixed << setprecision() << fine << 

	return 0;
}