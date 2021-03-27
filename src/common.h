#ifndef __COMMON_H__
#define __COMMON_H__

#include <memory>
#include <string>
#include <optional>
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <spdlog/spdlog.h>

#define CLASS_PTR(klassName) \
class klassName; \
using klassName ## UPtr = std::unique_ptr<klassName>; \
using klassName ## Ptr = std::shared_ptr<klassName>; \
using klassName ## WPtr = std::weak_ptr<klassName>;

CLASS_PTR(Shader);
// class shader; \
// using shaderUPtr = std::unique_ptr<shader>; \
// using shaderPtr = std::shared_ptr<shader>; \
// using shaderWPtr = std::weak_ptr<shader>;


std::optional<std::string> LoadTextFile(const std::string& filename);

#endif // __COMMON_H__