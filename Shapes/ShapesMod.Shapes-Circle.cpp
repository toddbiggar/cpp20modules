module ShapesMod.Shapes:Circle;

Circle::Circle(const Point& firstPoint, int radiusValue)
	:	Shape(firstPoint), 
	    radius(radiusValue) 
{
}

double Circle::Area() const
{
	return 3.14 * radius * radius;
}

void Circle::Write(std::ostream& output) const
{
	Shape::Write(output);
	output << "\tCenter: " << first_point << "\n"
		   << "\tRadius: " << radius << "\n";
}