#include <OpenMesh/Core/IO/MeshIO.hh>  
#include <OpenMesh/Core/Mesh/TriMesh_ArrayKernelT.hh>
#include <OpenMesh/Core/Mesh/Attributes.hh>

#include "TemplateClass.h"

struct MeshTraits : public OpenMesh::DefaultTraits
{
	//��ȷ����������
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

//typedef OpenMesh::TriMesh_ArrayKernelT<MeshTraits> OMTriMesh;   //���¶���������

class TriMesh
{
	typedef OpenMesh::TriMesh_ArrayKernelT<MeshTraits> OMTriMesh;   //���¶���������

};

void PrintTriMeshInfo(TriMesh* mesh)
{

}
