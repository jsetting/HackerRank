#include <bits/stdc++.h>

using namespace std;

class Box {
public:
    Box() : l(0), b(0), h(0) {}
    Box(int length, int breadth, int height)
        : l(length), b(breadth), h(height) {}
    Box(const Box& other)
        : l(other.l), b(other.b), h(other.h) {}
    
    int getLength() {return l;}
    int getBreadth() {return b;}
    int getHeight() {return h;}
    
    long long CalculateVolume() {
        return (long long)l * (long long)b * (long long)h;
    }
    
    bool operator<(Box other){
        if(l < other.l)
            return true;
        if(l > other.l)
            return false;
        if(b < other.b)
            return true;
        if(b > other.b)
            return false;
        if(h < other.h)
            return true;
        return false;
    }
    
    friend ostream& operator<<(ostream& output, Box& box){
        return output << box.l << " " << box.b << " " << box.h;
    }
private:
    int l, b, h;
};

void check2(){
 int n;
 cin>>n;
 Box temp;
 for(int i=0;i<n;i++){
  int type;
  cin>>type;
  if(type ==1){
   cout<<temp<<endl;
  }
  if(type == 2){
   int l,b,h;
   cin>>l>>b>>h;
   Box NewBox(l,b,h);
   temp=NewBox;
   cout<<temp<<endl;
  }
  if(type==3){
   int l,b,h;
   cin>>l>>b>>h;
   Box NewBox(l,b,h);
   if(NewBox<temp){
    cout<<"Lesser\n";
   }
   else{
    cout<<"Greater\n";
   }
  }
  if(type==4){
   cout<<temp.CalculateVolume()<<endl;
  }
  if(type==5){
   Box NewBox(temp);
   cout<<NewBox<<endl;
  }
 }
}

int main(){
 check2();
}
