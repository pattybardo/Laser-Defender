#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Projectile
struct  Projectile_t4036506763  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Projectile::damage
	float ___damage_2;
	// UnityEngine.AudioClip Projectile::laserSound
	AudioClip_t1932558630 * ___laserSound_3;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___damage_2)); }
	inline float get_damage_2() const { return ___damage_2; }
	inline float* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(float value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_laserSound_3() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___laserSound_3)); }
	inline AudioClip_t1932558630 * get_laserSound_3() const { return ___laserSound_3; }
	inline AudioClip_t1932558630 ** get_address_of_laserSound_3() { return &___laserSound_3; }
	inline void set_laserSound_3(AudioClip_t1932558630 * value)
	{
		___laserSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___laserSound_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
