# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Honors_Project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Honors_Project_autogen.dir\\ParseCache.txt"
  "Honors_Project_autogen"
  )
endif()
