#include <iostream>

using namespace std;

void input_mas(int mas[],int&N)
{
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> mas[i];
}

void output_mas(int mas[],int N)
{
    for (int i=0;i<N;i++)
        cout << mas[i] << ' ';
    cout << '\n';
}

int main()
{
    int N,mas[100]={0},i=0;
    input_mas(mas,N);
    do
    {
        if (mas[i]>mas[i+1])
        {
            swap(mas[i],mas[i+1]);
            i=0;
            continue;
        }
        i++;
    }
    while (i<N-1);
    output_mas(mas,N);
    return 0;
}
