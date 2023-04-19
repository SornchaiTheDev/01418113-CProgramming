#include <iostream>
using namespace std;

class Book
{
private:
    string name;
    float price;

public:
    Book()
    {
        name = "";
        price = 0.0;
    }

    Book(string name, float price) : name(name), price(price) {}

    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }
};

class BookStore
{
private:
    Book *stocks[100];

public:
    BookStore()
    {
        for (int i = 0; i <= 99; i++)
        {
            stocks[i] = NULL;
        }
    }
    void addBook(string name, float price)
    {
        for (int i = 0; i <= 99; i++)
        {
            if (stocks[i] == NULL)
            {
                stocks[i] = new Book(name, price);
                break;
            }
        }
    }

    Book *find(string name)
    {
        for (int i = 0; i <= 99; i++)
        {
            if (stocks[i] == NULL)
            {
                break;
            }
            if (stocks[i]->getName() == name)
            {
                return stocks[i];
            }
        }
        return NULL;
    }

    float getAVGWhenTwentyDiscount()
    {
        float total = 0.0;
        int count = 0;
        for (int i = 0; i <= 99; i++)
        {
            if (stocks[i] != NULL)
            {
                total += stocks[i]->getPrice() - (stocks[i]->getPrice() * 0.2);
                count++;
            }
        }
        return total / count;
    }
};

int main()
{

    BookStore Amazon;
    Amazon.addBook("Harry Potter", 100.0);
    Amazon.addBook("Hobbits", 120.0);
    Amazon.addBook("Hobbits", 150.0);

    Book *found = Amazon.find("Harry Potter");

    if (found == NULL)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found : " << found->getName() << " Price : " << found->getPrice() << endl;
    }

    cout << Amazon.getAVGWhenTwentyDiscount();
    return 0;
}