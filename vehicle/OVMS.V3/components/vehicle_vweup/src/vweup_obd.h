/*
;    Project:       Open Vehicle Monitor System
;
;    Changes:
;    1.0  Initial release
;
;    (C) 2011       Michael Stegen / Stegen Electronics
;    (C) 2011-2018  Mark Webb-Johnson
;    (C) 2011       Sonny Chen @ EPRO/DX
;    (C) 2020       Chris van der Meijden
;    (C) 2020       Soko
;    (C) 2020       sharkcow <sharkcow@gmx.de>
;
; Permission is hereby granted, free of charge, to any person obtaining a copy
; of this software and associated documentation files (the "Software"), to deal
; in the Software without restriction, including without limitation the rights
; to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
; copies of the Software, and to permit persons to whom the Software is
; furnished to do so, subject to the following conditions:
;
; The above copyright notice and this permission notice shall be included in
; all copies or substantial portions of the Software.
;
; THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
; IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
; FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
; AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
; LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
; OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
; THE SOFTWARE.
*/

#ifndef __VEHICLE_EUP_OBD_H__
#define __VEHICLE_EUP_OBD_H__

#include "vehicle.h"
#include "ovms_webserver.h"
#include "poll_reply_helper.h"

using namespace std;

//
// ECU TX/RX IDs
//
#define VWUP_MOT_ELEC_TX                0x7E0   // ECU 01 motor elecronics
#define VWUP_MOT_ELEC_RX                0x7E8
#define VWUP_BRK_TX                     0x713   // ECU 03 brake electronics
#define VWUP_BRK_RX                     0x77D
#define VWUP_MFD_TX                     0x714   // ECU 17 multi-function display
#define VWUP_MFD_RX                     0x77E
#define VWUP_BRKBOOST_TX                0x73B   // ECU 23 brake boost
#define VWUP_BRKBOOST_RX                0x743
#define VWUP_STEER_TX                   0x712   // ECU 44 steering support
#define VWUP_STEER_RX                   0x71A
#define VWUP_ELD_TX                     0x7E6   // ECU 51 electric drive
#define VWUP_ELD_RX                     0x7EE
#define VWUP_INF_TX                     0x773   // ECU 5F information electronics
#define VWUP_INF_RX                     0x77B
#define VWUP_BAT_MGMT_TX                0x7E5   // ECU 8C hybrid battery management
#define VWUP_BAT_MGMT_RX                0x7ED
#define VWUP_BRKSENS_TX                 0x762   // ECU AD sensors for braking system
#define VWUP_BRKSENS_RX                 0x76A
#define VWUP_CHG_TX                     0x744   // ECU C6 high voltage charger
#define VWUP_CHG_RX                     0x7AE
#define VWUP_CHG_MGMT_TX                0x765   // ECU BD high voltage charge management
#define VWUP_CHG_MGMT_RX                0x7CF

//
// Poll list shortcuts
//
#define VWUP_MOT_ELEC                   VWUP_MOT_ELEC_TX, VWUP_MOT_ELEC_RX
#define VWUP_BRK                        VWUP_BRK_TX,      VWUP_BRK_RX
#define VWUP_MFD                        VWUP_MFD_TX,      VWUP_MFD_RX
#define VWUP_BRKBOOST                   VWUP_BRKBOOST_TX, VWUP_BRKBOOST_RX
#define VWUP_STEER                      VWUP_STEER_TX,    VWUP_STEER_RX
#define VWUP_ELD                        VWUP_ELD_TX,      VWUP_ELD_RX
#define VWUP_INF                        VWUP_INF_TX,      VWUP_INF_RX
#define VWUP_BAT_MGMT                   VWUP_BAT_MGMT_TX, VWUP_BAT_MGMT_RX
#define VWUP_BRKSENS                    VWUP_BRKSENS_TX,  VWUP_BRKSENS_RX
#define VWUP_CHG                        VWUP_CHG_TX,      VWUP_CHG_RX
#define VWUP_CHG_MGMT                   VWUP_CHG_MGMT_TX, VWUP_CHG_MGMT_RX

#define UDS_READ                        VEHICLE_POLL_TYPE_READDATA
#define UDS_SESSION                     VEHICLE_POLL_TYPE_OBDIISESSION

//
// ECU diagnostic session(s)
//
#define VWUP_EXTDIAG_START              0x03
#define VWUP_EXTDIAG_STOP               0x01

//
// PIDs of ECUs
//
#define VWUP_MOT_ELEC_SOC_NORM          0x1164
#define VWUP_MOT_ELEC_SOC_ABS           0xF45B
#define VWUP_MOT_ELEC_TEMP_AMB          0xF446    // Ambient temperature
#define VWUP_MOT_ELEC_TEMP_DCDC         0x116F    // DCDC converter temperature current value
#define VWUP_MOT_ELEC_TEMP_PEM          0x1116    // pulse inverter temperature current value
#define VWUP_MOT_ELEC_TEMP_COOL1        0x1611    // coolant temperature after heat exchanger HV battery current value
#define VWUP_MOT_ELEC_TEMP_COOL2        0x1612    // coolant temperature before e-machine current value
#define VWUP_MOT_ELEC_TEMP_COOL3        0x1613    // coolant temperature after heat exchanger current value
#define VWUP_MOT_ELEC_TEMP_COOL4        0x1614    // coolant temperature before PTC current value
#define VWUP_MOT_ELEC_TEMP_COOL5        0x1615    // coolant temperature before power electronics current value
#define VWUP_MOT_ELEC_TEMP_COOL_BAT     0x1169    // cooling temperature of hybrid battery
#define VWUP_MOT_ELEC_VIN               0xF802    // Vehicle Identification Number

