module ShapesMod.Shapes:Shape;

Shape::Shape(const Point& firstPoint)
	: first_point(firstPoint)
{
}

void Shape::Write(std::ostream& output) const
{
	output << Name() << "\n"
		   << "\tArea = " << Area() << "\n"
		   ;
}