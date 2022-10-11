#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
} 

int count_sum(int matrix[5][5]){
	int temp=0;
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			temp+=matrix[x][y];
		}
	}
	return temp;
}
void print_matrix(int matrix[5][5]){
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<<matrix[x][y]<<" ";
		}
		cout<<"\n";
	}
}