/*

knn algorithm:
1. get neighbors by euclidean distance
2. make prediction according to neighbors (classification: argmax, regression: mean)
*/


#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double euclideanDistance(vector<double> data1, vector<double> data2){
    /*
    args: 
        data1: a vector of 1-dim
        data2: a vector of 1 dim
    */
    assert(data1.size() == data2.size());
    double distance = 0;
    for (size_t i = 0; i < data1.size(); i++)
    {
        /* code */
        distance += pow(data1[i] - data2[i], 2);
    }
    return sqrt(distance);
    

}

