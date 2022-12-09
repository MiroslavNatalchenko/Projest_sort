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
    int N,mas[100]={0};
    input_mas(mas,N);
    for (int i=0;i<N;i++)
       for (int j=0;j<N-1-i;j++)
          if (mas[j]>mas[j+1])
             swap(mas[j],mas[j+1]);
    output_mas(mas,N);
    return 0;
}
