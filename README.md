# Open-Up-The-Sky
Open Source FVM CFD Solver for GPU

This is more of a personal project from the ground up with no prior experience, than official group. Plan is:
1. Read OpenFOAM system files and understand how the program assemble the Ax=B matrix
2. GPU parellization solver using either CUDA or OpenCL:
Implement a solver either by using cuBLAS or own matrix solver
3. Export result in VTK file format for Paraview
* Figure out the VTK format and how OpenFOAM makes the result files
