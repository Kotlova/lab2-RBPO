module;
#include <cmath>

module Kotlova1bib21079;

namespace RBPO {
	namespace Lab2 {
		namespace Variant8 {
			namespace Task3 {
				double f1(double);
			};
		};
	};
};

double RBPO::Lab2::Variant8::Task3::f1(double x) {
	return pow(cos(x), 4) + pow(sin(x), 2) + (static_cast<double>(1) / 4) * pow(sin(2 * x), 2);
};


