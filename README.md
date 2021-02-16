# Cuda Test

## Project structure

As long as the dependencies are EIGEN and BOOST, is recommended to have the following project structure:

```md
-> eigen/
-> base/
    -> build/ (Create this folder if not exist)
    -> cmake/
    -> src/
    -> ...
```

```powershell
mkdir cuda_test_nolibigl/ && cd cuda_test_nolibigl/
git clone --recursive https://gitlab.com/libeigen/eigen.git
git clone https://github.com/mobereng/cuda_test_nolibigl.git base
```

## Compile

Compile this project using the standard cmake routine:

```powershell
.\compile.ps1
```
