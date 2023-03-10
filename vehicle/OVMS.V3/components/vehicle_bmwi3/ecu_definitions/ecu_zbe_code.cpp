
//
// Warning: don't edit - generated by generate_ecu_code.pl processing ../dev/zbe6.json: ZBE 67: iDrive controller
// This generated code  makes it easier to process CANBUS messages from the ZBE ecu in a BMW i3
//

  case I3_PID_ZBE_PROGRAMMING_COUNTER: {                                          // 0x2502
    if (datalen < 4) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_PROGRAMMING_COUNTER", 4);
        break;
    }

    unsigned char STAT_RESERVE_WERT = (RXBUF_UCHAR(0));
        // Reserve. Constant = 0x00 / Reserve. Konstante = 0x00
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%x%s\n", "ZBE", "PROGRAMMING_COUNTER", "STAT_RESERVE_WERT", STAT_RESERVE_WERT, "");

    unsigned char STAT_PROG_ZAEHLER_STATUS = (RXBUF_UCHAR(1));
        // ProgrammingCounterStatus / ProgrammingCounterStatus
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%x%s\n", "ZBE", "PROGRAMMING_COUNTER", "STAT_PROG_ZAEHLER_STATUS", STAT_PROG_ZAEHLER_STATUS, "\"0-n\"");

    unsigned short STAT_PROG_ZAEHLER_WERT = (RXBUF_UINT(2));
        // ProgrammingCounter / ProgrammingCounter
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "PROGRAMMING_COUNTER", "STAT_PROG_ZAEHLER_WERT", STAT_PROG_ZAEHLER_WERT, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_PROGRAMMING_COUNTER_MAX_VALUE: {                                // 0x2503
    if (datalen < 2) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_PROGRAMMING_COUNTER_MAX_VALUE", 2);
        break;
    }

    unsigned short STAT_PROG_MAX_WERT = (RXBUF_UINT(0));
        // maximum number of programming processes / maximalen Anzahl von Programmiervorg√§ngen
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "PROGRAMMING_COUNTER_MAX_VALUE", "STAT_PROG_MAX_WERT", STAT_PROG_MAX_WERT, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_FLASH_TIMING_PARAMETER: {                                       // 0x2504
    if (datalen < 12) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_FLASH_TIMING_PARAMETER", 12);
        break;
    }

    unsigned short STAT_ERASE_MEMORY_TIME_WERT = (RXBUF_UINT(0));
        // EraseMemoryTime, maximum SWE deletion time with process control in the control unit. / EraseMemoryTime,
        // maximale SWE-L√∂schzeit mit Ablaufkontrolle im Steuerger√§t.
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "FLASH_TIMING_PARAMETER", "STAT_ERASE_MEMORY_TIME_WERT", STAT_ERASE_MEMORY_TIME_WERT, "\"s\"");

    unsigned short STAT_CHECK_MEMORY_TIME_WERT = (RXBUF_UINT(2));
        // CheckMemoryTime (e.g. signature check), maximum memory check time with process control in the control unit. /
        // CheckMemoryTime (Bsp.: Signaturpr√ľfung), maximale Speicherpr√ľfzeit mit Ablaufkontrolle im Steuerger√§t.
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "FLASH_TIMING_PARAMETER", "STAT_CHECK_MEMORY_TIME_WERT", STAT_CHECK_MEMORY_TIME_WERT, "\"s\"");

    unsigned short STAT_BOOTLOADER_INSTALLATION_TIME_WERT = (RXBUF_UINT(4));
        // BootloaderInstallationTime The time that is required after the reset so that the auxiliary bootloader is
        // started, the bootloader is deleted, the new bootloader is copied, its signature is checked and the new
        // bootloader is started until it can be diagnosed again. This information is mandatory for all control units,
        // even if the control unit has not planned a bootloader update. A value of 0x0000 is prohibited. /
        // BootloaderInstallationTime Die Zeit, die nach dem Reset ben√∂tigt wird, damit der Hilfsbootloader gestartet
        // wird, den Bootloader l√∂scht, den neuen Bootloader kopiert, dessen Signatur pr√ľf und der neue Bootloader
        // gestartet wird bis er wieder diagnosef√§hig ist. Angabe ist verpflichtend f√ľr alle Steuerger√§te, auch wenn das
        // Steuerger√§t keinen Bootloader Update geplant hat. Ein Wert von 0x0000 ist verboten.
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "FLASH_TIMING_PARAMETER", "STAT_BOOTLOADER_INSTALLATION_TIME_WERT", STAT_BOOTLOADER_INSTALLATION_TIME_WERT, "\"s\"");

    unsigned short STAT_AUTHENTICATION_TIME_WERT = (RXBUF_UINT(6));
        // AuthenticationTime, the maximum time that the control device needs to check the authentication (sendKey) with
        // flow control in the control device. / AuthenticationTime, die maximale Zeit, die das Steuerger√§t zur Pr√ľfung
        // der Authentisierung (sendKey) ben√∂tigt mit Ablaufkontrolle im Steuerger√§t.
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "FLASH_TIMING_PARAMETER", "STAT_AUTHENTICATION_TIME_WERT", STAT_AUTHENTICATION_TIME_WERT, "\"s\"");

    unsigned short STAT_RESET_TIME_WERT = (RXBUF_UINT(8));
        // ResetTime The time refers to the transition from the ApplicationExtendedSession to the ProgrammingSession or
        // to the transition from the ProgrammingSession to the DefaultSession. The maximum value is to be output. After
        // the reset time has elapsed, the control unit can be addressed by diagnosis. / ResetTime Die Zeitangabe bezieht
        // sich auf den √úbergang von der ApplicationExtendedSesssion in die ProgrammingSession bzw. bei √úbergang von der
        // ProgrammingSession in die DefaultSession. Es ist der Maximalwert auszugeben. Nach Ablauf der ResetTime ist das
        // Steuerger√§t durch Diagnose ansprechbar.
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "FLASH_TIMING_PARAMETER", "STAT_RESET_TIME_WERT", STAT_RESET_TIME_WERT, "\"s\"");

    unsigned short STAT_TRANSFER_DATA_TIME_WERT = (RXBUF_UINT(10));
        // TransferDataTime The specification has to refer to a TransferData with a maximum block length to the time span
        // from the complete reception of the data in the control unit via the possibly necessary decompression and the
        // complete storage in the non-volatile memory up to and including the sending of the positive response. /
        // TransferDataTime Die Angabe hat sich zu beziehen auf einen TransferData mit maximaler Blockl√§nge auf die
        // Zeitspanne vom vollst√§ndigen Empfang der Daten im Steuerger√§t √ľber das ggf. erforderliche Dekomprimieren und
        // dem vollst√§ndigen Speichern im nichtfl√ľchtigen Speicher bis einschlie√ülich dem Senden der positiven Response.
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "FLASH_TIMING_PARAMETER", "STAT_TRANSFER_DATA_TIME_WERT", STAT_TRANSFER_DATA_TIME_WERT, "\"s\"");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_MILE_KM_EEPROM: {                                               // 0x2540
    if (datalen < 3) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_MILE_KM_EEPROM", 3);
        break;
    }

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_VARIANTE_ZBE: {                                                 // 0xD137
    if (datalen < 1) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_VARIANTE_ZBE", 1);
        break;
    }

    unsigned char STAT_ZBE_VARIANTE_NR = (RXBUF_UCHAR(0));
        // Variant ZBE: 0 = standard variant 1 = Asian variant 2 = standard variant with touchpad 3 = Asian variant with
        // touchpad 255 = invalid value or ZBE not coded / Variante ZBE: 0 = Standardvariante 1 = Asiavariante 2 =
        // Standardvariante mit Touchpad 3 = Asiavariante mit Touchpad 255 = Ung√ľltiger Wert oder ZBE nicht codiert
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%x%s\n", "ZBE", "VARIANTE_ZBE", "STAT_ZBE_VARIANTE_NR", STAT_ZBE_VARIANTE_NR, "\"0-n\"");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_SCHRITTE_ROTRAD: {                                              // 0xD14E
    if (datalen < 2) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_SCHRITTE_ROTRAD", 2);
        break;
    }

    unsigned short STAT_REGISTER_ROTRAD_WERT = (RXBUF_UINT(0));
        // Output of the current value for the position of the rotating wheel. Value 0 if the encoder has not been
        // configured / Ausgabe vom aktuellen Wert f√ľr die Stellung des Rotationsrad. Wert 0, wenn Drehgeber nicht
        // konfiguriert wurde
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%u%s\n", "ZBE", "SCHRITTE_ROTRAD", "STAT_REGISTER_ROTRAD_WERT", STAT_REGISTER_ROTRAD_WERT, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE1: {                                               // 0xD213
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE1", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE1", "STAT_ANZAHL_DRUCK_WERT", STAT_ANZAHL_DRUCK_WERT, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE1", "STAT_ANZAHL_LANGDRUCK_WERT", STAT_ANZAHL_LANGDRUCK_WERT, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE1", "STAT_ANZAHL_HAENGER_WERT", STAT_ANZAHL_HAENGER_WERT, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE2: {                                               // 0xD214
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE2", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD214 = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE2", "STAT_ANZAHL_DRUCK_WERT_0XD214", STAT_ANZAHL_DRUCK_WERT_0XD214, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD214 = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE2", "STAT_ANZAHL_LANGDRUCK_WERT_0XD214", STAT_ANZAHL_LANGDRUCK_WERT_0XD214, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD214 = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE2", "STAT_ANZAHL_HAENGER_WERT_0XD214", STAT_ANZAHL_HAENGER_WERT_0XD214, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE3: {                                               // 0xD215
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE3", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD215 = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE3", "STAT_ANZAHL_DRUCK_WERT_0XD215", STAT_ANZAHL_DRUCK_WERT_0XD215, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD215 = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE3", "STAT_ANZAHL_LANGDRUCK_WERT_0XD215", STAT_ANZAHL_LANGDRUCK_WERT_0XD215, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD215 = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE3", "STAT_ANZAHL_HAENGER_WERT_0XD215", STAT_ANZAHL_HAENGER_WERT_0XD215, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE4: {                                               // 0xD216
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE4", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD216 = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE4", "STAT_ANZAHL_DRUCK_WERT_0XD216", STAT_ANZAHL_DRUCK_WERT_0XD216, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD216 = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE4", "STAT_ANZAHL_LANGDRUCK_WERT_0XD216", STAT_ANZAHL_LANGDRUCK_WERT_0XD216, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD216 = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE4", "STAT_ANZAHL_HAENGER_WERT_0XD216", STAT_ANZAHL_HAENGER_WERT_0XD216, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE5: {                                               // 0xD217
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE5", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD217 = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE5", "STAT_ANZAHL_DRUCK_WERT_0XD217", STAT_ANZAHL_DRUCK_WERT_0XD217, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD217 = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE5", "STAT_ANZAHL_LANGDRUCK_WERT_0XD217", STAT_ANZAHL_LANGDRUCK_WERT_0XD217, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD217 = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE5", "STAT_ANZAHL_HAENGER_WERT_0XD217", STAT_ANZAHL_HAENGER_WERT_0XD217, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE6: {                                               // 0xD218
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE6", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD218 = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE6", "STAT_ANZAHL_DRUCK_WERT_0XD218", STAT_ANZAHL_DRUCK_WERT_0XD218, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD218 = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE6", "STAT_ANZAHL_LANGDRUCK_WERT_0XD218", STAT_ANZAHL_LANGDRUCK_WERT_0XD218, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD218 = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE6", "STAT_ANZAHL_HAENGER_WERT_0XD218", STAT_ANZAHL_HAENGER_WERT_0XD218, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE7: {                                               // 0xD219
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE7", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD219 = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE7", "STAT_ANZAHL_DRUCK_WERT_0XD219", STAT_ANZAHL_DRUCK_WERT_0XD219, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD219 = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE7", "STAT_ANZAHL_LANGDRUCK_WERT_0XD219", STAT_ANZAHL_LANGDRUCK_WERT_0XD219, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD219 = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE7", "STAT_ANZAHL_HAENGER_WERT_0XD219", STAT_ANZAHL_HAENGER_WERT_0XD219, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_TASTE8: {                                               // 0xD21A
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_TASTE8", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD21A = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE8", "STAT_ANZAHL_DRUCK_WERT_0XD21A", STAT_ANZAHL_DRUCK_WERT_0XD21A, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD21A = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE8", "STAT_ANZAHL_LANGDRUCK_WERT_0XD21A", STAT_ANZAHL_LANGDRUCK_WERT_0XD21A, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD21A = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_TASTE8", "STAT_ANZAHL_HAENGER_WERT_0XD21A", STAT_ANZAHL_HAENGER_WERT_0XD21A, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_DREHSTELLER: {                                          // 0xD21B
    if (datalen < 36) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_DREHSTELLER", 36);
        break;
    }

    unsigned long STAT_RASTEN_IM_UHRZEIGERSINN_WERT = (RXBUF_UINT32(0));
        // Number of notches in clockwise direction / Anzahl Rasten im Uhrzeigersinn
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER", "STAT_RASTEN_IM_UHRZEIGERSINN_WERT", STAT_RASTEN_IM_UHRZEIGERSINN_WERT, "");

    unsigned long STAT_RASTEN_GEGEN_UHRZEIGERSINN_WERT = (RXBUF_UINT32(8));
        // Number of notches counterclockwise / Anzahl Rasten gegen Uhrzeigersinn
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER", "STAT_RASTEN_GEGEN_UHRZEIGERSINN_WERT", STAT_RASTEN_GEGEN_UHRZEIGERSINN_WERT, "");

    unsigned long STAT_UNDERFLOW_WERT = (RXBUF_UINT32(16));
        // Number of underflows, stop on the left / Anzahl Underflow, Anschlag links
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER", "STAT_UNDERFLOW_WERT", STAT_UNDERFLOW_WERT, "");

    unsigned long STAT_OVERFLOW_WERT = (RXBUF_UINT32(24));
        // Number of overflows, stop on the right / Anzahl Overflow, Anschlag rechts
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER", "STAT_OVERFLOW_WERT", STAT_OVERFLOW_WERT, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_DREHSTELLER_NORD: {                                     // 0xD21C
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_DREHSTELLER_NORD", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD21C = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_NORD", "STAT_ANZAHL_DRUCK_WERT_0XD21C", STAT_ANZAHL_DRUCK_WERT_0XD21C, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD21C = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_NORD", "STAT_ANZAHL_LANGDRUCK_WERT_0XD21C", STAT_ANZAHL_LANGDRUCK_WERT_0XD21C, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD21C = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_NORD", "STAT_ANZAHL_HAENGER_WERT_0XD21C", STAT_ANZAHL_HAENGER_WERT_0XD21C, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_DREHSTELLER_OST: {                                      // 0xD21D
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_DREHSTELLER_OST", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD21D = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_OST", "STAT_ANZAHL_DRUCK_WERT_0XD21D", STAT_ANZAHL_DRUCK_WERT_0XD21D, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD21D = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_OST", "STAT_ANZAHL_LANGDRUCK_WERT_0XD21D", STAT_ANZAHL_LANGDRUCK_WERT_0XD21D, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD21D = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_OST", "STAT_ANZAHL_HAENGER_WERT_0XD21D", STAT_ANZAHL_HAENGER_WERT_0XD21D, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_DREHSTELLER_SUED: {                                     // 0xD21E
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_DREHSTELLER_SUED", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD21E = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_SUED", "STAT_ANZAHL_DRUCK_WERT_0XD21E", STAT_ANZAHL_DRUCK_WERT_0XD21E, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD21E = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_SUED", "STAT_ANZAHL_LANGDRUCK_WERT_0XD21E", STAT_ANZAHL_LANGDRUCK_WERT_0XD21E, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD21E = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_SUED", "STAT_ANZAHL_HAENGER_WERT_0XD21E", STAT_ANZAHL_HAENGER_WERT_0XD21E, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_DREHSTELLER_WEST: {                                     // 0xD21F
    if (datalen < 28) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_DREHSTELLER_WEST", 28);
        break;
    }

    unsigned long STAT_ANZAHL_DRUCK_WERT_0XD21F = (RXBUF_UINT32(0));
        // Number of prints / Anzahl Druck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_WEST", "STAT_ANZAHL_DRUCK_WERT_0XD21F", STAT_ANZAHL_DRUCK_WERT_0XD21F, "");

    unsigned long STAT_ANZAHL_LANGDRUCK_WERT_0XD21F = (RXBUF_UINT32(8));
        // Number of long presses / Anzahl Langdruck
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_WEST", "STAT_ANZAHL_LANGDRUCK_WERT_0XD21F", STAT_ANZAHL_LANGDRUCK_WERT_0XD21F, "");

    unsigned long STAT_ANZAHL_HAENGER_WERT_0XD21F = (RXBUF_UINT32(16));
        // Number of hangers / Anzahl H√§nger
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%lu%s\n", "ZBE", "LOGGING_DREHSTELLER_WEST", "STAT_ANZAHL_HAENGER_WERT_0XD21F", STAT_ANZAHL_HAENGER_WERT_0XD21F, "");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_LOGGING_VERBAU: {                                               // 0xD228
    if (datalen < 30) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_LOGGING_VERBAU", 30);
        break;
    }

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_TOUCHPAD_BERUEHRUNG: {                                          // 0xD60D
    if (datalen < 1) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_TOUCHPAD_BERUEHRUNG", 1);
        break;
    }

    unsigned char STAT_TOUCHPAD_BERUEHRUNG = (RXBUF_UCHAR(0));
        // Touch detection Touchpad: 0x00 = no touch detected 0x01 = touch detected / Ber√ľhrungserkennung Touchpad: 0x00
        // = keine Ber√ľhrung erkannt 0x01 = Ber√ľhrung erkannt
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%x%s\n", "ZBE", "TOUCHPAD_BERUEHRUNG", "STAT_TOUCHPAD_BERUEHRUNG", STAT_TOUCHPAD_BERUEHRUNG, "\"0/1\"");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_TOUCHPAD_ANNAEHERUNG: {                                         // 0xD68D
    if (datalen < 1) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_TOUCHPAD_ANNAEHERUNG", 1);
        break;
    }

    unsigned char STAT_TOUCHPAD_ANNAEHERUNG = (RXBUF_UCHAR(0));
        // Proximity detection touchpad: 0x00 = no proximity detected 0x01 = proximity detected / Ann√§herungsserkennung
        // Touchpad: 0x00 = keine Ann√§herung erkannt 0x01 = Ann√§herung erkannt
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%x%s\n", "ZBE", "TOUCHPAD_ANNAEHERUNG", "STAT_TOUCHPAD_ANNAEHERUNG", STAT_TOUCHPAD_ANNAEHERUNG, "\"0/1\"");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_SPANNUNG_KLEMME_30B_WERT: {                                     // 0xDAD9
    if (datalen < 2) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_SPANNUNG_KLEMME_30B_WERT", 2);
        break;
    }

    float STAT_SPANNUNG_KLEMME_30B_WERT = (RXBUF_UINT(0)/10.0f);
        // Voltage value on the control unit at terminal 30B (accurate to one decimal place) / Spannungswert am
        // Steuerger√§t an Klemme 30B (auf eine Nachkommastelle genau)
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%.4f%s\n", "ZBE", "SPANNUNG_KLEMME_30B_WERT", "STAT_SPANNUNG_KLEMME_30B_WERT", STAT_SPANNUNG_KLEMME_30B_WERT, "\"V\"");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }

  case I3_PID_ZBE_ACTIVE_DIAGNOSTIC_SESSION: {                                    // 0xF186
    if (datalen < 1) {
        ESP_LOGW(TAG, "Received %d bytes for %s, expected %d", datalen, "I3_PID_ZBE_ACTIVE_DIAGNOSTIC_SESSION", 1);
        break;
    }

    unsigned char STAT_ACTIVE_DIAGNOSTIC_SESSION = (RXBUF_UCHAR(0));
        // activeDiagnosticSession / activeDiagnosticSession
    ESP_LOGD(TAG, "From ECU %s, pid %s: got %s=%x%s\n", "ZBE", "ACTIVE_DIAGNOSTIC_SESSION", "STAT_ACTIVE_DIAGNOSTIC_SESSION", STAT_ACTIVE_DIAGNOSTIC_SESSION, "\"0-n\"");

    // ==========  Add your processing here ==========
    hexdump(rxbuf, type, pid);

    break;
  }
