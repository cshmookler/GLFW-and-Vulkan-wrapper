#pragma once

// Standard includes
#include <cstdint>

// External includes
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace glfw {

// General constants
const bool ASSERT_SUCCESS = GLFW_FALSE;
const bool ASSERT_FAILURE = GLFW_TRUE;

// Window specific constants
GLFWwindow* const WINDOW_ID_NULL = nullptr;
const int MIN_WINDOW_WIDTH = 1;
const int MIN_WINDOW_HEIGHT = 1;
// Window display modes
const int NOT_CREATED = 0;
const int WINDOWED = 1;
const int FULL_SCREEN = 2;

// Monitor specific constants
GLFWmonitor* const MONITOR_ID_NULL = nullptr;
const float GAMMA_DEFAULT = 1.0;

// Window error codes
const int ERROR_WINDOW_ALREADY_CREATED = 0x00011001;
const int ERROR_INVALID_DIMENSIONS = 0x00011002;
const int ERROR_WINDOW_NOT_CREATED_BEFORE_OPERATION = 0x00011003;
const int ERROR_PARENT_WINDOW_NOT_CREATED = 0x00011004;

// Window error messages
const char* const ERROR_MESSAGE_WINDOW_ALREADY_CREATED =
    "The same window cannot be created twice";
const char* const ERROR_MESSAGE_INVALID_DIMENSIONS =
    "Invalid window dimensions";
const char* const ERROR_MESSAGE_WINDOW_NOT_CREATED_BEFORE_OPERATION =
    "The operation could not be performed because the window has not been "
    "created";
const char* const ERROR_MESSAGE_PARENT_WINDOW_NOT_CREATED =
    "A parent window must be created before its child window";

// Monitor error codes
const int ERROR_MONITOR_ID_NOT_INITIALIZED = 0x00012001;

// Monitor error messages
const char* const ERROR_MESSAGE_MONITOR_ID_NOT_INITIALIZED =
    "A monitor object must first be initialized before accessing or setting "
    "its members";

} // namespace glfw