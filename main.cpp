#include <iostream>
#include <string>
//string header를 include하지 않아 추가했습니다.
// 202102021 컴퓨터공학부 안혜련 
// cpp에서는 주석을 다는 방식이 #이 아닌 //이라 수정했습니다.
using namespace std;

class Dessert{
private:
    int onega;
    int panmaga;
    string name;
    int v;
    bool panmaing;
public:
    string getname(){return name;}
    int getonega(){return onega;}
    int getpanmaga(){return panmaga;}
    int getv(){return v;}
    bool getpanmaing(){return panmaing;}

    void setname(int n){name=n;}
    void setonega(int one){onega=one;}
    void setpanmaga(int p){panmaga=p;}
    void setv(int ev){
        if(ev<0||ev>100)
            v=100;
        else
            v=ev;}
            void setpanmaing(bool ing){panmaing=ing;
    }

};

int main(){
    Dessert myd;
    myd.setname("mintchoco");
    myd.setpanmaga(3000);
    myd.setonega(1200);
    myd.setv(200);
    myd.setpanmaing("?ℓ以?);

    cout<<myd.getname()<<' ';
    cout<<myd.getpanmaga()<<' ';
    cout<<myd.getonega()<<' ';
    cout<<myd.getv()<<' ';
    cout<<myd.getpanmaing()<<' ';
    return 0;
}
 
