#include "triangle.h"
#include <iostream>

Vector2D::Vector2D()
{
    this->x = 0;
    this->y = 0;
}

Vector2D::Vector2D(float x, float y)
{
    this->x = x;
    this->y = y;
}

Triangle2D::Triangle2D(Vector2D node1, Vector2D node2, Vector2D node3)
{
    std::cout << "new node created";
    this->nodes[0] = node1;
    this->nodes[1] = node2;
    this->nodes[2] = node3;
}

// (Ax(By- Cy) + Bx (Cy - Ay) + Cx (Ay - By))/2
// Bidmas 
float Triangle2D::getArea()
{
    return abs((nodes[0].x * (nodes[1].y - nodes[2].y)+ nodes[1].x * (nodes[2].y - nodes[0].y) + nodes[2].x * (nodes[0].y - nodes[1].y)) / 2);
}