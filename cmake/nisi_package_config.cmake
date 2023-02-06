set(CPACK_GENERATOR NSIS)
set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "${PROJECT_NAME}")
set(CPACK_PACKAGE_CONTACT "XiaoPb")

set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
# set(CPACK_PACKAGE_VERSION_PATCH "0")

set (CPACK_PACKAGE_INSTALL_DIRECTORY "${PROJECT_NAME}_V${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")

set(CPACK_NSIS_DISPLAY_NAME "${PROJECT_NAME}_V${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
set(CPACK_NSIS_PACKAGE_NAME "${PROJECT_NAME}_V${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
set(CPACK_NSIS_MODIFY_PATH "ON")
set(CPACK_NSIS_ENABLE_UNINSTALL_BEFORE_INSTALL "ON")
set(CPACK_NSIS_MUI_ICON "${CMAKE_CURRENT_SOURCE_DIR}/notepad--.ico")
set(CPACK_NSIS_MUI_UNIICON "${CMAKE_CURRENT_SOURCE_DIR}/notepad--.ico")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License")

set (CPACK_PACKAGE_EXECUTABLES "${PROJECT_NAME}" "${PROJECT_NAME}" )

set (CPACK_NSIS_EXTRA_INSTALL_COMMANDS "
        WriteRegStr SHCTX 'Software\\\\Microsoft\\\\Windows\\\\CurrentVersion\\\\App Paths\\\\${PROJECT_NAME}' '' '$INSTDIR\\\\${PROJECT_NAME}.exe'
        WriteRegStr SHCTX 'Software\\\\Classes\\\\${PROJECT_NAME}\\\\shell' '' 'open'
        WriteRegStr SHCTX 'Software\\\\Classes\\\\${PROJECT_NAME}\\\\shell\\\\open\\\\command' '' '$\\\'$INSTDIR\\\\${PROJECT_NAME}.exe$\\\' $\\\'%1$\\\''
        WriteRegStr SHCTX 'Software\\\\Classes\\\\.txt\\\\OpenWithProgids' '${PROJECT_NAME}' ''
        WriteRegStr SHCTX 'Software\\\\Classes\\\\*\\\\shell\\\\${PROJECT_NAME}' '' 'Edit with ${PROJECT_NAME}'
        WriteRegStr SHCTX 'Software\\\\Classes\\\\*\\\\shell\\\\${PROJECT_NAME}' 'Icon' '$INSTDIR\\\\${PROJECT_NAME}.exe'
        WriteRegStr SHCTX 'Software\\\\Classes\\\\*\\\\shell\\\\${PROJECT_NAME}\\\\command' '' '$\\\'$INSTDIR\\\\${PROJECT_NAME}.exe$\\\' $\\\'%1$\\\''
     ")

set (CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS "
        Delete '$DESKTOP\\\\${PROJECT_NAME}.lnk'
        Delete '$SMPROGRAMS\\\\${PROJECT_NAME}.lnk'
        DeleteRegKey SHCTX 'Software\\\\Classes\\\\*\\\\shell\\\\${PROJECT_NAME}'
        DeleteRegKey SHCTX 'Software\\\\Microsoft\\\\Windows\\\\CurrentVersion\\\\App Paths\\\\${PROJECT_NAME}.exe' '' '$INSTDIR\\\\${PROJECT_NAME}.exe'
        DeleteRegKey SHCTX 'Software\\\\${PROJECT_NAME}\'
        DeleteRegValue SHCTX 'Software\\\\Classes\\\\.txt\\\\OpenWithProgids' '${PROJECT_NAME}'
        DeleteRegKey SHCTX 'Software\\\\Classes\\\\${PROJECT_NAME}'
     ")

# 创建任意快捷方式 
#CreateShortCut "$DESKTOP\${PROJECT_NAME}.lnk" "$INSTDIR\release\${PROJECT_NAME}.exe"
# ;创建开始菜单快捷方式  
# ExecShell "startpin" "$DESKTOP\${PROJECT_NAME}.lnk"  
# ;创建任务栏快捷方式  
# ExecShell "taskbarpin" "$DESKTOP\${PROJECT_NAME}.lnk"
# list(APPEND CPACK_NSIS_EXTRA_INSTALL_COMMANDS "CreateShortCut \\\\\"$DESKTOP\\\\${PROJECT_NAME}.lnk\\\\\" \\\\\"$INSTDIR\\\\release\\\\${PROJECT_NAME}.exe\\\\\"")
# list(APPEND CPACK_NSIS_EXTRA_INSTALL_COMMANDS "ExecShell \\\\\"startpin\\\\\" \\\\\"$DESKTOP\\\\${PROJECT_NAME}.lnk\\\\\"")
# list(APPEND CPACK_NSIS_EXTRA_INSTALL_COMMANDS "ExecShell \\\\\"taskbarpin\\\\\" \\\\\"$DESKTOP\\\\${PROJECT_NAME}.lnk\\\\\"")

# ;删除开始菜单快捷方式  
# ExecShell "startunpin" "$DESKTOP\${PROJECT_NAME}.lnk"  
# ;删除任务栏快捷方式  
# ExecShell "taskbarunpin" "$DESKTOP\${PROJECT_NAME}.lnk"
# 删除桌面的快捷方式
# Delete "$DESKTOP\${PRODUCT_NAME}.lnk"
# list(APPEND CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS "ExecShell \\\\\"startunpin\\\\\" \\\\\"$DESKTOP\\\\${PROJECT_NAME}.lnk\\\\\"")
# list(APPEND CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS "ExecShell \\\\\"taskbarunpin\\\\\" \\\\\"$DESKTOP\\\\${PROJECT_NAME}.lnk\\\\\"")
# list(APPEND CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS "Delete \\\\\"$DESKTOP\\\\${PRODUCT_NAME}.lnk\\\\\"")
