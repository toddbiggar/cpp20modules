module ShapesMod.Shapes:Rectangle;

Rectangle::Rectangle(const Point& upperLeftPoint, const Point& lowerRightPoint)
	: Shape(upperLeftPoint),
	  lower_right_point(lowerRightPoint)
{

}

double Rectangle::Area() const
{
	int width{ lower_right_point.X() - UpperLeft().X() };
	int height{ UpperLeft().Y() - lower_right_point.Y() };
	return width * height;
}

void Rectangle::Write(std::ostream& output) const
{
	Shape::Write(output);
	output << "\tLower Right: " << lower_right_point << "\n"
		   << "\tUpper Left:  " << first_point << "\n";
}