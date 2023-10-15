module Kotlova1bib21079:A;

namespace RBPO {
	namespace Lab2 {
		namespace Variant8 {
			namespace Task4 {
				double a(long long);
			};
		};
	};
};

double RBPO::Lab2::Variant8::Task4::a(long long i) {
	return (i % 2 == 0 ? 1 : -1) * (1 - (pow(2, i)) / double(pow(2, i) + 1);
};