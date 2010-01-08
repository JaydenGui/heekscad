// ShapeTools.h
// Copyright (c) 2009, Dan Heeks
// This program is released under the BSD license. See the file COPYING for details.

#pragma once

class CFace;
class CEdge;

class CFaceList: public ObjList{
public:
	const wxChar* GetTypeString(void)const{return _("Faces");}
	HeeksObj *MakeACopy(void)const{ return new CFaceList(*this);}
	void GetIcon(int& texture_number, int& x, int& y){GET_ICON(4, 1);}
	bool DescendForUndo(){return false;}
	long GetMarkingMask()const{return 0;}// not pickable
};

class CEdgeList: public ObjList{
public:
	const wxChar* GetTypeString(void)const{return _("Edges");}
	HeeksObj *MakeACopy(void)const{ return new CEdgeList(*this);}
	void GetIcon(int& texture_number, int& x, int& y){GET_ICON(2, 1);}
	bool DescendForUndo(){return false;}
	long GetMarkingMask()const{return 0;}// not pickable
};

class CVertexList: public ObjList{
public:
	const wxChar* GetTypeString(void)const{return _("Vertices");}
	HeeksObj *MakeACopy(void)const{ return new CVertexList(*this);}
	void GetIcon(int& texture_number, int& x, int& y){GET_ICON(2, 2);}
	bool DescendForUndo(){return false;}
	long GetMarkingMask()const{return 0;}// not pickable
};

void CreateFacesAndEdges(TopoDS_Shape shape, CFaceList* faces, CEdgeList* edges, CVertexList* vertices);

