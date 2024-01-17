# nonmanifold-laplacians-cpp

The robust laplacian operators for general triangle meshes and point clouds, 
forked from Nicholas Sharp's original implementation and exposed as a C++ library.

For more details, see the [original repository](https://github.com/nmwsharp) 
or the paper: [A Laplacian for Nonmanifold Triangle Meshes](http://www.cs.cmu.edu/~kmcrane/Projects/NonmanifoldLaplace/NonmanifoldLaplace.pdf) by [Nicholas Sharp](http://nmwsharp.com) and [Keenan Crane](http://keenan.is/here) from SGP 2020.


### Direct dependencies

- [geometry-central](http://geometry-central.net) for mesh data structures and 3D geometry
- [Polyscope](http://polyscope.run/) for 3D visualizations and rendering

(all are permissively licensed, and packaged with the repo)


### Citations

Please cite the original paper if this code contributes to an academic publication:

```bib
@article{Sharp:2020:LNT,
  author={Nicholas Sharp and Keenan Crane},
  title={{A Laplacian for Nonmanifold Triangle Meshes}},
  journal={Computer Graphics Forum (SGP)},
  volume={39},
  number={5},
  year={2020}
}
```
