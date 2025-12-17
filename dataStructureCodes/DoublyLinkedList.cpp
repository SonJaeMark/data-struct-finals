#include "DoublyLinkedList.h"
#include <iostream>

using namespace std;

// Node constructor
Node::Node(string songTitle)
    : title(songTitle), prev(nullptr), next(nullptr) {}

// DoublyLinkedList constructor
DoublyLinkedList::DoublyLinkedList()
    : head(nullptr), tail(nullptr), current(nullptr) {}

void DoublyLinkedList::addSong(const string& title) {
    Node* newNode = new Node(title);

    if (!head) {
        head = tail = current = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    cout << "Song added: " << title << endl;
}

void DoublyLinkedList::playSong() {
    if (!current) {
        cout << "Playlist is empty.\n";
        return;
    }
    cout << "Now Playing: " << current->title << endl;
}

void DoublyLinkedList::playNext() {
    if (current && current->next) {
        current = current->next;
        playSong();
    } else {
        cout << "No next song.\n";
    }
}

void DoublyLinkedList::playPrevious() {
    if (current && current->prev) {
        current = current->prev;
        playSong();
    } else {
        cout << "No previous song.\n";
    }
}

void DoublyLinkedList::searchSong(const string& title) {
    Node* temp = head;
    while (temp) {
        if (temp->title == title) {
            cout << "Song found: " << title << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Song not found.\n";
}

void DoublyLinkedList::removeSong(const string& title) {
    Node* temp = head;

    while (temp) {
        if (temp->title == title) {
            if (temp == head) head = temp->next;
            if (temp == tail) tail = temp->prev;
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;

            if (current == temp)
                current = temp->next ? temp->next : temp->prev;

            delete temp;
            cout << "Song removed: " << title << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Song not found.\n";
}

void DoublyLinkedList::displayPlaylist() {
    Node* temp = head;
    cout << "\n--- Playlist ---\n";
    while (temp) {
        cout << temp->title << endl;
        temp = temp->next;
    }
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
}
