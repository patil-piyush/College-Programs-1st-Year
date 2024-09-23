#include <iostream>
using namespace std;

class Node
{
public:
    int coeff, exp;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int coefff, int expp)
    {
        coeff = coefff;
        exp = expp;
        next = NULL;
    }
};

class Polynomial
{
public:
    Node *head;

    Polynomial()
    {
        head = NULL;
    }

    void insertNode(int coeff, int exp) {
        Node* newNode = new Node(coeff, exp);
        if (!head || head->exp < exp) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next && temp->next->exp > exp)
                temp = temp->next;
            if (temp->exp == exp) {
                temp->coeff += coeff;
            } else {
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
    }

    Polynomial Add(Polynomial &p)
    {
        Polynomial result;
        Node *h1 = head;
        Node *h2 = p.head;

        while (h1 && h2)
        {
            if (h1->exp == h2->exp)
            {
                result.insertNode(h1->coeff + h2->coeff, h1->exp);
                h1 = h1->next;
                h2 = h2->next;
            }
            else if (h1->exp > h2->exp)
            {
                result.insertNode(h1->coeff, h1->exp);
                h1 = h1->next;
            }
            else
            {
                result.insertNode(h2->coeff, h2->exp);
                h2 = h2->next;
            }
        }
        while (h1)
        {
            result.insertNode(h1->coeff, h1->exp);
            h1 = h1->next;
        }
        while (h2)
        {
            result.insertNode(h2->coeff, h2->exp);
            h2 = h2->next;
        }
        return result;
    }

    Polynomial Sub(Polynomial &p)
    {
        Polynomial result;
        Node *h1 = head;
        Node *h2 = p.head;

        while (h1 && h2)
        {
            if (h1->exp == h2->exp)
            {
                result.insertNode(h1->coeff - h2->coeff, h1->exp);
                h1 = h1->next;
                h2 = h2->next;
            }
            else if (h1->exp > h2->exp)
            {
                result.insertNode(h1->coeff, h1->exp);
                h1 = h1->next;
            }
            else
            {
                result.insertNode(h2->coeff, h2->exp);
                h2 = h2->next;
            }
        }
        while (h1)
        {
            result.insertNode(h1->coeff, h1->exp);
            h1 = h1->next;
        }
        while (h2)
        {
            result.insertNode(h2->coeff, h2->exp);
            h2 = h2->next;
        }
        return result;
    }

    Polynomial Mul(Polynomial &p)
    {
        Polynomial result;
        Node *h1 = head;
        Node *h2 = p.head;
        for (Node *temp1 = head; temp1 != NULL; temp1 = temp1->next)
        {
            for (Node *temp2 = p.head; temp2 != NULL; temp2 = temp2->next)
            {
                result.insertNode(temp1->coeff * temp2->coeff, temp1->exp + temp2->exp);
            }
        }
        return result;
    }

    // Function to display the polynomial
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->coeff << "x^" << temp->exp;
            if (temp->next != NULL)
                cout << " + ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function with menu-driven program
int main()
{
    Polynomial poly1, poly2, result;
    int choice, coeff, exp;

    do
    {
        cout << "\n*** Polynomial Operations Menu ***\n";
        cout << "1. Insert term in Polynomial 1\n";
        cout << "2. Insert term in Polynomial 2\n";
        cout << "3. Add Polynomials\n";
        cout << "4. Subtract Polynomials\n";
        cout << "5. Multiply Polynomials\n";
        cout << "6. Display Polynomial 1\n";
        cout << "7. Display Polynomial 2\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter coefficient and exponent for Polynomial 1: ";
            cin >> coeff >> exp;
            poly1.insertNode(coeff, exp);
            break;

        case 2:
            cout << "Enter coefficient and exponent for Polynomial 2: ";
            cin >> coeff >> exp;
            poly2.insertNode(coeff, exp);
            break;

        case 3:
            result = poly1.Add(poly2);
            cout << "Resultant Polynomial after Addition: ";
            result.display();
            break;

        case 4:
            result = poly1.Sub(poly2);
            cout << "Resultant Polynomial after Subtraction: ";
            result.display();
            break;

        case 5:
            result = poly1.Mul(poly2);
            cout << "Resultant Polynomial after Multiplication: ";
            result.display();
            break;

        case 6:
            cout << "Polynomial 1: ";
            poly1.display();
            break;

        case 7:
            cout << "Polynomial 2: ";
            poly2.display();
            break;

        case 8:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 8);

    return 0;
}
