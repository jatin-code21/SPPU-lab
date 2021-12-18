#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout << real << " + " << imag << "i"
             << "\n";
        cout << real << " + " << imag << "i";
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real; // real is for c1 and c.real is for c2
        temp.imag = imag + c.imag;

        return temp;
    }

    Complex operator*(Complex c)
    {
        Complex temp1;
        temp1.real = real * c.real;
        temp1.imag = imag * c.imag;
        return temp1;
    }
};

int main()
{
    Complex c1(2, 7);
    Complex c2(5, 3);
    Complex c3;
    Complex c4;
    c3 = c1 + c2; // c1.add(c2); this how the compiler is taking it
    c4 = c1 * c2;
    c3.print();
}