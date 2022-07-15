#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int left = 1, right = 22;
    vector<int> numbers;
        int n, m;
        bool is_dividable  = false;

        for(int i=left; i<=right; i++){
            m = i;
            while(m>0){
                n = m%10;
                if(n != 0 && i%n == 0){
                     is_dividable = true;

                } else {
                    is_dividable = false;
                    break;
                }
                m = m/10;
            }
            if(is_dividable == true) {
                   cout << i << endl;
                numbers.push_back(i);
            }
        }

       //for(int i: numbers)
        //cout << i << endl;
    }

