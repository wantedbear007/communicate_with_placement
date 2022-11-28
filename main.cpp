#include<iostream>
#include "./Classes/SquareOne.h"
using namespace std;


int main() {

    bool start = true;
    int user_input, ret_val;

    while (start) {
        cout << endl;
        SquareOne Cube;
        cin >> user_input;
        ret_val = Cube.indexPage(user_input);
        if (ret_val == 1) start = false;
    }
}