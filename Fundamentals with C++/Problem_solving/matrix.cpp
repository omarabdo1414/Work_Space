#include <iostream>
#include <vector>
#include <algorithm>

int invert_matrix(const std::vector<std::vector<int>>& matrix) {
    int l = matrix.size();
    auto func = [l](int k) { return l - k - 1; };

    int sum = 0;

    int h_l = (0.5 * l);
    for (int i = 0; i < h_l; ++i) {
        for (int j = 0; j < h_l; ++j) {
            sum += std::max({matrix[i][j], matrix[func(i)][j], matrix[i][func(j)], matrix[func(i)][func(j)]});
        }
    }

    return sum;
}

int main() {
    std::vector<std::vector<int>> exampleMatrix = {
        {112, 42, 83, 119},
        {56, 125, 56, 49},
        {15, 78, 101, 43},
        {62, 98, 114, 108}
    };

    std::cout << invert_matrix(exampleMatrix) << std::endl;

    return 0;
}
