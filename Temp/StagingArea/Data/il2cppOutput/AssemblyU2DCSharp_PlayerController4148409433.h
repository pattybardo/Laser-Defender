#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::adjustSpeed
	float ___adjustSpeed_2;
	// System.Single PlayerController::padding
	float ___padding_3;
	// System.Single PlayerController::laserSpeed
	float ___laserSpeed_4;
	// System.Single PlayerController::fireRate
	float ___fireRate_5;
	// System.Single PlayerController::health
	float ___health_6;
	// UnityEngine.Rigidbody2D PlayerController::laser
	Rigidbody2D_t502193897 * ___laser_7;
	// UnityEngine.AudioClip PlayerController::loseSound
	AudioClip_t1932558630 * ___loseSound_8;
	// System.Single PlayerController::xmin
	float ___xmin_9;
	// System.Single PlayerController::xmax
	float ___xmax_10;

public:
	inline static int32_t get_offset_of_adjustSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___adjustSpeed_2)); }
	inline float get_adjustSpeed_2() const { return ___adjustSpeed_2; }
	inline float* get_address_of_adjustSpeed_2() { return &___adjustSpeed_2; }
	inline void set_adjustSpeed_2(float value)
	{
		___adjustSpeed_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___padding_3)); }
	inline float get_padding_3() const { return ___padding_3; }
	inline float* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(float value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_laserSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___laserSpeed_4)); }
	inline float get_laserSpeed_4() const { return ___laserSpeed_4; }
	inline float* get_address_of_laserSpeed_4() { return &___laserSpeed_4; }
	inline void set_laserSpeed_4(float value)
	{
		___laserSpeed_4 = value;
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___health_6)); }
	inline float get_health_6() const { return ___health_6; }
	inline float* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(float value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_laser_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___laser_7)); }
	inline Rigidbody2D_t502193897 * get_laser_7() const { return ___laser_7; }
	inline Rigidbody2D_t502193897 ** get_address_of_laser_7() { return &___laser_7; }
	inline void set_laser_7(Rigidbody2D_t502193897 * value)
	{
		___laser_7 = value;
		Il2CppCodeGenWriteBarrier(&___laser_7, value);
	}

	inline static int32_t get_offset_of_loseSound_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___loseSound_8)); }
	inline AudioClip_t1932558630 * get_loseSound_8() const { return ___loseSound_8; }
	inline AudioClip_t1932558630 ** get_address_of_loseSound_8() { return &___loseSound_8; }
	inline void set_loseSound_8(AudioClip_t1932558630 * value)
	{
		___loseSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___loseSound_8, value);
	}

	inline static int32_t get_offset_of_xmin_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xmin_9)); }
	inline float get_xmin_9() const { return ___xmin_9; }
	inline float* get_address_of_xmin_9() { return &___xmin_9; }
	inline void set_xmin_9(float value)
	{
		___xmin_9 = value;
	}

	inline static int32_t get_offset_of_xmax_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xmax_10)); }
	inline float get_xmax_10() const { return ___xmax_10; }
	inline float* get_address_of_xmax_10() { return &___xmax_10; }
	inline void set_xmax_10(float value)
	{
		___xmax_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
