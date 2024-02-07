export module ShapesMod.Shapes:Rectangle;

import <iostream>;

import :Shape;

export class Rectangle : public Shape
{
	public:
		Rectangle(const Point& upperLeftPoint, const Point &lowerRightPoint);
		~Rectangle() {}

		Point UpperLeft() const { return first_point; }
		Point LowerRight() const { return lower_right_point; }

		double Area() const;

		std::string Name() const { return "Rectangle"; }

		friend std::ostream& operator<<(std::ostream& output, const Rectangle& r)
		{
			r.Write(output);
			return output;
		}
	
	protected:
		Point lower_right_point;

		void Write(std::ostream& output) const;

};