#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle{
    public:
        int width;
        int height;
    
    void display(){
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea: public Rectangle{
    
    public: 
    
    void read_input(){
        int w, h;
        cin>>w>>h;
        width = w;
        height = h;
    }
    
    void display(){
        cout<<width*height<<endl;
    }
};
 


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
