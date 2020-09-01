#include <iostream>
using namespace std;

int main()
{
    //1~100までの繰り返し
    for (int i = 1; i < 101; ++i) {

        if ((i % 3 == 0) && (i % 5 == 0)) {     //3と5で割り切れる
            cout << "FizzBuzz" << endl;
        }
        else if (i % 5 == 0) {                  //5で割り切れる
            cout << "Buzz" << endl;
        }
        else if (i % 3 == 0) {                  //3で割り切れる
            cout << "Fizz" << endl;
        }
        else {                                  //それ以外の場合               
            cout << i << endl;
        }
    }
}