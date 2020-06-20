#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

double cal_vol(box box_a);

void display_box(box box_a);

int main()
{
    struct box box1 = {"box_1", 10, 20, 50, cal_vol(box1)};
    display_box(box1);
    return 0;
}

double cal_vol(box box_a)
{
    box_a.volume = box_a.height* box_a.length * box_a.width;
    return box_a.volume;
}

void display_box(box box_a)
{
    cout << "BOX: " << box_a.maker << endl;
    cout << "HEIGHT: " << box_a.height << endl;
    cout << "WIDTH: " << box_a.width << endl;
    cout << "LENGTH: " << box_a.length << endl;
    cout << "VOLUME: " << box_a.volume << endl;
}
