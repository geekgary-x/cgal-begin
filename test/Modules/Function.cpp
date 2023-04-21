#include <iostream>
#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
#include <CGAL/Surface_mesh.h>
#include <CGAL/Polygon_mesh_processing/merge_border_vertices.h>
typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef Kernel::Point_3 Point_3;
typedef CGAL::Surface_mesh<Point_3> surface_mesh;
namespace Module
{
	namespace Function
	{
		int main(int, char* [])
		{
			std::cout << "Module.Function test!" << std::endl;
			return 1;
		}
	}
}