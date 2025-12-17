#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <string>

/**
 * @struct Node
 * @brief Represents a song node in the doubly linked list
 */
struct Node {
    std::string title; /**< Song title */
    Node* prev;        /**< Pointer to previous song */
    Node* next;        /**< Pointer to next song */

    /**
     * @brief Node constructor
     * @param songTitle Title of the song
     */
    Node(std::string songTitle);
};

/**
 * @class DoublyLinkedList
 * @brief Implements a music playlist using a doubly linked list
 */
class DoublyLinkedList {
private:
    Node* head;     /**< First song */
    Node* tail;     /**< Last song */
    Node* current;  /**< Currently playing song */

public:
    /**
     * @brief Constructor initializes empty playlist
     */
    DoublyLinkedList();

    void addSong(const std::string& title);
    void playSong();
    void playNext();
    void playPrevious();
    void searchSong(const std::string& title);
    void removeSong(const std::string& title);
    void displayPlaylist();

    /**
     * @brief Destructor frees memory
     */
    ~DoublyLinkedList();
};

#endif
