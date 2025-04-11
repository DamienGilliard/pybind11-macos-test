<!-- badge-placeholder -->


# pybind11-macos-test

This repo is a small test for python binding on macos.

## Usage:

1) Activate the conda virtual environment: 

```bash
conda env create -f ./environment.yml
conda activate pybind11-env
```

2) build the c++ and link the binding

```bash
mkdir build && ce build
cmake ..
make
```

3) Run the python script:
```bash
cd .. # in case you are still in the build folder
python test.py
```
