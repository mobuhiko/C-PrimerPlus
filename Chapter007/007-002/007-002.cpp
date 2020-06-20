#include <iostream>

using namespace std;

void input(int score[], int& arsize); // use reference "&" as input so that arsize in main() can be modified. 
void display(const int score[], const int arsize);
double average(const int score[], const int arsize);

int main()
{
    int golf_score[10] = {0,0,0,0,0,0,0,0,0,0};
    int ARSIZE = 10;
    input(golf_score, ARSIZE);
    display(golf_score, ARSIZE);
    return 0;
}

void input(int score[], int& arsize)
{
    for(int i = 0; i < arsize; i++)
    {
        int temp;
        cout << "enter the golf score (enter a minus number to terminate)\n";
        cout << "#" << i + 1 << ": ";
        cin >> temp;
        if(temp < 0)
        {
            arsize = i + 1;
            break;
        }
        else
        {
            score[i] = temp;
        }
    }
        return;
}

void display(const int score[], const int arsize)
{
    for(int i = 0; i < arsize; i++)
    {
        cout << "#" << i + 1 << ": " << score[i] << " ";
    }

    cout << "AVERAGE: " << average(score, arsize) << endl;

    return;
}

double average(const int score[], const int arsize)
{
    int total_score = 0;
    for(int i = 0; i < arsize; i++)
    {
        total_score += score[i];
    }
    double average_score = 0;
    average_score = total_score/arsize;

    return average_score;
}
