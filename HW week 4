#include<iostream>
#include<vector>

using namespace std;

bool checkChampions(int num)
{

   int q=num,r=0;
   while(q!=0)
   {
       r=q%10;
       q=q/10;
       if(r==0)
       {
           return false;
       }
       if(num%r!=0)
       {
           return false;
       }
   }
   return true;
}
vector<int> getChampions(int left, int right)
{
vector<int> list;
if(left<=right)
{
   for(int i=left;i<=right;i++)
   {
       if(checkChampions(i))
       {
           list.push_back(i);
           }
       }
   }
   return list;
}

int main()
{

vector<int> a = getChampions(1, 22);

for(int i=0; i < a.size(); i++)
cout << a.at(i) << ' ';
return 0;
}
