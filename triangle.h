struct Vector2D
{
    Vector2D();
    Vector2D(float x, float y);
    float x;
    float y; 
};
   
class Triangle2D
{
  public:
    Triangle2D(Vector2D node1, Vector2D node2, Vector2D node3);
    float getArea();
  private:
    Vector2D nodes[2];
};