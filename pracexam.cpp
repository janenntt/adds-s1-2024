#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

template <typename T>
class backhocend {
private:
    std::vector<T> elements;

public:
    void add(const T& element) {
        for (const T& elem : elements) {
            if (elem == element) {
                std::cout << "Element already exists, not added.\n";
                return;
            }
        }
        elements.push_back(element);
    }

    void remove(const T& element) {
        for (auto it = elements.begin(); it != elements.end(); ++it) {
            if (*it == element) {
                elements.erase(it);
                std::cout << "Element removed.\n";
                return;
            }
        }
        std::cout << "Element not found, nothing removed.\n";
    }

    void remove() {
        if (elements.empty()) {
            std::cout << "Vector is empty, nothing to remove.\n";
            return;
        }
        std::srand(std::time(0));
        int randomIndex = std::rand() % elements.size();
        // Remove the element at the random index
        elements.erase(elements.begin() + randomIndex);
        std::cout << "Random element removed.\n";
    }

    void display() {
        std::cout << "Elements in the vector:\n";
        for (const T& elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Example usage
    backhocend<int> bh;

    // Add elements
    bh.add(10);
    bh.add(20);
    bh.add(30);

    // Display elements
    bh.display();

    // Remove element with parameter
    bh.remove(20);
    bh.display();

    // Remove random element
    bh.remove();
    bh.display();

    return 0;
}
