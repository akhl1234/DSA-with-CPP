#include <iostream>
using namespace std;

int main() {
    int sum = 0, count = 0, num = 2;
    while (count < 20) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            sum += num;
            count++;
        }
        num++;
    }
    cout << sum << endl;
    return 0;
}