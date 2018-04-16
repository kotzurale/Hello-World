#include <iostream>

using namespace std;






int main()
{
    int anzperson= 400;
    int person [anzperson];

    for(int i=0; i<anzperson; i++){

        person[i] = rand()%2;

        }

for (int i=0; i<anzperson;i++){
    cout<<person[i];

}
    cout<<endl<<"Ende"<<endl;
for (int i=0; i<anzperson; i++){


    if (person[i+1] != person [i]){
        person [i+1] = rand()%2;

    }

    else if (person[i-1]!= person[i]){
        person[i-1]= rand()%2;

    }

   }
for (int i=0; i<20;i++){
    cout<<person[anzperson];

}
cout<<"Ende"<<endl;
}
