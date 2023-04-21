#include <gtest/gtest.h>

#include "index.h"
#include <CGAL/Polygon_mesh_processing/IO/polygon_mesh_io.h>
#include <CGAL/Polygon_mesh_processing/polygon_mesh_to_polygon_soup.h>
TEST(Module, Function)
{

	EXPECT_TRUE(Module::Function::main(1, NULL));
}