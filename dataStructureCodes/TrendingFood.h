#ifndef TRENDING_FOOD_H
#define TRENDING_FOOD_H

#include <string>
#include <queue>
#include <vector>

/**
 * @struct News
 * @brief Represents a trending food with a popularity score
 */
struct News {
    std::string title;
    int popularity;

    News(const std::string& t, int p);
};

/**
 * @struct ComparePopularity
 * @brief Comparison functor for priority queue (higher popularity first)
 */
struct ComparePopularity {
    bool operator()(const News& n1, const News& n2) const;
};

/**
 * @class TrendingFood
 * @brief Manages trending food items using a priority queue
 */
class TrendingFood {
private:
    std::priority_queue<News, std::vector<News>, ComparePopularity> foods;

public:
    void addFood(const std::string& title, int popularity);
    void viewTopFood() const;
    void displayAllFoods() const;
};

#endif
