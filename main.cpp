#include <iostream>
#include <string>
#include <limits>
#include "dataStructureCodes/DoublyLinkedList.h"
#include "dataStructureCodes/PlateStack.h"
#include "dataStructureCodes/StudentQueue.h"
#include "dataStructureCodes/TrendingFood.h"
#include "dataStructureCodes/ParkingSystem.h"
#include "dataStructureCodes/CategoryTree.h"

void runLinkedList(){
    DoublyLinkedList playlist;
    int choice;
    std::string song;

    // Insert 14 songs
    playlist.addSong("Perfect - Ed Sheeran");
    playlist.addSong("Thinking Out Loud - Ed Sheeran");
    playlist.addSong("Bohemian Rhapsody - Queen");
    playlist.addSong("Hotel California - Eagles");
    playlist.addSong("Someone Like You - Adele");
    playlist.addSong("Shape of You - Ed Sheeran");
    playlist.addSong("Blinding Lights - The Weeknd");
    playlist.addSong("Let Her Go - Passenger");
    playlist.addSong("All of Me - John Legend");
    playlist.addSong("Counting Stars - OneRepublic");
    playlist.addSong("Yellow - Coldplay");
    playlist.addSong("Fix You - Coldplay");
    playlist.addSong("Happier - Marshmello");
    playlist.addSong("Love Yourself - Justin Bieber");

    system("clear"); // Linux / Dev Container

    do {
        std::cout << "\n🎵 MUSIC PLAYLIST 🎵\n";
        std::cout << "1. Add Song\n";
        std::cout << "2. Play Current Song\n";
        std::cout << "3. Play Next Song\n";
        std::cout << "4. Play Previous Song\n";
        std::cout << "5. Search Song\n";
        std::cout << "6. Remove Song\n";
        std::cout << "7. Display Playlist\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter song title: ";
                std::getline(std::cin, song);
                playlist.addSong(song);
                break;
            case 2:
                playlist.playSong();
                break;
            case 3:
                playlist.playNext();
                break;
            case 4:
                playlist.playPrevious();
                break;
            case 5:
                std::cout << "Enter song title: ";
                std::getline(std::cin, song);
                playlist.searchSong(song);
                break;
            case 6:
                std::cout << "Enter song title: ";
                std::getline(std::cin, song);
                playlist.removeSong(song);
                break;
            case 7:
                playlist.displayPlaylist();
                break;
        }
    } while (choice != 0);

}

void runStack(){
    PlateStack cafeteria;
    int choice, plateID;

    do {
        std::cout << "\n--- Cafeteria Plate Stack ---\n";
        std::cout << "1. Add Plate\n";
        std::cout << "2. Take Plate\n";
        std::cout << "3. Show Stack\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter plate number: ";
                std::cin >> plateID;
                cafeteria.addPlate(plateID);
                break;

            case 2:
                cafeteria.takePlate();
                break;

            case 3:
                cafeteria.showPlates();
                break;

            case 0:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}

void runQueue(){
    StudentQueue cashier;
    int choice;
    std::string name;

    do {
        std::cout << "\n--- School Cashier Queue ---\n";
        std::cout << "1. Student Enters Line\n";
        std::cout << "2. Serve Student\n";
        std::cout << "3. Show Line\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter student name: ";
                std::getline(std::cin, name);
                cashier.addStudent(name);
                break;
            case 2:
                cashier.serveStudent();
                break;
            case 3:
                cashier.showLine();
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}

void runHeap(){
    TrendingFood tracker;
    int choice;

    do {
        std::cout << "\n===== Trending Popular Food Tracker =====\n";
        std::cout << "1. Add New Popular Food\n";
        std::cout << "2. View Top Trending Food\n";
        std::cout << "3. Display All Trending Foods\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1: {
                std::string title;
                int popularity;
                std::cout << "Enter Food Name: ";
                std::getline(std::cin, title);
                std::cout << "Enter Popularity Score: ";
                std::cin >> popularity;
                std::cin.ignore();
                tracker.addFood(title, popularity);
                break;
            }
            case 2:
                tracker.viewTopFood();
                break;
            case 3:
                tracker.displayAllFoods();
                break;
            case 0:
                std::cout << "Exiting Program. Thank you!\n";
                break;
            default:
                std::cout << "Invalid Choice. Try again.\n";
        }
    } while (choice != 0);
}

void runArray(){
    ParkingSystem parking;
    int choice;
    int row, col;

    do {
        std::cout << "\n===== Parking System Menu =====\n";
        std::cout << "1. Park a Car\n";
        std::cout << "2. Free a Parking Spot\n";
        std::cout << "3. Display Parking Lot\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter row (0-4): ";
                std::cin >> row;
                std::cout << "Enter column (0-4): ";
                std::cin >> col;
                parking.insertCar(row, col);
                break;

            case 2:
                std::cout << "Enter row (0-4): ";
                std::cin >> row;
                std::cout << "Enter column (0-4): ";
                std::cin >> col;
                parking.freeCar(row, col);
                break;

            case 3:
                parking.traverse();
                break;

            case 0:
                std::cout << "Exiting Parking System...\n";
                break;

            default:
                std::cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);
}

void runTree(){
    CategoryTree tree("Apparel");

    // Preloaded categories
    tree.addCategory("Apparel", "Clothes");
    tree.addCategory("Apparel", "Pants");
    tree.addCategory("Clothes", "T-Shirt");
    tree.addCategory("Clothes", "Sando");
    tree.addCategory("Pants", "Short");
    
    int choice;
    std::string parentName, newCategory, searchName, removeName;

    do {
        std::cout << "\n--- Product Category Browser ---\n";
        std::cout << "1. Add Category\n";
        std::cout << "2. Display All Categories\n";
        std::cout << "3. Search Category\n";
        std::cout << "4. Remove Category\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                std::cout << "Enter parent category name: ";
                std::getline(std::cin, parentName);
                std::cout << "Enter new category name: ";
                std::getline(std::cin, newCategory);
                tree.addCategory(parentName, newCategory) ? std::cout << "Category added successfully!\n" : std::cout << "Category not found!\n";
                break;
            case 2:
                tree.displayCategories();
                break;
            case 3:
                std::cout << "Enter category to search: ";
                std::getline(std::cin, searchName);
                tree.searchCategory(searchName);
                break;
            case 4:
                std::cout << "Enter category to remove: ";
                std::getline(std::cin, removeName);
                tree.removeCategory(removeName);
                break;
            case 0:
                std::cout << "Program exited.\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 0);
}

int main() {

    do{
        std::cout << "What data structure would you like to present?\n";
        std::cout << "1. Doubly Linked List\n2. Stack\n3. Queue\n4. Max Heap\n5. 2D Array\n6. Category Tree\n0. Exit\n";
        std::cout << "Enter choice (1-6): ";

        int choice;
        std::cin >> choice;
        switch(choice){
            case 1:
                runLinkedList();
                break;
            case 2:
                runStack();
                break;
            case 3:
                runQueue();
                break;
            case 4:
                runHeap();
                break;
            case 5:
                runArray();
                break;
            case 6:
                runTree();
                break;
            case 0:
                std::cout << "Exiting program. Goodbye!\n";
                return 0;   
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

        system("clear"); // Linux / Dev Container

    } while(1);
    return 0;
}
