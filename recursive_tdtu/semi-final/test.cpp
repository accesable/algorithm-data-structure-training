#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <tuple>
#include <cmath>
#include <string>

bool is_triangle(long long a, long long b, long long c) {
    return a + b > c && a + c > b && b + c > a;
}

long long minium_triangle_perimeter(std::vector<long long>& l, long long a) {
    long long minium_distance = LLONG_MAX;
    int c = 0;
    std::tuple<long long, long long, long long> final_side;
    bool has_triangle = false;
    for (int i = 0; i < l.size() - 2; i++) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            for (int k = j + 1; k < l.size(); k++) {
                if (is_triangle(l[i], l[j], l[k])) {
                    has_triangle = true;
                    long long perimeter = l[i] + l[j] + l[k];
                    c++;
                    if (minium_distance > std::abs(a - perimeter)) {
                        minium_distance = std::abs(a - perimeter);
                        final_side = std::make_tuple(l[i], l[j], l[k]);
                    }
                }
            }
        }
    }
    if (has_triangle) {
        std::cout << "Final : " << std::get<0>(final_side) << " " << std::get<1>(final_side) << " " << std::get<2>(final_side) << std::endl;
        std::cout << "Counter : " << c << std::endl;
        return std::get<0>(final_side) + std::get<1>(final_side) + std::get<2>(final_side);
    } else {
        return -1; // Same as "UNSOL"
    }
}

int main() {
    std::string n_a;
    std::getline(std::cin, n_a);
    int n = std::stoi(n_a.substr(0, n_a.find(" ")));
    long long a = std::stoll(n_a.substr(n_a.find(" ") + 1));
    std::vector<long long> l(n);
    for (int i = 0; i < n; i++) {
        std::string input;
        std::getline(std::cin, input);
        l[i] = std::stoll(input);
    }
    std::cout << minium_triangle_perimeter(l, a) << std::endl;
    return 0;
}
