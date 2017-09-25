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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// ScoreKeeper
struct ScoreKeeper_t1955354816;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1088811588  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Enemy::health
	float ___health_2;
	// System.Int32 Enemy::pointValue
	int32_t ___pointValue_3;
	// System.Single Enemy::laserSpeed
	float ___laserSpeed_4;
	// System.Single Enemy::shotsPerSecond
	float ___shotsPerSecond_5;
	// UnityEngine.AudioClip Enemy::loseSound
	AudioClip_t1932558630 * ___loseSound_6;
	// UnityEngine.Rigidbody2D Enemy::laser
	Rigidbody2D_t502193897 * ___laser_7;
	// ScoreKeeper Enemy::scoreKeeper
	ScoreKeeper_t1955354816 * ___scoreKeeper_8;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_pointValue_3() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___pointValue_3)); }
	inline int32_t get_pointValue_3() const { return ___pointValue_3; }
	inline int32_t* get_address_of_pointValue_3() { return &___pointValue_3; }
	inline void set_pointValue_3(int32_t value)
	{
		___pointValue_3 = value;
	}

	inline static int32_t get_offset_of_laserSpeed_4() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___laserSpeed_4)); }
	inline float get_laserSpeed_4() const { return ___laserSpeed_4; }
	inline float* get_address_of_laserSpeed_4() { return &___laserSpeed_4; }
	inline void set_laserSpeed_4(float value)
	{
		___laserSpeed_4 = value;
	}

	inline static int32_t get_offset_of_shotsPerSecond_5() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___shotsPerSecond_5)); }
	inline float get_shotsPerSecond_5() const { return ___shotsPerSecond_5; }
	inline float* get_address_of_shotsPerSecond_5() { return &___shotsPerSecond_5; }
	inline void set_shotsPerSecond_5(float value)
	{
		___shotsPerSecond_5 = value;
	}

	inline static int32_t get_offset_of_loseSound_6() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___loseSound_6)); }
	inline AudioClip_t1932558630 * get_loseSound_6() const { return ___loseSound_6; }
	inline AudioClip_t1932558630 ** get_address_of_loseSound_6() { return &___loseSound_6; }
	inline void set_loseSound_6(AudioClip_t1932558630 * value)
	{
		___loseSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___loseSound_6, value);
	}

	inline static int32_t get_offset_of_laser_7() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___laser_7)); }
	inline Rigidbody2D_t502193897 * get_laser_7() const { return ___laser_7; }
	inline Rigidbody2D_t502193897 ** get_address_of_laser_7() { return &___laser_7; }
	inline void set_laser_7(Rigidbody2D_t502193897 * value)
	{
		___laser_7 = value;
		Il2CppCodeGenWriteBarrier(&___laser_7, value);
	}

	inline static int32_t get_offset_of_scoreKeeper_8() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___scoreKeeper_8)); }
	inline ScoreKeeper_t1955354816 * get_scoreKeeper_8() const { return ___scoreKeeper_8; }
	inline ScoreKeeper_t1955354816 ** get_address_of_scoreKeeper_8() { return &___scoreKeeper_8; }
	inline void set_scoreKeeper_8(ScoreKeeper_t1955354816 * value)
	{
		___scoreKeeper_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
