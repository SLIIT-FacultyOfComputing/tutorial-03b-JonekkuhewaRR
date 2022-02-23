#include <iostream>
using namespace std;

int volume(int height, int width, int length);
struct Box
{
	int height;
	int width;
	int length;
};
int main() {
    
    struct Box Box1;
    struct Box Box2;
	  int totalVolume;
    
    cout << "Enter Box 1 Height : ";
    cin >> Box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> Box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> Box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> Box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> Box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> Box2.length;
    
    totalVolume = volume(Box1.height,Box1.length,Box1.width )
             + volume(Box2.height ,Box2.length ,Box2.width);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int height, int width, int length)
{
	return height*width*length;
}

