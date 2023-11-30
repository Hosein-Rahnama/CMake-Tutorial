Assuming that you have installed the `geom` library by

```bash
    sudo make install
```

from `03-Libraries/build` directory, you will find `/usr/local/lib/libgeom.a` and `/usr/local/include/geom` on your linux operating system. Now, you can use this library with any cpp file like `main.cpp` by

```bash
    g++ main.cpp /usr/local/lib/libgeom.a -o main
```