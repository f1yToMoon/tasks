#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution_pages(5, 15);

class Book {
public:
    string e_name;
    int e_pages;
    Book(string name = "nonfic", int pages = 666) {
        e_name = name;
        e_pages = pages;
    }
    void ripOup() {
        int p = distribution_pages(generator);
        e_pages = e_pages - p;
    };
};
struct Shelf : Book{
    int size = 21, level = 11;
};
struct Cupboard : Shelf{
    int e_value;
    Cupboard(int value = 666) : e_value(value){
        cout << "Created Cupboard" << endl;
    }
    vector<Book> books;
    void Add(Book Book) {
        books.push_back(Book);
    }
};
int main()
{
    int pages;
    string name;
    vector<Book*> books;
    for(int i = 0; i < 3; i++) {
        cin >> name >> pages;
        books.push_back(new Book(name, pages));
        books[i]->ripOup();
        if(books[i]->e_pages < 0) {
            books[i]->e_pages = 0;
        }
    }

    return 0;
}
