module ShapesMod.Shapes:Point;

Point::Point()
	: x(0),
	  y(0)
{
}

Point::Point(const int& xVal, const int& yVal)
	: x(xVal),
	  y(yVal)
{
}

void Point::Write(std::ostream& output) const
{
	output << "(" << x << "," << y << ")";
}