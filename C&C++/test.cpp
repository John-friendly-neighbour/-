#include <cmath>
using namespace std;

class Complex{
    public:
        static Complex Decart(const double &re, const double &im);
        static Complex Polar(const double &r, const double &alpha);

        Complex(const double &x, const double &y):Re(x), Im(y){

        };
    
    private:
        double Re;
        double Im;
};

Complex Complex::Decart(const double &re, const double &im){
    return Complex(re, im);
}

Complex Complex::Polar(const double &r, const double &alpha){
    return Complex(r *cos(alpha), r*sin(alpha));
}


int main(){
    const double pi = 3.14159;
    Complex a = Complex::Decart(1.0, 0.0);
    Complex a = Complex::Polar(1.0, pi/2.0);
    return 0;
}