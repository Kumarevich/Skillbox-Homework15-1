#include <iostream>

int main() {
    int arr[10] {-2, 0, -1, 5, -2, 3 , 1, -6, 10, 0};
    int startInd = 0;
    int sum = 0;
    int max = 0;
    int maxInd;

    for(int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        sum += arr[i];
        if (sum <= 0) {
            startInd = i + 1;
            sum = 0;
        } else {
            if (sum > max) {
                max = sum;
                maxInd = i;
            }
        }
    }
    std::cout << "Start Index: " << startInd << std::endl << "End Index: " << maxInd << std::endl << "Sum: " << max;
    return 0;
}
