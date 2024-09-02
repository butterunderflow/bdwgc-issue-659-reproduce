## Reproducing the steps where bdwgc stuck

Here's a reproduce steps

### Build bdwgc

```sh
cd bdwgc

CC=gcc CXX=g++ cmake -B build -Denable_disclaim=ON -Denable_atomic_uncollectable=ON -Denable_java_finalization=ON -Denable_mmap=ON -Denable_munmap=ON -Denable_threads=ON -Denable_parall
el_mark=ON -Denable_thread_local_alloc=ON  -DCMAKE_USE_WIN32_THREADS_INIT=true -G "MinGW Makefiles"

cmake --build build

```


### Build and run cpp files
```sh
# At the root of this repository
make libtest.dll
make main.exe
ln -s bdwgc/build/libgc.dll libgc.dll
./main.exe
# stuck!
```
