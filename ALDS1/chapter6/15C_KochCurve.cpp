#include<iostream>
#include<cmath>
using namespace std;
struct Point{ double x,y; };
int Koch(int d, Point p1, Point p2){
    if(d == 0) return 0;
    Point s,t,u;
    // 内分点の位置ベクトル
    s.x = (2*p1.x + 1*p2.x)/3;
    t.x = (1*p1.x + 2*p2.x)/3;
    s.y = (2*p1.y + 1*p2.y)/3;
    t.y = (1*p1.y + 2*p2.y)/3;
    // 度からラジアンへ変換
    double th = M_PI * 60.0/180.0;
    // 回転行列から計算
    u.x = s.x + (t.x - s.x)*cos(th) - (t.y - s.y)*sin(th);
    u.y = s.y + (t.x - s.x)*sin(th) - (t.y - s.y)*cos(th);

    Koch(d-1, p1, s);
    cout << s.x << " " << s.y << endl;
    Koch(d-1, s, u);
    cout << u.x << " " << u.y << endl;
    Koch(d-1, u, t);
    cout << t.x << " " << t.y << endl;
    Koch(d-1, t, p2);
}

int main(){
    Point a,b;
    int n; cin >> n;
    // 初期値
    a.x = 0; a.y = 0;
    b.x = 100; b.y = 0;
    cout << a.x << " " << a.y << endl;
    Koch(n,a,b);
    cout << b.x << " " << b.y << endl;
}