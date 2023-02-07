
set(target_name "notepad--")

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets Concurrent Network PrintSupport XmlPatterns)

file(GLOB UI_SRC *.ui cceditor/*.ui)

file(GLOB SRC *.h *.cpp cceditor/*.h cceditor/*.cpp)

source_group("UI" FILES ${UI_SRC})

add_executable(${target_name} 
  ${SRC} 
  ${UI_SRC} 
  resource.qrc
)

target_include_directories(${target_name} PRIVATE 
  ${CMAKE_CURRENT_SOURCE_DIR}
  cceditor
)

target_link_libraries(${target_name} 
  Qt5::Gui 
  Qt5::Core 
  Qt5::Widgets 
  Qt5::Network  
  Qt5::Concurrent 
  Qt5::XmlPatterns
  Qt5::PrintSupport 
  qscintilla2_qt5 
)

if(WIN32)
   target_sources(${target_name} PRIVATE version.rc)
endif()

install(
  TARGETS ${target_name}
  DESTINATION "bin"
)

install(DIRECTORY  ${PROJECT_SOURCE_DIR}/src/linux/usr DESTINATION "/")

include(${PROJECT_SOURCE_DIR}/cmake/package_config.cmake) 
include(CPack)