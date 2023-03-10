
//
// Warning: don't edit - generated by generate_ecu_code.pl processing ../dev/zbe6.json: ZBE 67: iDrive controller
// This generated code  makes it easier to process CANBUS messages from the ZBE ecu in a BMW i3
//

#define I3_ECU_ZBE_TX                                                0x06F167
#define I3_ECU_ZBE_RX                                                0x0667F1

#define I3_PID_ZBE_PROGRAMMING_COUNTER                               0x2502
        // Programming counter / Programming-Counter

    #define I3_RES_ZBE_STAT_RESERVE_WERT                             (RXBUF_UCHAR(0))
    #define I3_RES_ZBE_STAT_RESERVE_WERT_TYPE                        unsigned char
        // Reserve. Constant = 0x00 / Reserve. Konstante = 0x00

    #define I3_RES_ZBE_STAT_PROG_ZAEHLER_STATUS                      (RXBUF_UCHAR(1))
    #define I3_RES_ZBE_STAT_PROG_ZAEHLER_STATUS_UNIT                 '0-n'
    #define I3_RES_ZBE_STAT_PROG_ZAEHLER_STATUS_TYPE                 unsigned char
        // ProgrammingCounterStatus / ProgrammingCounterStatus

    #define I3_RES_ZBE_STAT_PROG_ZAEHLER_WERT                        (RXBUF_UINT(2))
    #define I3_RES_ZBE_STAT_PROG_ZAEHLER_WERT_TYPE                   unsigned short
        // ProgrammingCounter / ProgrammingCounter

#define I3_PID_ZBE_PROGRAMMING_COUNTER_MAX_VALUE                     0x2503
        // maximum number of programming processes / maximalen Anzahl von Programmiervorg√§ngen

    #define I3_RES_ZBE_STAT_PROG_MAX_WERT                            (RXBUF_UINT(0))
    #define I3_RES_ZBE_STAT_PROG_MAX_WERT_TYPE                       unsigned short
        // maximum number of programming processes / maximalen Anzahl von Programmiervorg√§ngen

