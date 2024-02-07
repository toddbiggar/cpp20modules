export module ShapesMod.Shapes:Point;

import <iostream>;

export class Point
{
	public:
		Point();
		Point(const int& xVal, const int& yVal);
		virtual ~Point() {}

		int X() const { return x; }
		int Y() const { return y; }

		friend std::ostream& operator<<(std::ostream& output, const Point& p)
		{
			p.Write(output);
			return output;
		}

	protected:
		int x;
		int y;

		virtual void Write(std::ostream& output) const;
};