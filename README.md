<!-- badge-placeholder -->
![small badge](https://img.shields.io/badge/pybind11%20test-passing-brightgreen)

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

3) create the pip package
```bash
python -m build
```

4) install the pip package in the environment:
```bash
pip install --force-reinstall dist/dummy_module-0.0.1-py3-none-any.whl # The --force-reinstall is if you have already installed before, but doesn't cause problems if it is the first install
```

5) test the importation of the module:
```bash
python test/test_import_pip_package.py 
```

If you get this terminal output, it worked fine:
```bash
"This is a public method with integer: 1"
```

## install in RhinoPython

If you want to install the module in Rhino's python environment, assuming you are still in the root folder: 

```bash
/Users/<your_user_name>/.rhinocode/py39-rh8/python3.9 -m pip install --force-reinstall ./dist/dummy_module-0.0.1-py3-none-any.whl
```