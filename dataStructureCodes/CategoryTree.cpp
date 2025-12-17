#include "CategoryTree.h"
#include <iostream>
#include <algorithm>

using namespace std;

// ----------------- Category -----------------
Category::Category(const string& n) : name(n) {}

// ----------------- CategoryTree -----------------
CategoryTree::CategoryTree(const string& rootName) {
    root = new Category(rootName);
}

// Convert string to lowercase
string CategoryTree::toLower(const string& str) const {
    string result = str;
    for (char &c : result) c = tolower(c);
    return result;
}

// Display tree recursively
void CategoryTree::displayTree(Category* node, int level) const {
    for (int i = 0; i < level; i++) cout << "   ";
    cout << "|-- " << node->name << endl;

    for (Category* child : node->children) {
        displayTree(child, level + 1);
    }
}

// Find category recursively
Category* CategoryTree::findCategory(Category* node, const string& name) const {
    if (toLower(node->name) == toLower(name)) return node;

    for (Category* child : node->children) {
        Category* found = findCategory(child, name);
        if (found) return found;
    }
    return nullptr;
}

// Delete category recursively
void CategoryTree::deleteCategory(Category* node) {
    for (Category* child : node->children) {
        deleteCategory(child);
    }
    delete node;
}

// Remove category by name (except root)
bool CategoryTree::removeCategory(Category* parent, const string& name) {
    for (long unsigned int i = 0; i < parent->children.size(); i++) {
        if (toLower(parent->children[i]->name) == toLower(name)) {
            deleteCategory(parent->children[i]);
            parent->children.erase(parent->children.begin() + i);
            return true;
        }
        // Try removing from children
        if (removeCategory(parent->children[i], name)) return true;
    }
    return false;
}

// ----------------- Public Interface -----------------

bool CategoryTree::addCategory(const std::string& parentName, const std::string& newCategory) {
    Category* parent = findCategory(root, parentName);
    if (!parent) {
        return false; // parent not found
    }
    parent->children.push_back(new Category(newCategory));
    return true; // successfully added
}


void CategoryTree::displayCategories() const {
    cout << "\nProduct Category Tree:\n";
    displayTree(root, 0);
}

void CategoryTree::searchCategory(const string& name) const {
    Category* found = findCategory(root, name);
    if (!found) {
        cout << "Category not found!\n";
    } else {
        cout << "\nCategory and its contents:\n";
        displayTree(found, 0);
    }
}

void CategoryTree::removeCategory(const string& name) {
    if (toLower(name) == toLower(root->name)) {
        cout << "Cannot remove root category!\n";
        return;
    }
    if (removeCategory(root, name)) {
        cout << "Category and its contents removed successfully!\n";
    } else {
        cout << "Category not found!\n";
    }
}

// Destructor
CategoryTree::~CategoryTree() {
    deleteCategory(root);
}
