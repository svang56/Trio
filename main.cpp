#include <iostream>//Author: Sunny Vang


using namespace std;

void sortingInts(int &, int &, int &);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
sortingInts(red, green, blue);




  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void sortingInts(int &red, int &green, int &blue)
{
    int replacement;

    if(red <=  green)
    {
        replacement = red;

        red = green;

        green = replacement;
    }

    if( red <= blue)
    {
        replacement = red;
        red = blue;
        blue = replacement;
    }

    if(green <= blue)
    {
        replacement = green;
        green = blue;
        blue = replacement;
    }
}
