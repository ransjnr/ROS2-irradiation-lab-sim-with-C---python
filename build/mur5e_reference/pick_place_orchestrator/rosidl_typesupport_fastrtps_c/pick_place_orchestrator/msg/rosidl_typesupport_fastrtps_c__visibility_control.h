// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PICK_PLACE_ORCHESTRATOR__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define PICK_PLACE_ORCHESTRATOR__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_pick_place_orchestrator __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pick_place_orchestrator __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_pick_place_orchestrator __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pick_place_orchestrator __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_pick_place_orchestrator
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pick_place_orchestrator ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_pick_place_orchestrator
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pick_place_orchestrator ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pick_place_orchestrator
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_pick_place_orchestrator __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pick_place_orchestrator
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pick_place_orchestrator __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pick_place_orchestrator
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // PICK_PLACE_ORCHESTRATOR__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