#define I3_PID_ZBE_FLASH_TIMING_PARAMETER                            0x2504
        // Programming specific timing parameters / Programmierspezifische Timing Parameter

    #define I3_RES_ZBE_STAT_ERASE_MEMORY_TIME_WERT                   (RXBUF_UINT(0))
    #define I3_RES_ZBE_STAT_ERASE_MEMORY_TIME_WERT_UNIT              's'
    #define I3_RES_ZBE_STAT_ERASE_MEMORY_TIME_WERT_TYPE              unsigned short
        // EraseMemoryTime, maximum SWE deletion time with process control in the control unit. / EraseMemoryTime,
        // maximale SWE-L√∂schzeit mit Ablaufkontrolle im Steuerger√§t.

    #define I3_RES_ZBE_STAT_CHECK_MEMORY_TIME_WERT                   (RXBUF_UINT(2))
    #define I3_RES_ZBE_STAT_CHECK_MEMORY_TIME_WERT_UNIT              's'
    #define I3_RES_ZBE_STAT_CHECK_MEMORY_TIME_WERT_TYPE              unsigned short
        // CheckMemoryTime (e.g. signature check), maximum memory check time with process control in the control unit. /
        // CheckMemoryTime (Bsp.: Signaturpr√ľfung), maximale Speicherpr√ľfzeit mit Ablaufkontrolle im Steuerger√§t.

    #define I3_RES_ZBE_STAT_BOOTLOADER_INSTALLATION_TIME_WERT        (RXBUF_UINT(4))
    #define I3_RES_ZBE_STAT_BOOTLOADER_INSTALLATION_TIME_WERT_UNIT   's'
    #define I3_RES_ZBE_STAT_BOOTLOADER_INSTALLATION_TIME_WERT_TYPE   unsigned short
        // BootloaderInstallationTime The time that is required after the reset so that the auxiliary bootloader is
        // started, the bootloader is deleted, the new bootloader is copied, its signature is checked and the new
        // bootloader is started until it can be diagnosed again. This information is mandatory for all control units,
        // even if the control unit has not planned a bootloader update. A value of 0x0000 is prohibited. /
        // BootloaderInstallationTime Die Zeit, die nach dem Reset ben√∂tigt wird, damit der Hilfsbootloader gestartet
        // wird, den Bootloader l√∂scht, den neuen Bootloader kopiert, dessen Signatur pr√ľf und der neue Bootloader
        // gestartet wird bis er wieder diagnosef√§hig ist. Angabe ist verpflichtend f√ľr alle Steuerger√§te, auch wenn das
        // Steuerger√§t keinen Bootloader Update geplant hat. Ein Wert von 0x0000 ist verboten.

    #define I3_RES_ZBE_STAT_AUTHENTICATION_TIME_WERT                 (RXBUF_UINT(6))
    #define I3_RES_ZBE_STAT_AUTHENTICATION_TIME_WERT_UNIT            's'
    #define I3_RES_ZBE_STAT_AUTHENTICATION_TIME_WERT_TYPE            unsigned short
        // AuthenticationTime, the maximum time that the control device needs to check the authentication (sendKey) with
        // flow control in the control device. / AuthenticationTime, die maximale Zeit, die das Steuerger√§t zur Pr√ľfung
        // der Authentisierung (sendKey) ben√∂tigt mit Ablaufkontrolle im Steuerger√§t.

    #define I3_RES_ZBE_STAT_RESET_TIME_WERT                          (RXBUF_UINT(8))
    #define I3_RES_ZBE_STAT_RESET_TIME_WERT_UNIT                     's'
    #define I3_RES_ZBE_STAT_RESET_TIME_WERT_TYPE                     unsigned short
        // ResetTime The time refers to the transition from the ApplicationExtendedSession to the ProgrammingSession or
        // to the transition from the ProgrammingSession to the DefaultSession. The maximum value is to be output. After
        // the reset time has elapsed, the control unit can be addressed by diagnosis. / ResetTime Die Zeitangabe bezieht
        // sich auf den √úbergang von der ApplicationExtendedSesssion in die ProgrammingSession bzw. bei √úbergang von der
        // ProgrammingSession in die DefaultSession. Es ist der Maximalwert auszugeben. Nach Ablauf der ResetTime ist das
        // Steuerger√§t durch Diagnose ansprechbar.

    #define I3_RES_ZBE_STAT_TRANSFER_DATA_TIME_WERT                  (RXBUF_UINT(10))
    #define I3_RES_ZBE_STAT_TRANSFER_DATA_TIME_WERT_UNIT             's'
    #define I3_RES_ZBE_STAT_TRANSFER_DATA_TIME_WERT_TYPE             unsigned short
        // TransferDataTime The specification has to refer to a TransferData with a maximum block length to the time span
        // from the complete reception of the data in the control unit via the possibly necessary decompression and the
        // complete storage in the non-volatile memory up to and including the sending of the positive response. /
        // TransferDataTime Die Angabe hat sich zu beziehen auf einen TransferData mit maximaler Blockl√§nge auf die
        // Zeitspanne vom vollst√§ndigen Empfang der Daten im Steuerger√§t √ľber das ggf. erforderliche Dekomprimieren und
        // dem vollst√§ndigen Speichern im nichtfl√ľchtigen Speicher bis einschlie√ülich dem Senden der positiven Response.

#define I3_PID_ZBE_MILE_KM_EEPROM                                    0x2540
        // Mileage stored in the EEPROM. / Im EEPROM abgelegter Kilometerstand.

    // Can't yet generate code for STAT_MILE_KM_EEPROM_DATA of type data[3] at offset 0. But we account for the 3 bytes
        // Mileage stored in the EEPROM. / Im EEPROM abgelegter Kilometerstand.

// Skipping STELLGLIED_POSITIONEN on 0xD134 which takes arguments

