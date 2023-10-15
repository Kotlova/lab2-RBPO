module Kotlova1bib21079:F2;

namespace RBPO {
	namespace Lab2 {
		namespace Variant8 {
			namespace Task4 {
				double f2(double);
			};
		};
	};
};

double RBPO::Lab2::Variant8::Task4::f2(double x) {
	return x < 3.2 ? pow(x, 4) + 9 : (54 * pow(x, 4)) / (-5 * pow(x, 2) + 7);
};
