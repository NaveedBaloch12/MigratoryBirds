#include <iostream>

using namespace std;

// User Defined Functions....
int migratoryBirds(int Arr[], int LenArr)
{
    int tempfreq, freq = 0, type = Arr[0];
    for(int i = 0; i < LenArr; i++)
    {
        tempfreq = 0;
        for(int j = 0; j < LenArr; j++)
        {
            if(Arr[i] == Arr[j])
            {
                tempfreq++;
            }
        }
        if(tempfreq > freq)
        {
            freq = tempfreq;
            type = Arr[i];
        }
    }

    return type;
}


int main()
{
    int num;
    cin>> num;
    if(num < 5 || num > 200000)
        return 0;

    int arr[num];

    for(int i=0;i<num;i++)
    {
        cin>>arr[i];

        if(arr[i] < 1 || arr[i] > 5)
            return 0;
    }
    cout << migratoryBirds(arr, num);
    return 0;
}