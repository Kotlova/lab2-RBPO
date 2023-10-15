module Kotlova1bib21079:F1;

namespace RBPO {
	namespace Lab2 {
		namespace Variant8 {
			namespace Task4 {
				double f1(double, double);
			};
		};
	};
};

double RBPO::Lab2::Variant8::Task4::f1(double x, double y) {
	return pow(cos(x), 4) + pow(sin(x), 2) + (static_cast<double>(1) / 4) * pow(sin(2 * x), 2);
};
