#pragma once

#include <geometrycentral/numerical/linear_algebra_utilities.h>

std::tuple<geometrycentral::SparseMatrix<double>, geometrycentral::SparseMatrix<double>> buildMeshLaplacian(
    const geometrycentral::DenseMatrix<double>& vMat,
    const geometrycentral::DenseMatrix<size_t>& fMat,
    double mollifyFactor
);

std::tuple<geometrycentral::SparseMatrix<double>, geometrycentral::SparseMatrix<double>> buildPointCloudLaplacian(
    const geometrycentral::DenseMatrix<double>& vMat,
    double mollifyFactor, size_t nNeigh
);
