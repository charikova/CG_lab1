#pragma once


#include "triangle_rasterization.h"


class ZCulling: public TriangleRasterization
{
public:
	ZCulling(unsigned short width, unsigned short height, std::string obj_file);
	virtual ~ZCulling();

	void DrawScene();
	void Clear();

protected:
	void DrawTriangle(float4 triangle[3]);
	void SetDepth(unsigned short x, unsigned short y, float depth);
    bool DepthTest(unsigned short x, unsigned short y, double z);
    double GetZ(float4 triangle[3], unsigned short x, unsigned short y);
	std::vector<float> depth_buffer;
};