#define I3_PID_ZBE_VARIANTE_ZBE                                      0xD137
        // Variant ZBE: 0 = standard variant 1 = Asian variant 2 = standard variant with touchpad 3 = Asian variant with
        // touchpad 255 = invalid value or ZBE not coded / Variante ZBE: 0 = Standardvariante 1 = Asiavariante 2 =
        // Standardvariante mit Touchpad 3 = Asiavariante mit Touchpad 255 = Ung√ľltiger Wert oder ZBE nicht codiert

    #define I3_RES_ZBE_STAT_ZBE_VARIANTE_NR                          (RXBUF_UCHAR(0))
    #define I3_RES_ZBE_STAT_ZBE_VARIANTE_NR_UNIT                     '0-n'
    #define I3_RES_ZBE_STAT_ZBE_VARIANTE_NR_TYPE                     unsigned char
        // Variant ZBE: 0 = standard variant 1 = Asian variant 2 = standard variant with touchpad 3 = Asian variant with
        // touchpad 255 = invalid value or ZBE not coded / Variante ZBE: 0 = Standardvariante 1 = Asiavariante 2 =
        // Standardvariante mit Touchpad 3 = Asiavariante mit Touchpad 255 = Ung√ľltiger Wert oder ZBE nicht codiert

// Skipping ZBE_TASTEN on 0xD14D which takes arguments

#define I3_PID_ZBE_SCHRITTE_ROTRAD                                   0xD14E
        // Output of the current value for the position of the rotating wheel. Value 0 if the encoder has not been
        // configured / Ausgabe vom aktuellen Wert f√ľr die Stellung des Rotationsrad. Wert 0, wenn Drehgeber nicht
        // konfiguriert wurde

    #define I3_RES_ZBE_STAT_REGISTER_ROTRAD_WERT                     (RXBUF_UINT(0))
    #define I3_RES_ZBE_STAT_REGISTER_ROTRAD_WERT_TYPE                unsigned short
        // Output of the current value for the position of the rotating wheel. Value 0 if the encoder has not been
        // configured / Ausgabe vom aktuellen Wert f√ľr die Stellung des Rotationsrad. Wert 0, wenn Drehgeber nicht
        // konfiguriert wurde

