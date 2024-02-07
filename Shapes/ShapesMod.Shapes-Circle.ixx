export module ShapesMod.Shapes:Circle;

import <iostream>;
import <string>;

import :Shape;

export class Circle : public Shape
{
	public:
		Circle(const Point& firstPoint, int radiusValue);
			
		~Circle() {}

		double Area() const;

		std::string Name() const { return "Circle"; }

		friend std::ostream& operator<<(std::ostream& output, const Circle& c)
		{
			c.Write(output);
			return output;
		}
	
	protected:
		int radius;

		void Write(std::ostream& output) const;

};