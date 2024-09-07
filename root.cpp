// Program that finds root of a continous function in a  an interval [a,b]


double root(double (*f)(double), double a, double b, double epsilon) {
double middle = (a + b) / 2;
while (f(middle) != 0 && fabs(b - a) > epsilon) {
if (f(a) * f(middle) < 0) // if f(a) and f(middle) have
b = middle; // opposite signs;
else a = middle;
middle = (a + b) / 2;
}
return middle;
}


double (*f)(double x){
    if(f(x) >0){
        return x*x;
    }
    else
    return 0;
}

int main(){

    double d = root(f(x), -10.01, 10.01);
    cout << d << endl;
    return 0;
}