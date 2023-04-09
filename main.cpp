#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstdlib>

// Function to calculate the mean of a vector
double mean(const std::vector<double>& vec) {
    double sum = 0.0;
    for (const double& value : vec) {
        sum += value;
    }
    return sum / vec.size();
}

// Function to calculate the dot product of two vectors
double dot_product(const std::vector<double>& vec1, const std::vector<double>& vec2) {
    double result = 0.0;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

// Gradient descent function for linear regression
void gradient_descent(const std::vector<double>& x, const std::vector<double>& y, double& m, double& b, double learning_rate, int iterations) {
    size_t n = x.size();

    for (int i = 0; i < iterations; ++i) {
        std::vector<double> y_pred(n);
        for (size_t j = 0; j < n; ++j) {
            y_pred[j] = m * x[j] + b;
        }

        double dm = -2 * dot_product(x, y) + 2 * dot_product(x, y_pred);
        double db = -2 * mean(y) + 2 * mean(y_pred);

        m -= learning_rate * dm;
        b -= learning_rate * db;
    }
}

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(0)));

    // Generate random data for training
    std::vector<double> x(100), y(100);
    for (size_t i = 0; i < 100; ++i) {
        x[i] = static_cast<double>(std::rand()) / RAND_MAX * 10;
        y[i] = 3 * x[i] + 2 + static_cast<double>(std::rand()) / RAND_MAX * 1;
    }

    // Normalize the input data
    double mean_x = mean(x);
    double max_x = *std::max_element(x.begin(), x.end());
    double min_x = *std::min_element(x.begin(), x.end());
    for (size_t i = 0; i < x.size(); ++i) {
        x[i] = (x[i] - mean_x) / (max_x - min_x);
    }

    // Set initial parameters and learning rate
    double m = 0.0;
    double b = 0.0;
    double learning_rate = 0.001;
    int iterations = 1000;

    // Train the linear regression model
    gradient_descent(x, y, m, b, learning_rate, iterations);

    // Output the trained parameters
    std::cout << "Trained parameters: m = " << m << ", b = " << b << std::endl;

    return 0;
}
