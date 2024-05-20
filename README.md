# NHK2024_R2CANIDList
R2 (Robot2) 用の基幹CANバスのCANIDをリストアップするところ
ヘッダファイルをインクルードしていい感じに使ってね

## 注意
こっちを変更したら、ラズパイ側のCANIDリストも変更してね

https://github.com/T-semi-Tohoku-Uni/NHK2024_R2_Raspi/blob/main/src/can_list.py

## 入出力一覧
### ID: CANID_START(0x80)
発信元: [NHK2024_mbd_R2UserButtons](https://github.com/T-semi-Tohoku-Uni/NHK2024_mbd_R2UserButtons)

Data[0] == 0: 停止命令

Data[0] == 1: プログラム開始命令

Data[0] == 2: エリア1からのリトライ

Data[0] == 3: エリア2からのリトライ
### ID: CANID_ROBOT_VEL(0x106)
ラズパイが発信，足回り制御器が受信

以下のゲインは適当(3/5時点)

Vx = (Data[0] - 127) * 16

Vy = (Data[1] - 127) * 16

w  = (Data[2] - 127) * 0.02

#### 備考
ロボットの目標速度を入力として持つ(Vx, Vyの単位はmm/s, 角速度wはRad/s)

現状，目標速度はロボット座標系
