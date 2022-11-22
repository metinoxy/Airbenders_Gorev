#include <iostream>
#include <vector>
#include <cmath>
double mean(std::vector<double> data){
    double sum = 0;
    for(double i : data){
        sum += i;
    }
    double mean = sum / data.size();
    return mean;
}
double standard_deviation(std::vector<double> data){
    double mean_use;
    double sum = 0;
    mean_use = mean(data);
    for(double i :data){
        sum += pow((i - mean_use),2);
    }
    return sqrt(sum / data.size());

}
int main(){
    std::vector<double> sth;
    sth={1,1,1,1};
    std::cout << mean(sth) << std::endl;
    std::cout << standard_deviation(sth) << std::endl;
}
