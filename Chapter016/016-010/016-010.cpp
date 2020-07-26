#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review
{
    std::string title;
    int rating;
    double price;
};
using namespace std;
bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(Review & rr);
void ShowReview(const shared_ptr<Review> & rr);

bool betterthan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool expensivethan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool cheapthan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);

int main()
{

    vector<shared_ptr<Review>> books;
    Review temp;

    while (FillReview(temp))
    {
        shared_ptr<Review> new_temp(new Review(temp));
        books.push_back(new_temp);
    }


    if (books.size() > 0)
    {
        cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);

    sort(books.begin(), books.end());
    cout << "Sorted by title:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);

    sort(books.begin(), books.end(), worseThan);
    cout << "Sorted by rating:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);

    random_shuffle(books.begin(), books.end());
    cout << "After shuffling:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);

    sort(books.begin(), books.end(), betterthan);
    cout << "Sorted by title DE:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);

    sort(books.begin(), books.end(), expensivethan);
    cout << "Sorted by price :\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);

    sort(books.begin(), books.end(), cheapthan);
    cout << "Sorted by price DE:\nRating\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);
    }
    else cout << "No entries. ";
    cout << "Bye.\n";
    return 0;
}

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else return false;
}

bool worseThan(const shared_ptr<Review> & r1,  const shared_ptr<Review> & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool FillReview(Review & rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false; // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const shared_ptr<Review> & rr)
{
    std::cout << rr->rating << "\t" << rr->title << std::endl;
}

bool betterthan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->rating > r2->rating)
        return true;
    else
        return false;
}

bool expensivethan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->price > r2->price)
        return true;
    else
        return false;
}

bool cheapthan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}
