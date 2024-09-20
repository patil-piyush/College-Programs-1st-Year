#include <iostream>
using namespace std;

class Node
{
public:
    string Address;
    Node *next;

    Node() { next = NULL; }

    Node(string s)
    {
        Address = s;
        next = NULL;
    }

    // For displaying the current address
    void DisplayAddress()
    {
        cout << "Address: " << Address << endl;
    }
};

class BrowserHistoryStack
{
public:
    Node *Top;
    
    BrowserHistoryStack() { Top = NULL; }

    bool isEmpty()
    {
        return Top == nullptr;
    }

    // Push function to add a new page to the history stack
    void NewPage(string s)
    {
        Node *nn = new Node(s);
        if (isEmpty())
        {
            Top = nn;
        }
        else
        {
            nn->next = Top;
            Top = nn;
        }
    }

    // Pop function to navigate back
    void NavigateBack()
    {
        if (isEmpty())
        {
            cout << "No pages in history!" << endl;
        }
        else
        {
            Node *Temp = Top;
            Top = Top->next;
            delete Temp;
        }
    }

    // Peek function to show the current page
    void ShowCurrentPage()
    {
        if (isEmpty())
        {
            cout << "No pages in history!" << endl;
        }
        else
        {
            Top->DisplayAddress();
        }
    }
};

int main()
{
    BrowserHistoryStack browserHistory;
    int choice;
    string url;

    do
    {
        cout << "\nBrowser History Menu: " << endl;
        cout << "1. Visit new page" << endl;
        cout << "2. Go back" << endl;
        cout << "3. Show current page" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the URL of the new page: ";
            cin >> url;
            browserHistory.NewPage(url);
            cout << "Navigated to " << url << endl;
            break;

        case 2:
            browserHistory.NavigateBack();
            cout << "Navigated back to previous page." << endl;
            break;

        case 3:
            browserHistory.ShowCurrentPage();
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
