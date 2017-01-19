
#include<iostream>
#include<string>
using namespace std;
int getNumAccidents(string[]);
int findLowest(int[]);


int main()
{
   int fewestAccident, accident [5] ;
   string boroughs[5]={"Queens","Brooklyn","State Island","Bronx","Manhattan"};
   for(int i = 0; i < 5; i++)
   {
   cout<< "Enter the number of automobile accidents " << boroughs[i] << " ";
    accident[i] = getNumAccidents(boroughs);
   }
  fewestAccident = findLowest(accident);
  cout << "The accident numbers for each borough ";
  for(int i = 0; i < 5; i++)
  {
      cout << accident[i] << " ";
  }

  cout << " \n" << boroughs[fewestAccident] << " is the borough with the fewest accidents"
          " with reportedly "<< accident[fewestAccident] << " accident this year";


   return 0;
}
// the getNumAccidents takes a type of string array and returns the number of
// accidents in each borough
int getNumAccidents(string borough[])
{
    int accidents;
    cin >> accidents;
    // if the condition is meant it returns the number of accidents
    // if the condition is not meant is does a recursive call to the function
    if(accidents >= 0)
    {
        return accidents;
    }
    else
    {
        cout << "put in a positive value ";
        getNumAccidents(borough);
    }
    return 0;
}

// findLowest it compares all the values to the fist element of the array and
// returns the index with the lowest value
int findLowest(int arr[])
{
    int index = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < arr[index])
        {
            index = i;
        }
    }
    return index;
}




