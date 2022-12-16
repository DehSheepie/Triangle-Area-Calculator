#include "triangle.cpp"
#include <string>

Vector2D* getTriangle2DVectors()
{
    Vector2D* nodes = new Vector2D[3];
    for (int i = 0; i < 3; i++)
    {
        std::cout << "New Vector! \n";
        std::string input;
        float x,y;
        std::cout << "Please enter the x coordinate for your vector: ";
        std::cin >> input;
        x = std::stof(input);
        std::cout << "Please enter the y coordinate for your vector: ";
        std::cin >> input;
        y= std::stof(input);


        Vector2D newNode(x,y);
        nodes[i] = newNode;
    }
    return nodes;
}

int main()
{
    Vector2D *nodes;
    nodes = getTriangle2DVectors(); 

    Triangle2D newTriangle(nodes[0], nodes[1], nodes[2]);
    std::cout << "The area of the entered triangle is as follows: " << newTriangle.getArea();

    return 0;
}