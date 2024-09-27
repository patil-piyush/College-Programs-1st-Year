#include <iostream>
using namespace std;

class song {
    string title;
    string singer;
public:
    song *next;
    song() { next = NULL; }

    void read() {
        cout << "Enter song title: ";
        cin>>title;
        cout << "Enter singer name: ";
        cin>>singer;
    }

    void display() {
        cout << "Title: " << title << ", Singer: " << singer << endl;
    }

    string getTitle() { return title; }
    void setSinger(const string& newSinger) { singer = newSinger; }
};

class playlist {
    song *head;

public:
    playlist() { head = NULL; }

    void addsong() {
        song *nn = new song;
        nn->read();

        if (head == NULL) {
            head = nn;
        } else {
            song *cn;
            for (cn = head; cn->next != NULL; cn = cn->next);
            cn->next = nn;
        }
        cout << "Song added to the playlist." << endl;
    }

    void insertAtBeginning() {
        song *nn = new song;
        nn->read();

        if (head == NULL) {
            head = nn;
        } else {
            nn->next = head;
            head = nn;
        }
        cout << "Song inserted at the beginning of the playlist." << endl;
    }

    void displayplaylist() {
        if (head == NULL) {
            cout << "Playlist is empty." << endl;
        } else {
            cout << "Playlist:" << endl;
            for (song *cn = head; cn != NULL; cn = cn->next) {
                cn->display();
            }
        }
    }

    void deletesong() {
        if (head == NULL) {
            cout << "Playlist is empty, nothing to delete." << endl;
            return;
        }

        string delTitle;
        cout << "Enter the title of the song to delete: ";
        cin>>delTitle;

        song *prev = NULL;
        bool found = false;

        for (song *cn = head; cn != NULL; prev = cn, cn = cn->next) {
            if (cn->getTitle() == delTitle) {
                found = true;
                if (prev == NULL) {
                    head = cn->next;
                } else {
                    prev->next = cn->next;
                }
                delete cn;
                cout << "Song deleted from the playlist." << endl;
                break;
            }
        }

        if (!found) {
            cout << "Song not found in the playlist." << endl;
        }
    }

    void insertAfter() {
        string afterTitle;
        cout << "Enter the title of the song to insert after: ";
        cin>>afterTitle;

        bool found = false;

        for (song *cn = head; cn != NULL; cn = cn->next) {
            if (cn->getTitle() == afterTitle) {
                found = true;
                song *nn = new song;
                nn->read();
                nn->next = cn->next;
                cn->next = nn;
                cout << "Song inserted after " << afterTitle << "." << endl;
                break;
            }
        }

        if (!found) {
            cout << "Song with title '" << afterTitle << "' not found." << endl;
        }
    }

    void updatesong() {
        string title, newSinger;
        cout << "Enter the title of the song to update: ";
        cin>>title;

        bool found = false;

        for (song *cn = head; cn != NULL; cn = cn->next) {
            if (cn->getTitle() == title) {
                found = true;
                cout << "Enter new singer name: ";
                getline(cin, newSinger);
                cn->setSinger(newSinger);
                cout << "Song updated successfully." << endl;
                break;
            }
        }

        if (!found) {
            cout << "Song with title " << title << " not found." << endl;
        }
    }

    void reverseList(){
        song* prev = nullptr;
        song* curr = head;
        song* nextt = nullptr;

        while(curr != nullptr){
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        } 

        head = prev;
    }
};

int main() {
    playlist myPlaylist;
    int choice;

    do {
        cout << "\nPlaylist Menu:\n";
        cout << "1. Add song\n";
        cout << "2. Insert song at beginning\n";
        cout << "3. Display playlist\n";
        cout << "4. reverse song\n";
        cout << "5. Insert song after another\n";
        cout << "6. Update song\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
       

        switch (choice) {
            case 1:
                myPlaylist.addsong();
                break;
            case 2:
                myPlaylist.insertAtBeginning();
                break;
            case 3:
                myPlaylist.displayplaylist();
                break;
            case 4:
                myPlaylist.deletesong();
                break;
            case 5:
                myPlaylist.insertAfter();
                break;
            case 6:
                myPlaylist.updatesong();
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}