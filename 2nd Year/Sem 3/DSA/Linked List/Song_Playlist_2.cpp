#include <iostream>
using namespace std;

class song
{
private:
    string Title;
    string Singer;

public:
    song *next;
    song()
    {
        next = NULL;
    }
    void read()
    {
        cout << "\n Song: ";
        cin >> Title;
        cout << "\n Singer: ";
        cin >> Singer;
    }
    void display()
    {
        cout << "\n Song: "
             << Title << "  "
             << "Singer: "
             << Singer << endl;
    }
    void set_Singer(string *newSinger)
    {
        &singer = newSinger;
    }
    string get_Title()
    {
        return Title;
    }
};

class Playlist
{
    song *head;

public:
    Playlist()
    {
        head = NULL;
    }

    // appending song at the ending of the playlist
    void append_Song()
    {
        song *nn, *cn;
        nn = new song;
        nn->read();
        if (head == NULL)
        {
            head = nn;
        }
        else
        {
            // traversing loop until it get to the last node
            for (cn = head; cn->next != NULL; cn = cn->next)
                ;
            cn->next = nn;
        }
        cout << "Song added to the playlist." << endl;
    }

    // insert the song at the beginning of the playlist
    void insert_At_Beginning()
    {
        song *nn;
        nn = new song;
        nn->read();
        if (head == NULL)
        {
            head = nn;
        }
        else
        {
            nn->next = head;
            head = nn;
        }
        cout << "Song added at the beginning of the playlist." << endl;
    }

    // Display entire Playlist
    void display_Playlist()
    {
        song *cn;
        // if playlist has 0 songs
        if (head == NULL)
        {
            cout << "Playlist is Empty!!!\n";
        }
        else
        {
            cout << "Playlist: \n";
            // traversing through the playlist and printing each node
            for (cn = head; cn->next != NULL; cn = cn->next)
            {
                cn->display();
            }
        }
    }

    // Delete a song
    void delete_Song()
    {
        // if there is no song in the playlist
        if (head == NULL)
        {
            cout << "Playlist is empty, nothing to delete." << endl;
            return;
        }

        // getting title of the song which user want to delete
        string newTitle;
        cout << "Enter the title of the song you want to delete: ";
        cin >> newTitle;

        // flag for checking if user found the song that he wants to delete
        int flag = 0;

        song *cn, *prev = NULL;
        for (cn = head; cn->next != NULL; prev = cn, cn = cn->next)
        {
            if (newTitle == cn->get_Title())
            {
                flag = 1;
                // if user want to delete the first song in the playlist
                if (prev == NULL)
                {
                    head = cn->next;
                }
                else
                {
                    prev->next = cn->next;
                }
                // deleting the node
                delete cn;
                cout << "Song deleted from the playlist." << endl;
                break;
            }
        }
        // if song not found then flag remains zero
        if (flag == 0)
        {
            cout << "\nSong not fount in the Playlist!!!\n";
        }
    }
};

int main()
{
    playlist my_Playlist;

    while (1)
    {
        cout << "\nPlaylist Menu:\n";
        cout << "1. Add song\n";
        cout << "2. Insert song at beginning\n";
        cout << "3. Display playlist\n";
        cout << "4. Delete song\n";
        cout << "5. Insert song after another\n";
        cout << "6. Update song\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            my_Playlist.append_Song();
            break;
        case 2:
            my_Playlist.insert_At_Beginning();
            break;
        case 3:
            my_Playlist.display_Playlist();
            break;
        case 4:
            my_Playlist.delete_Song();
            break;
        case 5:
            my_Playlist.insert_After();
            br - eak;
        case 6:
            my_Playlist.updatesong();
            break;
        case 7:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    };
    return 0;
}