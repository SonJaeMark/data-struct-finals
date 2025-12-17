#ifndef CATEGORY_TREE_H
#define CATEGORY_TREE_H

#include <string>
#include <vector>

/**
 * @class Category
 * @brief Represents a category node in the tree
 */
class Category {
public:
    std::string name;
    std::vector<Category*> children;

    Category(const std::string& n);
};

/**
 * @class CategoryTree
 * @brief Manages a hierarchical tree of product categories
 */
class CategoryTree {
private:
    Category* root;

    std::string toLower(const std::string& str) const;
    void displayTree(Category* node, int level) const;
    Category* findCategory(Category* node, const std::string& name) const;
    void deleteCategory(Category* node);
    bool removeCategory(Category* parent, const std::string& name);

public:
    CategoryTree(const std::string& rootName);
    ~CategoryTree();

    bool addCategory(const std::string& parentName, const std::string& newCategory);
    void displayCategories() const;
    void searchCategory(const std::string& name) const;
    void removeCategory(const std::string& name);
};

#endif
