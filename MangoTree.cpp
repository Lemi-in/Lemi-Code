#include<iostream>
using namespace std;

int main() {
    // Initial values
    int initialTrees = 80;
    int initialFruitsPerTree = 900;

    // Calculate initial total fruits
    int initialTotalFruits = initialTrees * initialFruitsPerTree;

    // Display initial information
    cout << "Initial number of mango trees: " << initialTrees << endl;
    cout << "Fruits per tree before planting: " << initialFruitsPerTree << endl;
    cout << "Initial total number of fruits: " << initialTotalFruits << endl;

    // Plant additional mango tree
    int additionalTrees = 1;
    int decrementPerTree = 4;

    // Calculate new values
    int newTrees = initialTrees + additionalTrees;
    int newFruitsPerTree = initialFruitsPerTree - decrementPerTree;
    int newTotalFruits = newTrees * newFruitsPerTree;

    // Display information after planting
    cout << "\nAfter planting additional tree:" << endl;
    cout << "New number of mango trees: " << newTrees << endl;
    cout << "Fruits per tree after planting: " << newFruitsPerTree << endl;
    cout << "New total number of fruits: " << newTotalFruits << endl;

    // Display the increment in tree and decrement in fruits per tree
    cout << "\nIncrement in mango trees: " << additionalTrees << endl;
    cout << "Decrement in fruits per tree: " << decrementPerTree << endl;

    return 0;
}
