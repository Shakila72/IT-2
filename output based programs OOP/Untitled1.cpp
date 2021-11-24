#include <iostream>


class Matrix
{
 private:
  int rows;
  int cols;
  int **Mat;


  public:
    Matrix (const int &rows,const int &cols);
    Matrix(const Matrix &other);
    ~Matrix ();
    int* & operator[](const int &index) const ;
    void operator=(const Matrix &other );
    Matrix  operator -()const;
    Matrix  operator -(const Matrix &other)const;
    Matrix  operator +(const Matrix &other)const ;
    Matrix  operator *(const Matrix &other)const;
    Matrix  operator *(const int &num)const;
    int getMatrixRows(const Matrix &other){return other.rows;}
    int getMatrixCols(const Matrix &other){return other.cols;}

    friend  Matrix operator *(const int & num,const Matrix &m)
    {
     return (m*num);
    }


    friend Matrix operator +(const int &num,const Matrix &t)
    {
     return (num+t);
    }




    friend std::ostream &operator<<(std::ostream &os, const Matrix &m) {
    for (int i=0; i < m.rows; ++i) {
        for (int j=0; j < m.cols; ++j) {
            os << m.Mat[i][j] << "  " ;
        }
        os << '\n';
    }
    return os;
}


};
