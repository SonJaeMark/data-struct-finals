#include "TrendingFood.h"
#include <iostream>

using namespace std;

// News constructor
News::News(const string& t, int p) : title(t), popularity(p) {}

// Compare functor
bool ComparePopularity::operator()(const News& n1, const News& n2) const {
    return n1.popularity < n2.popularity; // higher popularity first
}

// TrendingFood methods
void TrendingFood::addFood(const string& title, int popularity) {
    foods.push(News(title, popularity));
    cout << "News added successfully!\n";
}

void TrendingFood::viewTopFood() const {
    if (foods.empty()) {
        cout << "No Trending Food Available.\n";
    } else {
        News top = foods.top();
        cout << "\nTop Trending Food\n";
        cout << "Title: " << top.title << endl;
        cout << "Popularity: " << top.popularity << endl;
    }
}

void TrendingFood::displayAllFoods() const {
    if (foods.empty()) {
        cout << "No food to display.\n";
        return;
    }

    priority_queue<News, vector<News>, ComparePopularity> temp = foods;
    cout << "\nAll Trending Food (highest to lowest):\n";
    while (!temp.empty()) {
        News n = temp.top();
        cout << "-" << n.title << " (Popularity: " << n.popularity << ")\n";
        temp.pop();
    }
}
