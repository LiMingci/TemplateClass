#include <OpenMesh/Core/IO/MeshIO.hh>  
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>
#include <OpenMesh/Core/Mesh/Attributes.hh>

#include "TemplateClass.h"

struct MeshTraits : public OpenMesh::DefaultTraits
{
	//明确点数据类型
	typedef OpenMesh::VectorT<double, 3> Point;

	VertexAttributes(
		OpenMesh::Attributes::Status
	);

	HalfedgeAttributes(
		OpenMesh::Attributes::Status
	);

	EdgeAttributes(
		OpenMesh::Attributes::Status
	);

	FaceAttributes(
		OpenMesh::Attributes::Status
	);

};

//typedef OpenMesh::TriMesh_ArrayKernelT<MeshTraits> OMTriMesh;   //重新定义三角网

class TriMesh
{
	typedef OpenMesh::TriMesh_ArrayKernelT<MeshTraits> OMTriMesh;   //重新定义三角网

};

void PrintTriMeshInfo(TriMesh* mesh)
{

}
