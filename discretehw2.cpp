 #include <iostream>
 #include <fstream>
 #include <math.h>
 using namespace std;

 double factorial(double idx);
 double approx(double idx);
 double eror(double i1, double i2);

int main()
{

    double i1 = 10;
    double i2 = 20;
    double i3 = 30;
    double i4 = 40;
    double i5 = 50;

    double facto1 = factorial(i1);
    double facto2 = factorial(i2);
    double facto3 = factorial(i3);
    double facto4 = factorial(i4);
    double facto5 = factorial(i5);

    double approx1 = approx(i1);
    double approx2 = approx(i2);
    double approx3 = approx(i3);
    double approx4 = approx(i4);
    double approx5 = approx(i5);

    double err1 = eror(facto1 , approx1);
    double err2 = eror(facto2 , approx2);
    double err3 = eror(facto3 , approx3);
    double err4 = eror(facto4 , approx4);
    double err5 = eror(facto5 , approx5);

    cout << "For input " << i1 << " the real factorial is: " << facto1;
    cout << " and the approximation is " << approx1 << " so the relative error would be ";
    cout << err1 << endl;

    cout << "For input " << i2 << " the real factorial is: " << facto2;
    cout << " and the approximation is " << approx2 << " so the relative error would be ";
    cout << err2 << endl;

    cout << "For input " << i3 << " the real factorial is: " << facto3;
    cout << " and the approximation is " << approx3 << " so the relative error would be ";
    cout << err3 << endl;

    cout << "For input " << i4 << " the real factorial is: " << facto4;
    cout << " and the approximation is " << approx4 << " so the relative error would be ";
    cout << err4 << endl;

    cout << "For input " << i5 << " the real factorial is: " << facto5;
    cout << " and the approximation is " << approx5 << " so the relative error would be ";
    cout << err5 << endl;

    return 0;
}

double factorial(double idx)
{
    if(idx == 1)
        return 1;

    return idx * factorial(idx -1);
}

double approx(double idx)
{
    double pie = 3.14159;
    double ee = 2.71828;

    double result = sqrt(2 * pie * idx);
    result *= pow(idx,idx);
    result *= pow(ee , 0 - idx);

    return result;
}

double eror(double i1, double i2)
{
    double diff = i1 - i2;
    diff /= i1;
    return diff;
}
