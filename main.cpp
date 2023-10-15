#include <iostream>

import Kotlova1bib21079;
enum Choice {
	Task1 = '1', Task2 = '2', Task3 = '3', Task4 = '4', Task5 = '5'
};

int main() {
	char q;
	do
	{
		std::cout << "Select an action:\
					\nTask1:\t\'1\'\
					\nTask2\t\'2\'\
					\nTask3\t\'3\'\
					\nTask4\t\'4\'\
					\nTask5\t\'5\'\
					\nExit:\t\'e\'" << std::endl;
		std::cin >> q;
		switch ((Choice)q) {
			unsigned long long n; double x, eps;
		case Task1:
			std::cout << "1 Task" << std::endl
				<< "Input x, y, n and eps:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x,y) = " << RBPO::Lab2::Variant8::Task1::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant8::Task1::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant8::Task1::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant8::Task1::f4(eps) << std::endl;
			break;
		case Task2:
			std::cout << "2 Task" << std::endl
				<< "Input x, n and eps:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant8::Task2::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant8::Task2::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant8::Task2::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant8::Task2::f4(eps) << std::endl;
			break;
		case Task3:
			std::cout << "3 Task" << std::endl
				<< "Input x, n and eps:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant8::Task3::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant8::Task3::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant8::Task3::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant8::Task3::f4(eps) << std::endl;
			break;
		case Task4:
			std::cout << "4 Task" << std::endl
				<< "Input x, n and eps:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant8::Task4::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant8::Task4::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant8::Task4::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant8::Task4::f4(eps) << std::endl;
			break;
		case Task5:
			std::cout << "5 Task" << std::endl
				<< "Input x, n and eps:" << std::endl;
			std::cin >> x >> n >> eps;
			std::cout << "f1(x) = " << RBPO::Lab2::Variant8::Task5::f1(x) << std::endl
				<< "f2(x) = " << RBPO::Lab2::Variant8::Task5::f2(x) << std::endl
				<< "f3(n) = " << RBPO::Lab2::Variant8::Task5::f3(n) << std::endl
				<< "f4(eps) = " << RBPO::Lab2::Variant8::Task5::f4(eps) << std::endl;
			break;
		case 'Q':
			break;
		default:
			std::cout << "Error!" << std::endl;
			break;
		}
	} while (q != 'e');
	return 0;
};
/*
* Data for test
* Input:
* 1 12.34 100 0.0001 2 12.34 100 0.0001 3 12.34 100 0.0001 4 12.34 100 0.0001 5 12.34 100 0.0001 Q
* Output:
* f1(x) = 0.264074
* f2(x) = 12.501
* f3(n) = 0.698073
* f4(eps) = 0.693172
*/