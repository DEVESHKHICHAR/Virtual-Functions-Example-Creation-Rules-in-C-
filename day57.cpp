#include <iostream>
#include<string.h>
using namespace std;
class dk{
    protected:
      string text;
      int rating;
    public:
      dk(string s, int a){
        text=s;
        rating=a;
      }
      virtual void display()=0;
};
class dktext: public dk{
     protected:
        int word;
    public:
       dktext(string s,int a, int wr):dk(s,a){
          word=wr;
       }
       void display(){
           cout<<"the name of text tutorial is:"<<text<<endl;
           cout<<"the rating of tutorial is:"<<rating<<endl;
           cout<<"the total no. of word in tutorial is:"<<word<<endl;        
       }
};
class dkvideo: public dk{
    protected:
      float videolength;
    public:
      dkvideo(string s, int a, float b):dk( s, a){
        videolength=b;
      }
      void display(){
         cout<<"the name of the video is: "<<text<<endl;
         cout<<"the rating of the video is: "<<rating<<endl;
         cout<<"the videolength of the video is: "<<videolength<<endl;        
      }
};
int main() {
    int w=1000,r=4;
    string t="devesh";
    float v=99.05;
    dk* d[2];
    dktext x(t,r,w);
    d[0]=&x;
    d[0]->display();
    return 0;
}