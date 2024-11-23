cmake_minimum_required(VERSION 3.16)
project(Humanoid_GUI VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)

find_package(QT NAMES Qt5 Qt6 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Bluetooth Gui Quick Quick3D QuickWidgets SerialPort Widgets)

qt_standard_project_setup()

qt_add_executable(Humanoid_GUI WIN32 MACOSX_BUNDLE
    Main3D.cpp



    dialog.cpp dialog.h dialog.ui

)
target_link_libraries(Humanoid_GUI PRIVATE
    Qt::Bluetooth
    Qt::Core
    Qt::Gui
    Qt::Quick
    Qt::Quick3D
    Qt::QuickWidgets
    Qt::SerialPort
    Qt::Widgets
)


# Resources:
set(resources_resource_files
    "Main3D.qml"
)

qt_add_resources(Humanoid_GUI "resources"
    PREFIX
        "/"
    FILES
        ${resources_resource_files}
)

if((QT_VERSION_MAJOR GREATER 4))
    target_link_libraries(Humanoid_GUI PRIVATE
        Qt::Widgets
    )
endif()

install(TARGETS Humanoid_GUI
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_generate_deploy_app_script(
    TARGET Humanoid_GUI
    FILENAME_VARIABLE deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
