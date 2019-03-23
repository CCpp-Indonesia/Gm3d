#ifndef CPPID_GM3D_VEC3_HPP
#define CPPID_GM3D_VEC3_HPP

#include "detail/basic_vector_nd.hpp"

namespace cppid::gm3d {

template<typename T>
using vec3 = detail::basic_vector_nd<T, 3>;

} // namespace cppid::gm3d

#endif
