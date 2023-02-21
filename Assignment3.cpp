#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int sum_list (vector <int> list){               
    int sum = 0;
    for (int i = 0; i < list.size(); i++ ){
        sum+= list[i];
    }
    return sum;
}
