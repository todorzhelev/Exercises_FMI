#include<iostream>

using namespace std;

//This class will support manipulations with matrices with any dimensions
//To achieve this, in this example we use pointers.
class Matrix
{
public:
	Matrix()
	{
	}

	Matrix(int rows, int cols) 
		:m_rows(rows), m_cols(cols)
	{
		//we create array of m_rows amount of pointers
		m_pMatrix = new int*[m_rows];
		
		//with each pointer in the upper array
		//we create array of m_cols amount of integers
		for (int i = 0; i < m_rows; i++)
		{
			m_pMatrix[i] = new int[m_cols];
		}

		//we initialize the elements of the array
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_pMatrix[i][j] = 0;
			}
		}
	}

	~Matrix()
	{
		//for each row, we delete the corresponding array of m_cols amount of integers
		for (int i = 0; i < m_rows; i++)
		{
			delete[]m_pMatrix[i];
		}

		//we delete the array of m_rows pointers
		delete[]m_pMatrix;
	}

	//we need to implement the copy constructor
	//since in the functions we return objects by copy
	Matrix(const Matrix& mat)
	{
		m_rows = mat.m_rows;
		m_cols = mat.m_cols;

		m_pMatrix = new int*[m_rows];
		for (int i = 0; i < m_rows; i++)
		{
			m_pMatrix[i] = new int[m_cols];
		}

		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				m_pMatrix[i][j] = mat.m_pMatrix[i][j];
			}
		}
	}
	Matrix operator+(const Matrix& mat2)
	{
		Matrix temp(m_rows,m_cols);
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_cols; j++)
			{
				temp.m_pMatrix[i][j] = m_pMatrix[i][j] + mat2.m_pMatrix[i][j];
			}
		}
		
		//note that at this point temp is return by copy
		//and the copy constructor is called
		return temp;
	}

	//writting friend before the prototype of non-member function indicates
	//that this function(which is not part of the class)
	//can access the private members of the class
	friend ostream& operator<<(ostream& stream, const Matrix& mat);
	friend istream& operator>>(istream& stream, const Matrix& mat);

private:
	int** m_pMatrix;
	int m_rows, m_cols;
};

//overloading output operator
ostream& operator<<(ostream& stream, const Matrix& mat)
{
	for (int i = 0; i < mat.m_rows; i++)
	{
		for (int j = 0; j < mat.m_cols; j++)
		{
			stream << mat.m_pMatrix[i][j] << " ";
		}
		stream << endl;
	}

	return stream;
}

//overloading input operator
istream& operator>>(istream& stream, const Matrix& mat)
{
	cout << "Enter values for matrix" << mat.m_rows << "x" << mat.m_cols << endl;
	for (int i = 0; i < mat.m_rows; i++)
	{
		for (int j = 0; j < mat.m_cols; j++)
		{
			stream >> mat.m_pMatrix[i][j];
		}
	}

	return stream;
}

int main()
{
	Matrix m1(2, 2);
	Matrix m2(2, 2);

	cin >> m1 >> m2;

	cout << m1 << endl;
	cout << m2 << endl;

	cout << m1 + m2 << endl;

	system("pause");
}