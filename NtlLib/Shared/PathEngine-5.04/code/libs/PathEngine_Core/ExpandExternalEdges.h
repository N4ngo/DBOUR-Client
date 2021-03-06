//**********************************************************************
//
// Copyright (c) 2002-2005
// PathEngine
// Lyon, France
//
// All Rights Reserved
//
//**********************************************************************

#include "libs/Mesh2D/interface/tMesh_Header.h"
#include "common/STL/vector.h"

class cCollisionShape;
class cCircuitElement;

bool
NextExternalExpansionForMesh(tEdge& e, tEdge& first, tEdge& last);

void
ExpandExternalEdges(
        tMesh& mesh, const cCollisionShape& shape,
        std::vector<cCircuitElement*>& appendTo
        );
