//
// Created by Yoshi on 2023/11/12.
//

#ifndef R2CANIDLIST_H
#define R2CANIDLIST_H

#define CANID_EMERGENCY 0x000

#define CANID_BATTERY_ERROR 0x001
#define CANID_DJIIF_ERROR
#define CANID_LINESENSOR_ERROR
#define CANID_ODOMETRY_ERROR

#define CANID_VACUUMFAN 0x100
#define CANID_ARM 0x101
#define CANID_ROBOT_VEL 0x106

#define CANID_ROBOT_VEL_FB 0x205
#define CANID_WALL_DETECTION 0x204
#define CANID_LATERAL_SHIFT 0x206
#define CANID_ANGLE_DIFF 0x207
#define CANID_LINE_DETECT 0x208

#endif //SOFTWARE_R2CANIDLIST_H
