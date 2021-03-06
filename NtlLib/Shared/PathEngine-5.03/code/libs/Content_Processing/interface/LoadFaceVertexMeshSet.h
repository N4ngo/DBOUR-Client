//**********************************************************************
//
// Copyright (c) 2005
// PathEngine
// Lyon, France
//
// All Rights Reserved
//
//**********************************************************************

#ifndef LOAD_FACE_VERTEX_MESH_SET_INCLUDED
#define LOAD_FACE_VERTEX_MESH_SET_INCLUDED

#include "libs/ParseXML/interface/iXMLHandler.h"
#include "common/STL/vector.h"

class iFaceVertexMesh;

class cFaceVertexMeshSetLoader : public iXMLHandler
{
    std::vector<const iFaceVertexMesh*> _result;

public:

    ~cFaceVertexMeshSetLoader();

    long size() const
    {
        return SizeL(_result);
    }
    const iFaceVertexMesh* operator[](long i) const
    {
        return _result[i];
    }

// iXMLHandler

    iXMLHandler* element(const char* el, const char *const* attr);
};

#endif
