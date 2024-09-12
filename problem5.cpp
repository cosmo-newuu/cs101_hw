#include <iostream>
using namespace std;
int main() {
    float x,y;
    cin >> x >> y;
    int output = (y * 30.48 > x) ? 1 : 0;
    cout << output;
    // i used chatgpt for finding how to output for this solution, because we havent learned if else statement.

}
