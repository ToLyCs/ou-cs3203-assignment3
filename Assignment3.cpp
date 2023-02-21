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

int multiple_list (vector <int> list){          
    int multi = 1;
    for (int i = 0; i < list.size(); i++)
    {
        multi *= list[i];
    }
    return multi;
}

vector <int> reverse (vector <int> list){       
    int n = list.size();
    for (int i = 0; i < n/2; i++){
        int temp = list[i];
        list[i] = list [n -i -1];
        list [n -i -1] = temp;
    }
    return list;
}

int main(){
    vector <int> list;                  
    int input;
    cout << "Please input a list of number (end with a): \n";      
    while (cin >> input && input != 'a')                        
    {
        list.push_back(input);              
    }
    
    int sum = sum_list(list);           
    int multi = multiple_list(list);
    
    cout <<"Sum result is: " << sum << "\n";    
    cout << "Multiple result is: " << multi << "\n";    
     
    return 0;
}
