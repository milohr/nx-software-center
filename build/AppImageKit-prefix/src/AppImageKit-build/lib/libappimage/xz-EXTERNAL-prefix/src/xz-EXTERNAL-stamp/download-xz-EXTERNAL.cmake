# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

function(check_file_hash has_hash hash_is_good)
  if("${has_hash}" STREQUAL "")
    message(FATAL_ERROR "has_hash Can't be empty")
  endif()

  if("${hash_is_good}" STREQUAL "")
    message(FATAL_ERROR "hash_is_good Can't be empty")
  endif()

  if("SHA512" STREQUAL "")
    # No check
    set("${has_hash}" FALSE PARENT_SCOPE)
    set("${hash_is_good}" FALSE PARENT_SCOPE)
    return()
  endif()

  set("${has_hash}" TRUE PARENT_SCOPE)

  message(STATUS "verifying file...
       file='/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz'")

  file("SHA512" "/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz" actual_value)

  if(NOT "${actual_value}" STREQUAL "a5eb4f707cf31579d166a6f95dbac45cf7ea181036d1632b4f123a4072f502f8d57cd6e7d0588f0bf831a07b8fc4065d26589a25c399b95ddcf5f73435163da6")
    set("${hash_is_good}" FALSE PARENT_SCOPE)
    message(STATUS "SHA512 hash of
    /home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz
  does not match expected value
    expected: 'a5eb4f707cf31579d166a6f95dbac45cf7ea181036d1632b4f123a4072f502f8d57cd6e7d0588f0bf831a07b8fc4065d26589a25c399b95ddcf5f73435163da6'
      actual: '${actual_value}'")
  else()
    set("${hash_is_good}" TRUE PARENT_SCOPE)
  endif()
endfunction()

function(sleep_before_download attempt)
  if(attempt EQUAL 0)
    return()
  endif()

  if(attempt EQUAL 1)
    message(STATUS "Retrying...")
    return()
  endif()

  set(sleep_seconds 0)

  if(attempt EQUAL 2)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 3)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 4)
    set(sleep_seconds 15)
  elseif(attempt EQUAL 5)
    set(sleep_seconds 60)
  elseif(attempt EQUAL 6)
    set(sleep_seconds 90)
  elseif(attempt EQUAL 7)
    set(sleep_seconds 300)
  else()
    set(sleep_seconds 1200)
  endif()

  message(STATUS "Retry after ${sleep_seconds} seconds (attempt #${attempt}) ...")

  execute_process(COMMAND "${CMAKE_COMMAND}" -E sleep "${sleep_seconds}")
endfunction()

if("/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if("https://netcologne.dl.sourceforge.net/project/lzmautils/xz-5.2.3.tar.gz" STREQUAL "")
  message(FATAL_ERROR "REMOTE can't be empty")
endif()

if(EXISTS "/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz")
  check_file_hash(has_hash hash_is_good)
  if(has_hash)
    if(hash_is_good)
      message(STATUS "File already exists and hash match (skip download):
  file='/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz'
  SHA512='a5eb4f707cf31579d166a6f95dbac45cf7ea181036d1632b4f123a4072f502f8d57cd6e7d0588f0bf831a07b8fc4065d26589a25c399b95ddcf5f73435163da6'"
      )
      return()
    else()
      message(STATUS "File already exists but hash mismatch. Removing...")
      file(REMOVE "/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz")
    endif()
  else()
    message(STATUS "File already exists but no hash specified (use URL_HASH):
  file='/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz'
Old file will be removed and new file downloaded from URL."
    )
    file(REMOVE "/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz")
  endif()
endif()

set(retry_number 5)

message(STATUS "Downloading...
   dst='/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz'
   timeout='none'"
)

foreach(i RANGE ${retry_number})
  sleep_before_download(${i})

  foreach(url https://netcologne.dl.sourceforge.net/project/lzmautils/xz-5.2.3.tar.gz)
    message(STATUS "Using src='${url}'")

    
    
    
    

    file(
        DOWNLOAD
        "${url}" "/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz"
        SHOW_PROGRESS
        # no TIMEOUT
        STATUS status
        LOG log
        
        
    )

    list(GET status 0 status_code)
    list(GET status 1 status_string)

    if(status_code EQUAL 0)
      check_file_hash(has_hash hash_is_good)
      if(has_hash AND NOT hash_is_good)
        message(STATUS "Hash mismatch, removing...")
        file(REMOVE "/home/camilo/Coding/qml/nx-software-center/build/AppImageKit-prefix/src/AppImageKit-build/lib/libappimage/xz-EXTERNAL-prefix/src/xz-5.2.3.tar.gz")
      else()
        message(STATUS "Downloading... done")
        return()
      endif()
    else()
      string(APPEND logFailedURLs "error: downloading '${url}' failed
       status_code: ${status_code}
       status_string: ${status_string}
       log:
       --- LOG BEGIN ---
       ${log}
       --- LOG END ---
       "
      )
    endif()
  endforeach()
endforeach()

message(FATAL_ERROR "Each download failed!
  ${logFailedURLs}
  "
)
