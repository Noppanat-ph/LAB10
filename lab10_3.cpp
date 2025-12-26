#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int n = 0;
    double sum = 0;
    double sum_squre = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += stod(textline);
        sum_squre += pow(stod(textline),2);
        n++;
    }
    double mean=sum/n;
    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt((sum_squre/n)-pow(mean,2));
}