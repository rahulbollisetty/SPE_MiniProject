// Function definitions
double squareRoot(double x) {
    if(x<0){
        cout<<"Negative numbers not accepted"<<endl;
        return 0;
    }
    return sqrt(x);
}

double factorial(int x) {
    if (x < 0) {
        cout<<"Negative numbers not accepted"<<endl;
        return 0; // Undefined for negative integers
    }
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

double naturalLogarithm(double x) {
    if (x <= 0) {
        return 0; // Undefined for non-positive numbers
    }
    return log(x);
}

double powerFunction(double base, double exponent) {
    return pow(base, exponent);
}