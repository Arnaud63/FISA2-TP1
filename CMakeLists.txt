
cmake_minimum_required( VERSION 3.16 )

project( TP1 VERSION 1.0.0 )

message( STATUS "**** Configuring ${PROJECT_NAME} version ${PROJECT_VERSION} ****")

set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

add_compile_options( -Wall -Werror -Wno-deprecated )

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin/${CMAKE_BUILD_TYPE} )
set( LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib/${CMAKE_BUILD_TYPE} )

<<<<<<< HEAD
SET( CMAKE_AUTOMOC ON )
SET( CMAKE_AUTORCC ON )
list (APPEND CMAKE_PREFIX_PATH "~/Qt/6.6.1/gcc_64/lib/cmake/")
FIND_PACKAGE( Qt6 REQUIRED COMPONENTS Core Widgets )
=======
set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTORCC ON )
find_package( Qt6 REQUIRED COMPONENTS Core Widgets )
>>>>>>> f5055168bac307f815c710ca416b12066f6e7261

enable_testing()

add_subdirectory( src )
add_subdirectory( test_unit )
