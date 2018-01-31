# FillSample

> This tool based on OpenCV and CMake. Please install OpenCV and CMake first.
>
> This tool helps me fill the area of positive samples in the picture. Therefore I could regard these picture as negative sample in training.



* Build this project first

```Shell
mkdir build
cmake ..
make
```

* Run fillpos and input a path as argument

```Shell
cd bin
./fillpos [the file path]
```

An example of description file:

Directory structure:

```
/img
  img1.jpg
  img2.jpg
data.txt
```

File data.txt:

```
img/img1.jpg  1  296 171 52 52
img/img2.jpg  2  100 200 50 50   50 30 25 25
```

Image img1.jpg contains single object instance with the following coordinates of bounding rectangle: (140, 100, 45, 45). Image img2.jpg contains two object instances.

* Output

![](https://user-images.githubusercontent.com/19671032/35624197-3c29aa40-06c9-11e8-80c3-27cb5b98c632.jpg)

Images will fill like this.