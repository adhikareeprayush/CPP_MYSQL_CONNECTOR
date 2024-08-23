cmake_minimum_required(VERSION 3.28)
project(CPP_MYSQL_CONNECTOR)

set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(CPP_MYSQL_CONNECTOR main.cpp)

# Include directories
include_directories("C:/Program Files/MySQL/MySQL Server 9.0/include")
include_directories("C:/Program Files/MySQL/MySQL Server 9.0/lib")

# Link the MySQL library directly with the full path
target_link_libraries(CPP_MYSQL_CONNECTOR "C:/Program Files/MySQL/MySQL Server 9.0/lib/libmysql.lib")