#define VWUP_BRK_TPMS                   0x1821

#define VWUP_MFD_ODOMETER               0x2203
#define VWUP_MFD_SERV_RANGE             0x2260
#define VWUP_MFD_SERV_TIME              0x2261
//#define VWUP_MFD_TEMP_COOL              0x        // coolant temperature

#define VWUP_BRKBOOST_TEMP_ECU          0x028D    // control unit temperature
#define VWUP_BRKBOOST_TEMP_ACC          0x4E06    // temperature brake accumulator control unit
//#define VWUP_BRKBOOST_TEMP_COOL         0x        // coolant temperature

#define VWUP_STEER_TEMP                 0x0295    // temperature power amplifier

#define VWUP_ELD_TEMP_COOL              0xF405    // coolant temperature
#define VWUP_ELD_TEMP_MOT               0x3E94    // temperature electrical machine
#define VWUP_ELD_TEMP_DCDC1             0x3EB5    // DCDC converter temperature current value
#define VWUP_ELD_TEMP_DCDC2             0x464E    // DCDC converter PCB temperature
#define VWUP_ELD_TEMP_DCDC3             0x464F    // DCDC converter temperature of power electronics
#define VWUP_ELD_TEMP_PEW               0x4662    // power electronics IGBT temperature phase W
#define VWUP_ELD_TEMP_PEV               0x4663    // power electronics IGBT temperature phase V
#define VWUP_ELD_TEMP_PEU               0x4664    // power electronics IGBT temperature phase U
#define VWUP_ELD_TEMP_STAT              0x4672    // e-machine stator temperature
#define VWUP_ELD_DCDC_U                 0x465C    // DCDC converter output voltage
#define VWUP_ELD_DCDC_I                 0x465B    // DCDC converter output current

#define VWUP_INF_TEMP_PCB               0x1863    // temperature processor PCB
//#define VWUP_INF_TEMP_OPT               0x        // temperature optical drive
//#define VWUP_INF_TEMP_MMX               0x        // temperature MMX PCB
#define VWUP_INF_TEMP_AUDIO             0x1866    // temperature audio amplifier

#define VWUP_BAT_MGMT_U                 0x1E3B
#define VWUP_BAT_MGMT_I                 0x1E3D
#define VWUP_BAT_MGMT_SOC_ABS           0x028C
#define VWUP_BAT_MGMT_ENERGY_COUNTERS   0x1E32
#define VWUP_BAT_MGMT_CELL_MAX          0x1E33    // max battery voltage
#define VWUP_BAT_MGMT_CELL_MIN          0x1E34    // min battery voltage
#define VWUP_BAT_MGMT_TEMP              0x2A0B
#define VWUP_BAT_MGMT_TEMP_MAX          0x1E0E    // maximum battery temperature
#define VWUP_BAT_MGMT_TEMP_MIN          0x1E0F    // minimum battery temperature
#define VWUP_BAT_MGMT_CELL_VBASE        0x1E40    // cell voltage base address
#define VWUP_BAT_MGMT_CELL_VLAST        0x1EA5    // cell voltage last address
#define VWUP_BAT_MGMT_CELL_TBASE        0x1EAE    // cell temperature base address
#define VWUP_BAT_MGMT_CELL_TLAST        0x1EBD    // cell temperature last address
#define VWUP_BAT_MGMT_CELL_T17          0x7425    // cell temperature for module #17 (gen1)

#define VWUP_BRKSENS_TEMP               0x1024    // sensor temperature

#define VWUP_CHG_POWER_EFF              0x15D6
#define VWUP_CHG_POWER_LOSS             0x15E1
#define VWUP_CHG_TEMP_BRD               0x15D8    // temperature battery charger system board
#define VWUP_CHG_TEMP_PFCCOIL           0x15D9    // temperature battery charger PFC coil
#define VWUP_CHG_TEMP_DCDCCOIL          0x15DA    // temperature battery charger DCDC coil
#define VWUP_CHG_TEMP                   0x15E2    // charger coolant temperature
#define VWUP_CHG_TEMP_DCDCPL            0x15EC    // temperature DCDC powerline
#define VWUP1_CHG_AC_U                  0x1DA9
#define VWUP1_CHG_AC_I                  0x1DA8
#define VWUP1_CHG_DC_U                  0x1DA7
#define VWUP1_CHG_DC_I                  0x4237
#define VWUP2_CHG_AC_U                  0x41FC
#define VWUP2_CHG_AC_I                  0x41FB
#define VWUP2_CHG_DC_U                  0x41F8
#define VWUP2_CHG_DC_I                  0x41F9

#define VWUP_CHG_MGMT_SOC_NORM          0x1DD0
#define VWUP_CHG_MGMT_REM               0x1DE4    // remaining time for full charge


#endif //#ifndef __VEHICLE_EUP_OBD_H__
