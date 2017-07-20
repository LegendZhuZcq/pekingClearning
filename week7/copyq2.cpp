#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sumn = 0, sumd = 1;//储存结果，sumn/sumd
  while (n--) {
    int num, deno;
    char slash;//专门用来吃掉/的
    cin >> num >> slash >> deno;
    //先相加 a/b + c/d = (a*d+c*b)/(b*d)
    sumn = sumn*deno + num*sumd;

    //先和第一个分母约分
    int a = sumd, b = sumn, c;
    while (a != 0) {
      c = a; a = b%a; b = c;
    }
    int gcd = b;
    //分子分母同时除以gcd就可以完成约分
    sumd /= gcd;
    sumn /= gcd;
    //约分完以后再和新加的分母约分, 分子为约分后分子，分母重新约分
    sumd = sumd*deno;
    int d = sumd, e = sumn, f;
    while (d != 0) {
      f = d; d = e%d; e = f;
    }
    gcd = e;
    //分子分母同时除以gcd就可以完成约分
    sumd /= gcd;
    sumn /= gcd;
  }
  if (sumd > 1)
    cout << sumn << '/' << sumd << endl;
  else
    cout << sumn << endl;
  return 0;
}
