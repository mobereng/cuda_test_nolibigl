#pragma once

#include <Eigen/Sparse>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cmath>
#include <tuple>
#include <cstdio>
#include <cctype>
#include <vector>
#include <thread>
#include <ctime>
#include <chrono>
#include <functional>
#include <string>
#include <limits>

using std::cout;
using std::endl;
using std::swap;
using std::max;
using std::string;
using std::thread;
using std::vector;
using std::tuple;
using Eigen::MatrixXd;
using Eigen::MatrixXi;
using Eigen::VectorXd;
using Eigen::VectorXi;
using Eigen::Vector3d;
using Eigen::Vector4f;
using Eigen::SparseMatrix;
using Eigen::Triplet;
using Eigen::RowVector3d;
using Eigen::RowVector4f;
using Eigen::DiagonalMatrix;

typedef tuple<int, int> TuplePairInteger;
typedef tuple<double, double, double> TupleTripletDouble;
typedef vector<double> VectorDouble;
typedef vector<int> VectorInteger;
typedef vector<bool> VectorBoolean;
typedef vector<string> VectorString;
typedef vector<TuplePairInteger> VectorPairInteger;
typedef vector<VectorInteger> MatrixInteger;
typedef vector<VectorDouble> MatrixDouble;
typedef Triplet<double> TripletDouble;
typedef SparseMatrix<double> SparseMatrixXd;
typedef SparseMatrix<double, Eigen::RowMajor> SparseMatrixXdRowMajor;
typedef DiagonalMatrix<double, Eigen::Dynamic> DiagonalMatrixXd;
typedef vector<TripletDouble> VectorTriplet;
