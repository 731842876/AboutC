# 指定cmake最小版本
cmake_minimum_required(VERSION 3.20)
# 项目名
project(AboutC)
# c++版本
set(CMAKE_CXX_STANDARD 17)

message(STATUS "Main CMakeLists")

# .h文件路径
include_directories(${PROJECT_SOURCE_DIR}/grammar)
set(App_Main main.cpp)
add_executable(App_Main_exe ${App_Main})




# target_link_libraries(App_Main_exe )

# 编译子文件夹的 CMakeLists
# add_subdirectory(grammar)
# add_subdirectory()






# set(Runner )