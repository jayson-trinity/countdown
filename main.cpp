#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the starting number"<<endl;
    cin >> n;
    while (n>0)
    {
        cout <<n<<",";
        n--,--n;
    }

    return 0;
}