#define I3_PID_ZBE_LOGGING_TASTE1                                    0xD213
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT                        (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_TYPE                   unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT                    (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_TYPE               unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT                      (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_TYPE                 unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE2                                    0xD214
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD214                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD214_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD214 of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD214             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD214_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD214 of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD214               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD214_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD214 of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD214 of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE3                                    0xD215
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD215                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD215_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD215 of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD215             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD215_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD215 of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD215               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD215_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD215 of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD215 of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE4                                    0xD216
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD216                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD216_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD216 of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD216             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD216_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD216 of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD216               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD216_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD216 of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD216 of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE5                                    0xD217
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD217                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD217_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD217 of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD217             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD217_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD217 of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD217               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD217_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD217 of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD217 of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE6                                    0xD218
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD218                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD218_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD218 of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD218             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD218_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD218 of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD218               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD218_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD218 of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD218 of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE7                                    0xD219
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD219                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD219_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD219 of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD219             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD219_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD219 of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD219               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD219_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD219 of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD219 of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_TASTE8                                    0xD21A
        // Logging data of the keys. / Loggingdaten der Tasten.

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21A                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21A_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD21A of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21A             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21A_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD21A of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21A               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21A_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD21A of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD21A of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_DREHSTELLER                               0xD21B
        // Logging of the rotary actuator (turning, tilting) / Logging des Drehstellers (Drehen, Kippen)

    #define I3_RES_ZBE_STAT_RASTEN_IM_UHRZEIGERSINN_WERT             (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_RASTEN_IM_UHRZEIGERSINN_WERT_TYPE        unsigned long
        // Number of notches in clockwise direction / Anzahl Rasten im Uhrzeigersinn

    // Can't yet generate code for STAT_RELATIVZEIT_IM_UHRZEIGERSINN_DATA of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of the last counterclockwise rotation / Relativzeit der letzten Drehung gegen den Uhrzeigersinn

    #define I3_RES_ZBE_STAT_RASTEN_GEGEN_UHRZEIGERSINN_WERT          (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_RASTEN_GEGEN_UHRZEIGERSINN_WERT_TYPE     unsigned long
        // Number of notches counterclockwise / Anzahl Rasten gegen Uhrzeigersinn

    // Can't yet generate code for STAT_RELATIVZEIT_GEGEN_UHRZEIGERSINN_DATA of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last counter-clockwise rotation / Relativzeit letzte Drehung gegen den Uhrzeigersinn

    #define I3_RES_ZBE_STAT_UNDERFLOW_WERT                           (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_UNDERFLOW_WERT_TYPE                      unsigned long
        // Number of underflows, stop on the left / Anzahl Underflow, Anschlag links

    // Can't yet generate code for STAT_RELATIVZEIT_UNDERFLOW_DATA of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last underflow / Relativzeit letzter Underflow

    #define I3_RES_ZBE_STAT_OVERFLOW_WERT                            (RXBUF_UINT32(24))
    #define I3_RES_ZBE_STAT_OVERFLOW_WERT_TYPE                       unsigned long
        // Number of overflows, stop on the right / Anzahl Overflow, Anschlag rechts

    // Can't yet generate code for STAT_RELATIVZEIT_OVERFLOW_DATA of type data[4] at offset 28. But we account for the 4 bytes
        // Relative time of last overflow / Relativzeit letzter Overflow

    // Can't yet generate code for STAT_KM_DREH_DATA of type data[4] at offset 32. But we account for the 4 bytes
        // KM status of the last shooting / KM-Stand der letzten Drehaktion 

#define I3_PID_ZBE_LOGGING_DREHSTELLER_NORD                          0xD21C
        // Logging the keys / Logging der Tasten 

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21C                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21C_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD21C of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21C             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21C_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD21C of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21C               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21C_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD21C of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD21C of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_DREHSTELLER_OST                           0xD21D
        // Logging the keys / Logging der Tasten

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21D                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21D_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD21D of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21D             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21D_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD21D of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21D               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21D_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD21D of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD21D of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_DREHSTELLER_SUED                          0xD21E
        // Logging the keys / Logging der Tasten

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21E                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21E_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD21E of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21E             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21E_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD21E of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21E               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21E_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD21E of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD21E of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_DREHSTELLER_WEST                          0xD21F
        // Logging the keys / Logging der Tasten

    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21F                 (RXBUF_UINT32(0))
    #define I3_RES_ZBE_STAT_ANZAHL_DRUCK_WERT_0XD21F_TYPE            unsigned long
        // Number of prints / Anzahl Druck

    // Can't yet generate code for STAT_RELATIVZEIT_DRUCK_DATA_0XD21F of type data[4] at offset 4. But we account for the 4 bytes
        // Relative time of last print / Relativzeit letzter Druck

    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21F             (RXBUF_UINT32(8))
    #define I3_RES_ZBE_STAT_ANZAHL_LANGDRUCK_WERT_0XD21F_TYPE        unsigned long
        // Number of long presses / Anzahl Langdruck

    // Can't yet generate code for STAT_RELATIVZEIT_LANGDRUCK_DATA_0XD21F of type data[4] at offset 12. But we account for the 4 bytes
        // Relative time of the last long press / Relativzeit letzter Langdruck

    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21F               (RXBUF_UINT32(16))
    #define I3_RES_ZBE_STAT_ANZAHL_HAENGER_WERT_0XD21F_TYPE          unsigned long
        // Number of hangers / Anzahl H√§nger

    // Can't yet generate code for STAT_RELATIVZEIT_HAENGER_DATA_0XD21F of type data[4] at offset 20. But we account for the 4 bytes
        // Relative time of the last trailer / Relativzeit letzter H√§nger

    // Can't yet generate code for STAT_KM_DRUCK_DATA_0XD21F of type data[4] at offset 24. But we account for the 4 bytes
        // KM status last print, long print or hanger / KM-Stand letzter Druck, Langdruck oder H√§nger

#define I3_PID_ZBE_LOGGING_VERBAU                                    0xD228
        // Read out when the component was installed / Auslesen, wann die Komponente verbaut wurde

    // Can't yet generate code for STAT_RELATIVZEIT_VERBAU_DATA of type data[4] at offset 0. But we account for the 4 bytes
        // Time of first installation / Zeit des Erstverbau

    // Can't yet generate code for STAT_KM_VERBAU_DATA of type data[4] at offset 4. But we account for the 4 bytes
        // KM stand during installation / KM-Stand beim Verbau

    // Can't yet generate code for STAT_VIN_DATA of type data[7] at offset 8. But we account for the 7 bytes
        // VIN / VIN

    // Can't yet generate code for STAT_RELATIVZEIT_LETZTVERBAU_DATA of type data[4] at offset 15. But we account for the 4 bytes
        // Relative time last installation / Relativzeit Letztverbau

    // Can't yet generate code for STAT_KM_LETZTVERBAU_DATA of type data[4] at offset 19. But we account for the 4 bytes
        // KM stand last installation / KM-Stand Letztverbau

    // Can't yet generate code for STAT_VIN_LETZTVERBAU_DATA of type data[7] at offset 23. But we account for the 7 bytes
        // Chassis number of the last installation / Fahrgestellnummer Letztverbau

// Skipping STEUERN_SIGNALMODE on 0xD598 which takes arguments

#define I3_PID_ZBE_TOUCHPAD_BERUEHRUNG                               0xD60D
        // Touch detection Touchpad: 0x00 = no touch detected 0x01 = touch detected / Ber√ľhrungserkennung Touchpad: 0x00
        // = keine Ber√ľhrung erkannt 0x01 = Ber√ľhrung erkannt

    #define I3_RES_ZBE_STAT_TOUCHPAD_BERUEHRUNG                      (RXBUF_UCHAR(0))
    #define I3_RES_ZBE_STAT_TOUCHPAD_BERUEHRUNG_UNIT                 '0/1'
    #define I3_RES_ZBE_STAT_TOUCHPAD_BERUEHRUNG_TYPE                 unsigned char
        // Touch detection Touchpad: 0x00 = no touch detected 0x01 = touch detected / Ber√ľhrungserkennung Touchpad: 0x00
        // = keine Ber√ľhrung erkannt 0x01 = Ber√ľhrung erkannt

// Skipping TOUCHPAD_AKTIVIERUNG on 0xD60E which takes arguments

#define I3_PID_ZBE_TOUCHPAD_ANNAEHERUNG                              0xD68D
        // Proximity detection touchpad: 0x00 = no proximity detected 0x01 = proximity detected / Ann√§herungsserkennung
        // Touchpad: 0x00 = keine Ann√§herung erkannt 0x01 = Ann√§herung erkannt

    #define I3_RES_ZBE_STAT_TOUCHPAD_ANNAEHERUNG                     (RXBUF_UCHAR(0))
    #define I3_RES_ZBE_STAT_TOUCHPAD_ANNAEHERUNG_UNIT                '0/1'
    #define I3_RES_ZBE_STAT_TOUCHPAD_ANNAEHERUNG_TYPE                unsigned char
        // Proximity detection touchpad: 0x00 = no proximity detected 0x01 = proximity detected / Ann√§herungsserkennung
        // Touchpad: 0x00 = keine Ann√§herung erkannt 0x01 = Ann√§herung erkannt

#define I3_PID_ZBE_SPANNUNG_KLEMME_30B_WERT                          0xDAD9
        // Voltage value on the control unit at terminal 30B (accurate to one decimal place) / Spannungswert am
        // Steuerger√§t an Klemme 30B (auf eine Nachkommastelle genau)

    #define I3_RES_ZBE_STAT_SPANNUNG_KLEMME_30B_WERT                 (RXBUF_UINT(0)/10.0f)
    #define I3_RES_ZBE_STAT_SPANNUNG_KLEMME_30B_WERT_UNIT            'V'
    #define I3_RES_ZBE_STAT_SPANNUNG_KLEMME_30B_WERT_TYPE            float
        // Voltage value on the control unit at terminal 30B (accurate to one decimal place) / Spannungswert am
        // Steuerger√§t an Klemme 30B (auf eine Nachkommastelle genau)

#define I3_PID_ZBE_ACTIVE_DIAGNOSTIC_SESSION                         0xF186
        // activeDiagnosticSession / activeDiagnosticSession

    #define I3_RES_ZBE_STAT_ACTIVE_DIAGNOSTIC_SESSION                (RXBUF_UCHAR(0))
    #define I3_RES_ZBE_STAT_ACTIVE_DIAGNOSTIC_SESSION_UNIT           '0-n'
    #define I3_RES_ZBE_STAT_ACTIVE_DIAGNOSTIC_SESSION_TYPE           unsigned char
        // activeDiagnosticSession / activeDiagnosticSession
