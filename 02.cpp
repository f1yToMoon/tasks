#include <iostream>
#include <vector>
#include <string>
#include <random>

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution_pages(1, 10);

using namespace std;

class Book {
public:
    string e_type;
    int e_pages;
    Book(string type = "nonfic", int pages = 666) {
        e_type = type;
        e_pages = pages;
    }
    void ripOup() {
        e_pages -= distribution_pages(generator);
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
    vector<Book*> books;
    for(int i = 0; i < 10; i++) {
        books.push_back(new Book());
    }
    return 0;
}
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     



