#include <iostream>
#include <list>
using namespace std;

class Book
{
    string name;
    string author;
    int pages;
public:
    Book(string n, string a, int p)
    {
        name = n;
        author = a;
        pages = p;
    }
    
    void Show()
    {
        cout << "Name of book: " << name << endl;
        cout << "Author is: " << author << endl;
        cout << "Pages are: " << pages << endl;
    }
    
    string GetName()
    {
        return name;
    }
    
};

int main()
{
    list<Book> books;
    books.push_back(Book("Harry Potter", "Joahn Rowling", 300));
    books.push_back(Book("Abra cadabra", "Joahn Rowling", 310));
    books.push_back(Book("Pirates", "Joahn Rowling", 400));
    
    cout << "All books are: " << endl;
    
    for (auto ptr = books.begin(); ptr != books.end(); ptr++)
    {
        ptr->Show();
    }
    
    string name;
    cout << "Enter name of book: ";
    cin >> name;
    
    for (auto ptr = books.begin(); ptr != books.end(); ptr++)
    {
        if (ptr->GetName() == name)
        {
            ptr = books.erase(ptr);
        }
        
    }
    
    cout << "Book was deleted" << endl;
    
    cout << "Books are: " << endl;
    
    for (auto ptr = books.begin(); ptr != books.end(); ptr++)
    {
        ptr->Show();
    }
    
    
}
