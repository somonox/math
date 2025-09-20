#include <iostream>

using namespace std;


double g(double x) {
    return -(x * x + 1.0) / 2.0;
}

double g_p(double x) {
    return -x;
}

double hello(double x, double tol=1e-12, int depth=1000) {
    double xn1 = g(x);
    cout << "g(x)' = " << g_p(xn1) << endl;

    if (depth <= 0)
        return xn1;
    return hello(xn1, tol, depth - 1);
}

int main() {
    double r2 = hello(0.0);
    cout << "root:" << r2 << endl;

    return 0;
}
