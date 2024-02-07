export module ShapesMod.Shapes:Shape;

import <iostream>;
import <string>;
import :Point;

export class Shape
{
	public:
		Shape(const Point& firstPoint);
		virtual ~Shape() {}

		Point FirstPoint() const { return first_point; }

		virtual double Area() const = 0;

		virtual std::string Name() const { return "Shape"; }

		friend std::ostream& operator<<(std::ostream& output, const Shape& s)
		{
			s.Write(output);
			return output;
		}
	
	protected:
		Point first_point;

		virtual void Write(std::ostream& output) const;

};