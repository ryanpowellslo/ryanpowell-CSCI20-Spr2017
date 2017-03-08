//Ryan Powell 3/7/17 Lab 2.5
//Program to organize general data about books entered in by the user.

#include <iostream> 
#include <string>
using namespace std;

class Book {
    
    public:
    
        void SetTitle (string bookTitle);
        void SetAuthor (string bookAuthor);
        void SetYear (int bookYear);
        void BookInfo() const;
    
    private:
    
        string title;
        string author;
        int year;
};

void Book::SetTitle(string bookTitle) {
    
    title = bookTitle;
    return;
}

void Book::SetAuthor(string bookAuthor) {
    
    author = bookAuthor;
    return;
}

void Book::SetYear(int bookYear) {
    
    year = bookYear;
    return;
}

void Book::BookInfo() const {
    
    cout << title << " was written by " << author << ", and copywrote in " << year << endl;
}


    int main() {
        
        Book book1;
        string bookTitle1 = "";
        string bookAuthor1 = "";
        int bookYear1 = 0;
        Book book2;
        string bookTitle2 = "";
        string bookAuthor2 = "";
        int bookYear2 = 0;
        Book book3;
        string bookTitle3 = "";
        string bookAuthor3 = "";
        int bookYear3 = 0;
        Book book4;
        string bookTitle4 = "";
        string bookAuthor4 = "";
        int bookYear4 = 0;
        Book book5;
        string bookTitle5 = "";
        string bookAuthor5 = "";
        int bookYear5 = 0;
       
        cout << "Enter in the title, author, and copywright year of your first book: " << endl; 
        getline(cin, bookTitle1);
        book1.SetTitle(bookTitle1);
        getline(cin, bookAuthor1);
        book1.SetAuthor(bookAuthor1);
        cin >> bookYear1;
        book1.SetYear(bookYear1);        
        cin.clear();
        cin.ignore();
        
         cout << "Enter in the title, author, and copywright year of your second book: " << endl; 
        getline(cin, bookTitle2);
        book2.SetTitle(bookTitle2);
        getline(cin, bookAuthor2);
        book2.SetAuthor(bookAuthor2);
        cin >> bookYear2;
        book2.SetYear(bookYear2);
        cin.clear();
        cin.ignore();
        
         cout << "Enter in the title, author, and copywright year of your third book: " << endl; 
        getline(cin, bookTitle3);
        book3.SetTitle(bookTitle3);
        getline(cin, bookAuthor3);
        book3.SetAuthor(bookAuthor3);
        cin >> bookYear3;
        book3.SetYear(bookYear3);
        cin.clear();
        cin.ignore();
        
         cout << "Enter in the title, author, and copywright year of your fourth book: " << endl; 
        getline(cin, bookTitle4);
        book4.SetTitle(bookTitle4);
        getline(cin, bookAuthor4);
        book4.SetAuthor(bookAuthor4);
        cin >> bookYear4;
        book4.SetYear(bookYear4);
        cin.clear();
        cin.ignore();
        
         cout << "Enter in the title, author, and copywright year of your fifth book: " << endl; 
        getline(cin, bookTitle5);
        book5.SetTitle(bookTitle5);
        getline(cin, bookAuthor5);
        book5.SetAuthor(bookAuthor5);
        cin >> bookYear5;
        book5.SetYear(bookYear5);
        cin.clear();
        cin.ignore();
        
        book1.BookInfo();
        book2.BookInfo();
        book3.BookInfo();
        book4.BookInfo();
        book5.BookInfo();
        
        
        return 0;
        
        
    }