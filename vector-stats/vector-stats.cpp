// vector-stats.cpp 
// Lisa Jacklin
// CS 201
// 10/27/2021
//

#include <iostream>
#include <vector>
#include <algorithm>

struct vectorStats {
    double min= 0.0;
    double max = 0.0;
    double mean = 0.0;
    double median = 0.0;
};

int main()
{
    std::vector <int> s1{ 1, 26,7, 14,5,2 };
    std::vector <int> s2{ 5,10,15,20, 25,30 };
    std::vector <int> s3{ 16, 0, 14, 43, 78, 19};
    std::vector <int> s4{ 2, 10, 14, 17, 0, 22};
    std::vector <int> s5{ 0,2,17,0,15, 29 };


}

/*
return all min, max, mean and meadian values using a struct.

void maxVal (std::vector <int> & num) {
//finding the maximum element
    int max = *max_element(num.begin(), num.end());

}

void minVal (std::vector <int> & num) {

    int min = *min_element(num.begin(), num.end());
}

*/