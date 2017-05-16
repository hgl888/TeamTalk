cmake_minimum_required(VERSION 2.6)
#cmake_minimum_required(VERSION 3.4.1)

PROJECT(fileserver)

AUX_SOURCE_DIRECTORY(./ SRC_LIST1)
AUX_SOURCE_DIRECTORY(../base/pb/protocol SRC_LIST2)

#SET(LIBRARY_OUTPUT_PATH ./)
SET(EXECUTABLE_OUTPUT_PATH  ./)
if(APPLE)
    SET(PB_LIB_DIR ../base/pb/lib/mac)
elseif(UNIX)
    SET(PB_LIB_DIR ../base/pb/lib/linux)
endif()


ADD_DEFINITIONS( -g -W -Wall -D_REENTRANT -D_FILE_OFFSET_BITS=64 -DAC_HAS_INFO
-DAC_HAS_WARNING -DAC_HAS_ERROR -DAC_HAS_CRITICAL -DTIXML_USE_STL
-DAC_HAS_DEBUG -DLINUX_DAEMON -std=c++11)

INCLUDE_DIRECTORIES(./ ../ ../base ../base/pb/protocol ../base/pb/)

#ADD_XXXX必须在TARGET_LINK_LIBRARIES前面，否则会报错
#ADD_LIBRARY(${PROJECTNAME} SHARED/STATIC ${SRC_LIST})


LINK_DIRECTORIES(./ ../base ../base/slog/lib ${PB_LIB_DIR})

#LINK_LIBRARIES(/root/TeamTalk/server/src/base/slog/lib/libslog.so)
#LINK_LIBRARIES(/root/TeamTalk/server/src/base/pb/lib/linux/libprotobuf-lite.a)

ADD_EXECUTABLE(file_server ${SRC_LIST1} ${SRC_LIST2})

#add_library(lib_slog SHARED IMPORTED )
#set_target_properties(lib_slog PROPERTIES IMPORTED_LOCATION
#        ${CMAKE_SOURCE_DIR}/../base/slog/lib/libslog.so)

TARGET_LINK_LIBRARIES(file_server pthread base slog protobuf-lite uuid )


 
