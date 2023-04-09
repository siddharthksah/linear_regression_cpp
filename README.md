# Simple Linear Regression in C++

This is a simple linear regression project implemented in C++ using native libraries only. The project demonstrates the use of gradient descent to train a linear regression model on randomly generated data.

## Requirements

- C++11 compiler (e.g., GCC, Clang)
- `make` tool (optional, for using the Makefile)

## Project Structure

linear_regression_cpp/
├── main.cpp
├── Makefile
└── README.md


- `main.cpp`: Contains the main C++ code implementing the linear regression algorithm.
- `Makefile`: Contains the compilation rules for the project.
- `README.md`: Provides an overview of the project and instructions for building and running the code.

## Building the Project

1. Navigate to the project directory:

```sh
cd linear_regression_cpp

2. Use the provided Makefile to compile and build the project:
```sh
make
```

3. Running the Project
Run the compiled executable:
```sh
./linear_regression
```
The output will display the trained parameters (m and b) for the linear regression model.

Customizing the Code
You can modify the learning rate, number of iterations, or input data generation to experiment with different training configurations. Further improvements can be made by implementing input normalization, feature scaling, or different optimization algorithms.

License
This project is available under the MIT License.



