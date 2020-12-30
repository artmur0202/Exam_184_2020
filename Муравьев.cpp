#include <iostream>
using namespace std;
class Box {
private:
	int height;
	int length;
public:
	Box (int a, int b)
	{
		height = a; //высота
		length = b; //длина
	} 
	void display() {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < length; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	void setHeight(int height)
	{
	    if (int height>0)
	    {
	    this->height=height;
	    }
	}
	
};
int main() {
	Box first(3, 7);
	first.display();
	cout << endl;
	Box second(2,3);
	second.setHeight(-7);
	second.display();
	return 0;
	
}
