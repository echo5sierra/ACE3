#define COMPONENT medical_feedback
#define COMPONENT_BEAUTIFIED Medical Feedback
#include "\z\ace\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MEDICAL_FEEDBACK
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MEDICAL_FEEDBACK
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MEDICAL_FEEDBACK
#endif

#include "\z\ace\addons\main\script_macros.hpp"
#include "\z\ace\addons\medical\script_macros_medical.hpp"

#define FX_PAIN_FADE_IN   0.3
#define FX_PAIN_FADE_OUT  0.7
#define FX_UNCON_FADE_IN  2.0
#define FX_UNCON_FADE_OUT 5.0

#define SND_HEARBEAT_FAST   (selectRandom ["ACE_heartbeat_fast_1", "ACE_heartbeat_fast_2", "ACE_heartbeat_fast_3"])
#define SND_HEARBEAT_NORMAL (selectRandom ["ACE_heartbeat_norm_1", "ACE_heartbeat_norm_2"])
#define SND_HEARBEAT_SLOW   (selectRandom ["ACE_heartbeat_slow_1", "ACE_heartbeat_slow_2"])