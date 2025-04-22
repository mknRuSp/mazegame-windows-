#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//Windows 7がとても良いOSだと考える理由、
// １windows95、windowsXPに次windowsの基礎を作り上げた、
//洗練されたデザイン、UACの簡素化、Vistaで頻度が高すぎると言われていたUACが簡素化された、ブラウザーからダウンロードするときにしたにゲージが出てくる、
//２ 更に高機能、高性能のCPUなどが登場した事による思いプログラムの実行そして使いやすさや堅牢さなどにより今だ病院などの施設で利用されています
//３ 9x系を完全に断ち切りNT系を完全に取り入れた他にも現在でwindowsにおいて優位な機能などがwindows7予来な物が多いです

int stage = 1;
bool flag = false; 
bool havemoneybag = false;
int OMG = std::rand() % 11;
int serect(int Yourserect) {
    switch (stage) {
        case 1:
            switch (Yourserect) {
                case 1:
                     std::cout << "部屋から出た！" << endl;
                    stage = 2;
                    break;
                case 2:
                    if (havemoneybag == false) {
                         std::cout << "財布を手に取った！" << endl;
                        havemoneybag = true;
                    } else {
                         std::cout << "すでに財布を持っています" << endl;
                    }
                    break;
            }
            break;
        case 2:
            switch (Yourserect) {
                case 1:
                    if (havemoneybag == false) {
                         std::cout << "お金が無くなった！" << endl;
                    } else if (flag == false) {
                         std::cout << "売り切れだった！" << endl;
                         stage = 0;
                    } else {
                         std::cout << "コーラを買えた！" << endl;
                         if (OMG == 10) 
                         {std::cout << "自販機のルーレットが当たった！" << endl;}
                         std::cout <<"ゲームクリア！"<< endl;
                         stage = 3;
                    }
                    break;
                case 2:
                    if (flag == false) {
                         std::cout << "お祈りをした！何か良い事が起こりそうだ" << endl;
                        flag = true;
                    } else {
                         std::cout << "既に祈っている、これ以上祈る必要は無さそうだ" << endl;
                    }
                    break;
            }
            break;
        case 3:
         std::cout << "ゲームクリア" << endl;
            break;
        default:
            break;
    }

    return 0;
}

string stagemsg[5] = {"1 外に出る 2 財布を取る", "1 コーラを買う 2 神社に行く", "", "", ""};

int main() {
    string name;
     std::cout << "名前を入力してください: ";
    getline(cin, name);
     std::cout << "こんにちは、" << name << "さん！" << endl;
     std::cout << "あなたはコーラが飲みたい！" << endl;
     std::cout << "コーラを買おう" << endl;
    int player = 0;
    while (stage < 3)
    {
        if (stage == 0)
        {std::cout << "ゲームオーバー！" << endl;
        stage = 4;}
        std::cout << stagemsg[stage - 1] << endl;
    std::cin >> player;
    serect(player);
    }
    std::cout << "Enterで終了" << endl;
    getline(cin,name);
}