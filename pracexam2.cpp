#include <iostream>
#include <vector>
#include <utility> // For std::pair
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

template <typename T1, typename T2>
class backhocend {
private:
    std::vector<std::pair<T1, T2>> elements;

public:
    void add(const T1& element1, const T2& element2) {
        // Check if the pair already exists in the vector
        for (const auto& elem : elements) {
            if (elem.first == element1 && elem.second == element2) {
                std::cout << "Pair already exists, not added.\n";
                return;
            }
        }
        // If the pair doesn't exist, add it to the vector
        elements.push_back(std::make_pair(element1, element2));
    }

    void remove(const T1& element1, const T2& element2) {
        for (auto it = elements.begin(); it != elements.end(); ++it) {
            if (it->first == element1 && it->second == element2) {
                elements.erase(it);
                std::cout << "Pair removed.\n";
                return;
            }
        }
        std::cout << "Pair not found, nothing removed.\n";
    }

    void remove() {
        if (elements.empty()) {
            std::cout << "Vector is empty, nothing to remove.\n";
            return;
        }

        // Seed the random number generator
        std::srand(std::time(0));
        // Generate a random index within the vector's size
        int randomIndex = std::rand() % elements.size();
        // Remove the pair at the random index
        elements.erase(elements.begin() + randomIndex);
        std::cout << "Random pair removed.\n";
    }

    void display() {
        std::cout << "Pairs in the vector:\n";
        for (const auto& elem : elements) {
            std::cout << "(" << elem.first << ", " << elem.second << ") ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Example usage
    backhocend<int, std::string> bh;

    // Add pairs
    bh.add(10, "abc");
    bh.add(20, "def");
    bh.add(30, "ghi");

    // Display pairs
    bh.display();

    // Remove pair with parameters
    bh.remove(20, "def");
    bh.display();

    // Remove random pair
    bh.remove();
    bh.display();

    return 0;
}
