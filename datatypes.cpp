#include<iostream>
using namespace std;

int main() {
    //integers
    int a = 10;
    short b = 5;
    long c = 1000;
    long long d = 100000;

    //floating
    float e = 3.12;
    double f = 3.12589;
    long double g = 3.12567954;

    //character type
    char h = 'S';

    //boolean type
    bool i = true;

    //displaying sizes
    cout<<"sizes of different data types in c++ are:\n";
    cout<<"int:"<<sizeof(a)<<"bytes\n";
    cout<<"short:"<<sizeof(b)<<"bytes\n";
    cout<<"long:"<<sizeof(c)<<"bytes\n";
    cout<<"long long:"<<sizeof(d)<<"bytes\n";
    cout<<"float:"<<sizeof(e)<<"bytes\n";
    cout<<"double:"<<sizeof(f)<<"bytes\n";
    cout<<"long double:"<<sizeof(g)<<"bytes\n";
    cout<<"char:"<<sizeof(h)<<"bytes\n";
    cout<<"bool:"<<sizeof(i)<<"bytes\n";

    return 0;
}