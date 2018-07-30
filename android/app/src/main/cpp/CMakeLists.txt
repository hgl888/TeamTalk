cmake_minimum_required(VERSION 3.4.1)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -fPIC -shared")


 MESSAGE(STATUS “begin compile speex”)

ADD_DEFINITIONS(-UHAVE_CONFIG_H)
ADD_DEFINITIONS(-DUSE_KISS_FFT)
ADD_DEFINITIONS(-DFIXED_POINT)
ADD_DEFINITIONS(-DEXPORT= )

add_library(speex SHARED
            speex_jni.cpp
           ./libspeex/bits.c
           ./libspeex/buffer.c
           ./libspeex/cb_search.c
           ./libspeex/exc_10_16_table.c
           ./libspeex/exc_10_32_table.c
           ./libspeex/exc_20_32_table.c
           ./libspeex/exc_5_256_table.c
           ./libspeex/exc_5_64_table.c
           ./libspeex/exc_8_128_table.c
           ./libspeex/fftwrap.c
           ./libspeex/filterbank.c
           ./libspeex/filters.c
           ./libspeex/gain_table.c
           ./libspeex/gain_table_lbr.c
           ./libspeex/hexc_10_32_table.c
           ./libspeex/hexc_table.c
           ./libspeex/high_lsp_tables.c
           ./libspeex/jitter.c
           ./libspeex/kiss_fft.c
           ./libspeex/kiss_fftr.c
           ./libspeex/lpc.c
           ./libspeex/lsp.c
           ./libspeex/lsp_tables_nb.c
           ./libspeex/ltp.c
           ./libspeex/mdf.c
           ./libspeex/modes.c
           ./libspeex/modes_wb.c
           ./libspeex/nb_celp.c
           ./libspeex/preprocess.c
           ./libspeex/quant_lsp.c
           ./libspeex/resample.c
           ./libspeex/sb_celp.c
           ./libspeex/scal.c
           ./libspeex/smallft.c
           ./libspeex/speex.c
           ./libspeex/speex_callbacks.c
           ./libspeex/speex_header.c
           ./libspeex/stereo.c
           ./libspeex/vbr.c
           ./libspeex/vq.c
           ./libspeex/window.c
            )

target_include_directories(speex PRIVATE
                           ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(speex log)

 MESSAGE(STATUS “end compile speex”)

#############

 MESSAGE(STATUS “security compile begin”)
 add_library(security SHARED
              libsecurity/aes_core.cpp
              libsecurity/base64.cpp
              libsecurity/md5.cpp
              libsecurity/security.cpp)

target_include_directories(security PRIVATE
                           ${CMAKE_SOURCE_DIR}/libsecurity)

target_link_libraries(security log)
 MESSAGE(STATUS “security compile end”)

 ##########

MESSAGE(STATUS “MagicSDK compile begin”)
add_library(MagicSDK SHARED
         MagicSDK.cpp
        bitmap/BitmapOperation.cpp
        bitmap/Conversion.cpp
        skinsmooth/MagicBeauty.cpp )

target_include_directories(MagicSDK PRIVATE
                        ${CMAKE_SOURCE_DIR})

target_link_libraries(MagicSDK log jnigraphics)
MESSAGE(STATUS “security compile end”)

