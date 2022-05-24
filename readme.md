## INSTALLING C++ DISTRIBUTIONS OF OPENCV


In case it's your first time running opencv project, unlike libtorch you have to install opencv on your linux. otherwise you can start at `build and run executable`.


- First of all install dependencies:
```shell 
        sudo apt-get update
        sudo apt-get upgrade
        sudo apt-get install libgtk2.0-dev 
        sudo apt-get install pkg-config
```

- To compile OpenCV you will need a C++ compiler. also OpenCV uses CMake build configuration tool:
```shell
    sudo apt install -y g++
    sudo apt-get install cmake
    sudo apt-get install make
```

- Clone opencv's repository using git:
```shell
    git clone https://github.com/opencv/opencv.git
    git clone https://github.com/opencv/opencv_contrib.git
```

- Create build directory for opencv:
```shell
    mkdir -p build && cd build
```

- Configure - generate build scripts for the preferred build system:
```shell
    cmake -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib/modules ../opencv
```

- Build - run actual compilation process. 4 is number of used processor cores.
```shell
    make -j4
```

- Installation process copies files to predefined locations and do minor patching:
```shell
    sudo make install
```

- and that's it! now all you have to do is generate the executable file and run it.
Note that you may remove build folder because you don't need it anymore.
```shell
    rm -r ./*
```
## Build and run executable file
- This will build your executable file:
```shell
    cmake -S ..
    cmake --build . --config Release
```

- run executable file:
```shell
    ./<file name>
```
