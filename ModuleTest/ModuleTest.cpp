// ModuleTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

import ShapesMod.Shapes;

std::vector<Shape*> build_shapes()
{
    std::vector<Shape*> v;

    v.push_back(new Circle{ Point{0,0}, 100 });
    v.push_back(new Rectangle{ Point{10,20}, Point{15,17} });
    v.push_back(new Circle{ Point{5,5}, 10 });

    return v;
}

void clean_vector(std::vector<Shape*>& v)
{
    for (size_t i(0); i < v.size(); i++)
        delete v[i];

    v.clear();
}

int main()
{
    std::cout << "Hello World!\n";
    
    auto shape_list{ build_shapes() };
    for (auto shape : shape_list)
    {
        std::cout << *shape << "\n";
    }

    clean_vector(shape_list);
}
