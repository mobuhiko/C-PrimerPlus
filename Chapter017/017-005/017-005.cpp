#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fin1;
    ifstream fin2;
    ofstream fout1;

    fin1.open(argv[1]);
    fin2.open(argv[2]);
    fout1.open(argv[3]);

    if (!fin1.is_open())
    {
        cerr << "mat.dat fails to open\n";
        exit(EXIT_FAILURE);
    }

    if (!fin2.is_open())
    {
        cerr << "pat.dat fails to open\n";
        exit(EXIT_FAILURE);
    }

    if (!fout1.is_open())
    {
        cerr << "matnpat.dat fails to open\n";
        exit(EXIT_FAILURE);
    }

    cout << "open successfully\n\n";

    vector<string> mat_list;
    vector<string> pat_list;
    string temp;

    // Mat
    cout << "Mat: \n";
    while (getline(fin1, temp))
    {
        if (fin1.eof())
        {
            cout << "EOF meets\n";
            break;
        }
        mat_list.push_back(temp);
    }
    cout << "fin1 finishes\n\n";

    sort(mat_list.begin(), mat_list.end());

    cout << "Mat's friends: \n";
    for (auto i = mat_list.begin(); i != mat_list.end(); ++i)
        cout << *i << endl;
    cout << "MAT: " << mat_list.size() << "friends\n\n";
    
    // Pat
    cout << "Pat: \n";
    while (getline(fin2, temp))
    {
        if (fin2.eof())
        {
            cout << "EOF meets\n";
            break;
        }
        pat_list.push_back(temp);
    }
    cout << "fin2 finishes\n\n";

    sort(pat_list.begin(), pat_list.end());

    cout << "Pat's friends: \n";
    for (auto i = pat_list.begin(); i != pat_list.end(); ++i)
        cout << *i << endl;
    cout << "PAT: " << pat_list.size() << "friends\n\n";

    vector<string> total_list;
    total_list.insert(total_list.end(), mat_list.begin(), mat_list.end());
    total_list.insert(total_list.end(), pat_list.begin(), pat_list.end());

    sort(total_list.begin(), total_list.end());
    // unique retrurns the end iterator of unique part
    total_list.erase(unique(total_list.begin(), total_list.end()), total_list.end());
    cout << "List: \n";
    for (auto i = total_list.begin(); i != total_list.end(); ++i)
        cout << *i << endl;
    cout << "TOTAL: " << total_list.size() << "friends\n\n";

    cout << "total list starts\n";
    for (auto i = total_list.begin(); i != total_list.end(); ++i)
        fout1 << *i << endl;
    cout << "total list ends\n";
    cout << "check your matnpat.dat\n";

    return 0;
}
