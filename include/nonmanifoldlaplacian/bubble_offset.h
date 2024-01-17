#pragma once

#include <geometrycentral/surface/manifold_surface_mesh.h>
#include <geometrycentral/surface/simple_polygon_mesh.h>
#include <geometrycentral/surface/surface_point.h>
#include <geometrycentral/surface/vertex_position_geometry.h>

class BubbleOffset {
public:
    explicit BubbleOffset(geometrycentral::surface::EmbeddedGeometryInterface& geom);

    // Parameters
    double relativeScale = 0.01;
    double dialate = 0.0;
    double normalOffset = 0.0;
    bool useEdgeScaling = true;

    // Methods
    geometrycentral::Vector3 queryPoint(const geometrycentral::surface::SurfacePoint& p);


    // Members
    geometrycentral::surface::EmbeddedGeometryInterface& geom;
    geometrycentral::surface::EdgeData<geometrycentral::Vector3> edgeNormals;
};

std::unique_ptr<geometrycentral::surface::SimplePolygonMesh> subdivideRounded(
    geometrycentral::surface::ManifoldSurfaceMesh& mesh,
    geometrycentral::surface::VertexPositionGeometry& geom,
    int subdivLevel, double scale, double dialate, double normalOffset
);
