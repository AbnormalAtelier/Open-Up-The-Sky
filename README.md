# Open-Up-The-Sky
Open Source FVM CFD Solver for GPU

This is more of a personal project from the ground up with no prior experience, than official group. Plan is:
1. Read Gmsh mesh. And UI UX to set boundary condition.
* Taking inspiration from Prepomax, setting up the boundary condition in text file is not optimal
2. GPU parellization solver using either CUDA or OpenCL:
* Focus on Single Phase first with incompressible and compressible flow, and RANS turbulence model
* Move on Multiphase, then Heat Transfer, then Combustion
3. Export result in VTK file format for Paraview
* Figure out the VTK format
