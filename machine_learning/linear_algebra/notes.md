#### Vectors

- A vector is a direction / arrow in a space
- It need not always start at origin, you can move origin
- In a 2d space, a vector is represented by 2 numbers (x, y) and it can reach any point in the space
- If 1 point is fixed, the other point is variable, the point you reach will be a line, If both points are variable, you can reach any point in the space
- In a 3d space, a vector is represented by 3 numbers (x, y, z), if 1 point is fixed and other 2 points are variable
    then the points you can reach is a 2d sheet
- i^ and j^ decides the vector space, i^ is the x axis and j^ is the y axis
- in general value of any vector is represented as (x, y) = xi^ + yj^ based on value of i^ and j^ the vector space is defined

#### Scalars

- Scalars are just numbers which multiply the vector
- Scalars can be positive or negative, which scales the vector in the direction of the vector
- It can squeeze a vector, it can change the direction of the vector

#### Linear transformation 

- A linear transformation is a function that takes a vector and returns a vector
- Think of it as a transformation which entirely shifts the space into different space
- It can rotate, squeeze, flip, etc the space
- In transformations origin stays the same, only the vector space changes. and lines are not curve, even the diagonals after transformation are straight lines
- But the actual thing happening is, you change the value of i^ and j^ and the vector space changes
- But to represent the change from 1,1 to some other value of i^ and j^, we need a matrix.

#### Matrix

- Matrix is just a 2d array of numbers which represents the transformation of the vector space
- if its a 2x2 matrix, then the first column represents where i^ lands after scaling to each point in the space
    and the second column represents where j^ lands after scaling to each point in the space [reference](https://www.youtube.com/watch?v=kYB8IZa5AuE&list=PLZHQObOWTQDPD3MizzM2xVFitgF8hE_ab&index=3)
- Order matters in matrix multiplication, since its a transformation, for example you rotate 90 degree and shearing the space is not same as shearing and rotating the space
- But association doesn't matter in matrix multiplication, A(BC) = (AB)C since order is not changed but only matrix multiplication is changed
- An inverse of a matrix is a matrix which when multiplied with the original matrix gives the identity matrix, meaning a point in the space is transformed using a matrix A, if
    you want to come back to original space, you multiply the point with the inverse of the matrix A
- If the determinant of a matrix is 0, then the matrix is not invertible, meaning the transformation is not reversible, you can't come back to original space
    simply because the transformation may have resulted in single line or 0 or a plane

- Rank is the number of dimensions in the output space, if the rank is 2, then the output space is 2d, if the rank is 3, then the output space is 3d
- Null space or kernal of a matrix is the set of all vectors which when multiplied with the matrix gives 0, for example when a 3d space is transformed to 2d space, 
    the null space is the 1d line which becomes 0 after transformation
- duality is transforming a 2d space to line is same as dot product a with a vector u^ (it is called as dual vector)

- Useful of matrix
    - It can represent a linear transformation, hence useful in robotics, computer graphics, etc
    - It can represent a system of linear equations and solve them

- dot product of 2 vectors is the projection of 1 vector on the other vector, it gives the length of the vector in the direction of the other vector
- it gives whether or not the 2 vectors are in the same direction or perpendicular
- dot product also means transformation of a 2d space to 1d space [reference](https://www.youtube.com/watch?v=LyGKycYT2v0&list=PLZHQObOWTQDPD3MizzM2xVFitgF8hE_ab&index=9)


#### Determinant

- Determinant is a area of a single unit square after transformation (squeeze or expansion), unit square is a square with 1 unit length (1,1)
- If the determinant is 2 then the area of the square after transformation is 2 times the original square
- If the determinant is negative, then it means the orientation of the space is flipped. the value still represents the area of the square
- All above defined are of 2d space, but the same applies to 3d space, but the determinant is volume of the unit cube