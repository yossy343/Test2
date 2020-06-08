#include <iostream>
#include <vector>
#include <stdio.h>
#include<algorithm>
 
using namespace std;
struct PointInformation
{
	int R;
	int G;
	int B;
	double Similarity;
};


bool func( PointInformation& a, PointInformation& b)
{
  return a.Similarity > b.Similarity;
}
int main()
{
    vector<PointInformation> Data;
    Data.clear();
    
   	PointInformation D1,D2,D3,D4,D5;
   	D1.R= 100; D1.G = 100; D1.B =  90; D1.Similarity  =0.75;  Data.push_back(D1);
	D2.R= 101; D2.G = 120; D2.B = 110; D2.Similarity  =0.55;  Data.push_back(D2);
	D3.R= 107; D3.G = 110; D3.B = 105; D3.Similarity  =0.95;  Data.push_back(D3);
	D4.R= 120; D4.G = 101; D4.B = 200; D4.Similarity  =0.65;  Data.push_back(D4);
	D5.R= 99;  D5.G = 150; D5.B = 160; D5.Similarity  =0.45;  Data.push_back(D5);  	 
        
    printf("Before Sort\n");    
    for(int i = 0; i < Data.size();i++)
	{
		printf("Index = %d\tRGB = %d %d %d Similarity = %.3f\n",i,Data[i].R,Data[i].G,Data[i].B,Data[i].Similarity);
	}      
    sort(Data.begin(),Data.end(),func);
    printf("After Sort\n");   
	for(int i = 0; i < Data.size();i++)
	{
		printf("Index = %d\tRGB = %d %d %d Similarity = %.3f\n",i,Data[i].R,Data[i].G,Data[i].B,Data[i].Similarity);
	}    
	return 0;
}