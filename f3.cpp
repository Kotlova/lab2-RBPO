module Kotlova1bib21079;

namespace RBPO {
	namespace Lab2 {
		namespace Variant8 {
			namespace Task3 {
				double f3(unsigned long long);
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant8::Task3::f3(unsigned long long n) {
	double sum = 0; unsigned long long i = 0;
	do {
		sum += a(i);
	} while (i++ < n);
	return sum;
};
