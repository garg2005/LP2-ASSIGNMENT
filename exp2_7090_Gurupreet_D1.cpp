#include <iostream>

int sumOfSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += (i * (i + 1)) / 2;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    int result = sumOfSeries(n);
    std::cout << "Sum of series: " << result << std::endl;

    return 0;
}
