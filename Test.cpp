#include "Test.h"
#include<math.h>

double Test::Task1(double& t, double& l)
{
	return  3 * pow(t, 2) + 3 * pow(l, 5) + 4.9;
};

double Test::Task2(double& p, double& y)
{
	return  log10(pow(p, 2) + pow(y, 3)) + exp(p);
};

double Test::Task3(double& n, double& y)
{
	return   n * (y + 3.5) + sqrt(y);
};

double Test::Task4(double& a, double& t)
{
	return   9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5));
};

double Test::Task5(double& x)
{
	return   1.51 * cos(pow(x, 2)) + 2 * pow(x, 3);
};

double Test::Task6(double& x, double& y)
{
	return   cos(2 * y) + 3.6 * exp(x);
};

double Test::Task7(double& m)
{
	return   pow(m, 2) + 2.8 * fabs(m) + 0.55;
};

double Test::Task8(double& y)
{
	return   sqrt(fabs(6 * pow(y, 2) - 0.1 * y + 4));
};

double Test::Task9(double& y, double x)
{
	return   log10(y + 0.95) + sin(pow(x, 4));
};

double Test::Task10(double& k, double y, double x)
{
	return exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2);
};

double Test::Task11(double& y, double& x)
{
	return 9.756 * pow(y, 7) + 2 * tan(x);
}

double Test::Task12(double& t, double& x)
{
	return 7 * pow(t, 2) + 3 * sin(pow(x, 3)) + 9.2;
}

double Test::Task13(double& y)
{
	return sqrt(fabs(3 * pow(y, 2) + 0.5 * y + 4));
}

double Test::Task14(double& y, double& x)
{
	return fabs(sqrt(pow(sin(y), 2) + 6.835) + exp(x));
}

double Test::Task15(double& y)
{
	return sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y));
}

double Test::Task16(double& y)
{
	return sqrt(cos(pow(4 * y, 2)) + 7.151);
}

double Test::Task17(double& y)
{
	return 3 * pow(y, 2) + sqrt(y + 1);
}

double Test::Task18(double& y)
{
	return 3 * pow(y, 2) + sqrt(pow(y, 2) + 1);
}

double Test::Task19(double& y, double& n, double& g)
{
	return n * sqrt(pow(y, 3) + 1.09 * g);
}

double Test::Task20(double& y, double& k, double& x)
{
	return exp(k + y) + tan(x) * sqrt(y);
}

double Test::Task21(double& y, double& h)
{
	return exp(y + 5.5) + 9.1 * pow(h, 3);
}

double Test::Task22(double& y, double& u, double& x)
{
	return sin(2 * u) * log10(2 * pow(y, 2) + sqrt(x));
}

double Test::Task23(double& y, double& f)
{
	return exp(2 * y) + sin(f);
}

double Test::Task24(double& y)
{
	return 2 * sin(0.214 * pow(y, 5) + 1);
}

double Test::Task25(double& y, double& f)
{
	return exp(y * 2) + sin(pow(f, 2));
}

double Test::Task26(double& p)
{
	return sin(pow(pow(p, 2) + 0.4, 3));
}

double Test::Task27(double& y, double& x, double& v)
{
	return 1.03 * v + exp(2 * y) + tan(fabs(x));
}

double Test::Task28(double& y, double& h)
{
	return exp(y + h) + sqrt(fabs(6.4 * y));
}

double Test::Task29(double& y)
{
	return 3 * pow(y, 2) + sqrt(fabs(y + 1));
}

double Test::Task30(double& y, double& r)
{
	return exp(y + r) + 7.2 * sin(r);
}