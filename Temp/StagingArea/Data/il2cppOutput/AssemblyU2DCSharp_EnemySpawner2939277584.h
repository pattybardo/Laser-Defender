#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2939277584  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t1756533147 * ___enemyPrefab_2;
	// System.Single EnemySpawner::width
	float ___width_3;
	// System.Single EnemySpawner::height
	float ___height_4;
	// System.Single EnemySpawner::formationSpeed
	float ___formationSpeed_5;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_6;
	// UnityEngine.Vector3 EnemySpawner::formationMovement
	Vector3_t2243707580  ___formationMovement_7;
	// System.Single EnemySpawner::xmin
	float ___xmin_8;
	// System.Single EnemySpawner::xmax
	float ___xmax_9;
	// System.Boolean EnemySpawner::movingRight
	bool ___movingRight_10;
	// System.Boolean EnemySpawner::movingLeft
	bool ___movingLeft_11;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___enemyPrefab_2)); }
	inline GameObject_t1756533147 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t1756533147 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_formationSpeed_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___formationSpeed_5)); }
	inline float get_formationSpeed_5() const { return ___formationSpeed_5; }
	inline float* get_address_of_formationSpeed_5() { return &___formationSpeed_5; }
	inline void set_formationSpeed_5(float value)
	{
		___formationSpeed_5 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnDelay_6)); }
	inline float get_spawnDelay_6() const { return ___spawnDelay_6; }
	inline float* get_address_of_spawnDelay_6() { return &___spawnDelay_6; }
	inline void set_spawnDelay_6(float value)
	{
		___spawnDelay_6 = value;
	}

	inline static int32_t get_offset_of_formationMovement_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___formationMovement_7)); }
	inline Vector3_t2243707580  get_formationMovement_7() const { return ___formationMovement_7; }
	inline Vector3_t2243707580 * get_address_of_formationMovement_7() { return &___formationMovement_7; }
	inline void set_formationMovement_7(Vector3_t2243707580  value)
	{
		___formationMovement_7 = value;
	}

	inline static int32_t get_offset_of_xmin_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___xmin_8)); }
	inline float get_xmin_8() const { return ___xmin_8; }
	inline float* get_address_of_xmin_8() { return &___xmin_8; }
	inline void set_xmin_8(float value)
	{
		___xmin_8 = value;
	}

	inline static int32_t get_offset_of_xmax_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___xmax_9)); }
	inline float get_xmax_9() const { return ___xmax_9; }
	inline float* get_address_of_xmax_9() { return &___xmax_9; }
	inline void set_xmax_9(float value)
	{
		___xmax_9 = value;
	}

	inline static int32_t get_offset_of_movingRight_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___movingRight_10)); }
	inline bool get_movingRight_10() const { return ___movingRight_10; }
	inline bool* get_address_of_movingRight_10() { return &___movingRight_10; }
	inline void set_movingRight_10(bool value)
	{
		___movingRight_10 = value;
	}

	inline static int32_t get_offset_of_movingLeft_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___movingLeft_11)); }
	inline bool get_movingLeft_11() const { return ___movingLeft_11; }
	inline bool* get_address_of_movingLeft_11() { return &___movingLeft_11; }
	inline void set_movingLeft_11(bool value)
	{
		___movingLeft_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
