#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review {
    std::string title;
    int rating;
};

bool operator<(const Review &r1, const Review &r2);

bool worseThan(const Review &r1, const Review &r2);

bool FillReview(Review &rr);

void ShowReview(const Review &rr);

int main() {
    using std::cout;
    using std::vector;
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if (num > 0) {
        cout << "감사합니다. 당신은 다음과 같이 입력하셨습니다.\n" << "등급\t제목\n";
        std::for_each(books.begin(), books.end(), ShowReview);

        std::sort(books.begin(), books.end());
        cout << "책 제목을 기준으로 정렬:\n등급\t제목\n";
        std::for_each(books.begin(), books.end(), ShowReview);

        std::sort(books.begin(), books.end(), worseThan);
        cout << "책 등급을 기준으로 정렬:\n등급\t제목\n";
        std::for_each(books.begin(), books.end(), ShowReview);

        std::random_shuffle(books.begin(), books.end());
        cout << "무작위 순서로 다시 배치:\n등급\t제목\n";
        std::for_each(books.begin(), books.end(), ShowReview);
    } else
        cout << "입력한 것이 없어, 얻은 것이 없습니다.\n";
    return 0;
}

bool operator<(const Review &r1, const Review &r2) {
    if (r1.title < r2.title)
        return true;
    else if (r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool worseThan(const Review &r1, const Review &r2) {
    if (r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review &rr) {
    std::cout << "책 제목을 입력하십시오(끝내려면 quit를 입력): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "책 등급(0-10)을 입력하십시오: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;

    // 남은 입력 줄을 제거한다.
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review &rr) {
    std::cout << rr.rating << "\t" << rr.title << '\n';
}