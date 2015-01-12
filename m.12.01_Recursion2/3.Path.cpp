#include<iostream>

using namespace std;

//check if there is path in a maze by using flood fill
//you can visually see the algorithm at this address: http://floodfillmaze.atspace.eu/


//we define these variables as global, just for simplicity of the program
//defining them as global is bad practice.Better realization will be 
//if we pass the variables as parameters to the functions

//0 is for cell at which we can move, 1 is for wall
int mat[3][3] = {0,0,0,
				 1,1,0,
				 1,0,0};

//in this array we store if certain cell is visited
//it is initialized with 0, which means that no cell is visited
int visited[3][3] = {};

int startX = 0, startY = 0;
int targetX = 2, targetY = 1;

bool IsCellValid(int cellX, int cellY)
{
	//if the cell is outside the matrix it is not valid
	if( cellX < 0 || cellX > 2 || 
		cellY < 0 || cellY > 2 )
	{
		return false;
	}

	//if the cell is wall it is not valid
	if( mat[cellX][cellY] == 1 )
	{
		return false;
	}

	//if the cell is already visited it is not valid
	if( visited[cellX][cellY] == 1 )
	{
		return false;
	}

	//if we reach this line the cell is valid
	return true;
}

bool IsTherePath(int currentX,int currentY)
{
	cout <<"Visited: (" << currentX << "," << currentY << ")" << endl;

	if( currentX == targetX && currentY == targetY )
	{
		return true;
	}

	visited[currentX][currentY] = 1;

	bool right = false, down = false, left = false, up = false;

	//if the cell at right is valid we go right
	if( IsCellValid(currentX,currentY+1) )
	{
		right = IsTherePath(currentX,currentY+1);
	}

	//if the cell below is valid we go down
	if( IsCellValid(currentX+1,currentY) )
	{
		down = IsTherePath(currentX+1,currentY);
	}

	//if the cell at left is valid we go left
	if( IsCellValid(currentX,currentY-1) )
	{
		left = IsTherePath(currentX,currentY-1);
	}

	//if the cell up is valid we go up
	if( IsCellValid(currentX-1,currentY) )
	{
		up = IsTherePath(currentX-1,currentY);
	}

	return right || down || left || up;
}

int main()
{
	bool path = IsTherePath(startX,startY);

	if( path )
	{
		cout << "There is path" << endl;
	}
	else
	{
		cout << "There is no path" << endl;
	}
	system("pause");
}