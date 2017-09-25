#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Projectile4036506763.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_ScoreKeeper1955354816.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_EnemySpawner2939277584.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_FinalScore3643325790.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "AssemblyU2DCSharp_MusicPlayer3223126890.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_Events_UnityAction_2_gen1903595547.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "AssemblyU2DCSharp_Position1661510619.h"
#include "AssemblyU2DCSharp_Shredder2348995045.h"

// Enemy
struct Enemy_t1088811588;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Projectile
struct Projectile_t4036506763;
// System.Object
struct Il2CppObject;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// ScoreKeeper
struct ScoreKeeper_t1955354816;
// System.String
struct String_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// EnemySpawner
struct EnemySpawner_t2939277584;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// FinalScore
struct FinalScore_t3643325790;
// UnityEngine.UI.Text
struct Text_t356221433;
// LevelManager
struct LevelManager_t3355282079;
// MusicPlayer
struct MusicPlayer_t3223126890;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1903595547;
// PlayerController
struct PlayerController_t4148409433;
// Position
struct Position_t1661510619;
// Shredder
struct Shredder_t2348995045;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisProjectile_t4036506763_m2682440950_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral370798906;
extern const uint32_t Enemy_OnTriggerEnter2D_m990861181_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2247053792;
extern const uint32_t Enemy_Start_m4271536181_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisRigidbody2D_t502193897_m3259360896_MethodInfo_var;
extern const uint32_t Enemy_ShootLaser_m1862317079_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4258467394;
extern const uint32_t EnemySpawner_SpawnUntilFull_m3550855007_MetadataUsageId;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern Il2CppClass* Transform_t3275118058_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_NextFreePosition_m2529217775_MetadataUsageId;
extern const uint32_t EnemySpawner_isFormationEmpty_m2261521957_MetadataUsageId;
extern Il2CppClass* ScoreKeeper_t1955354816_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern const uint32_t FinalScore_Start_m98013119_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral332901588;
extern const uint32_t LevelManager_LoadLevel_m3771066388_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4082968917;
extern const uint32_t LevelManager_QuitRequest_m3014183236_MetadataUsageId;
extern Il2CppClass* MusicPlayer_t3223126890_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3116614031;
extern const uint32_t MusicPlayer_Start_m704446533_MetadataUsageId;
extern Il2CppClass* UnityAction_2_t1903595547_il2cpp_TypeInfo_var;
extern const MethodInfo* MusicPlayer_OnLevelFinishedLoading_m1474839163_MethodInfo_var;
extern const MethodInfo* UnityAction_2__ctor_m1853379185_MethodInfo_var;
extern const uint32_t MusicPlayer_OnEnable_m1470877637_MetadataUsageId;
extern const uint32_t MusicPlayer_OnDisable_m808082630_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2579142483;
extern const uint32_t MusicPlayer_OnLevelFinishedLoading_m1474839163_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1121135156;
extern const uint32_t PlayerController_Update_m4228472513_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_MoveWithKeys_m2686895035_MetadataUsageId;
extern const uint32_t PlayerController_ShootLaser_m3899065872_MetadataUsageId;
extern const uint32_t PlayerController_OnTriggerEnter2D_m429568576_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4083360597;
extern Il2CppCodeGenString* _stringLiteral3914578444;
extern const uint32_t PlayerController_Die_m1474232922_MetadataUsageId;
extern const uint32_t Projectile_Hit_m3675573207_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var;
extern const uint32_t ScoreKeeper_Start_m4165573063_MetadataUsageId;
extern const uint32_t ScoreKeeper_Reset_m1609613736_MetadataUsageId;
extern const uint32_t ScoreKeeper_Score_m3693250700_MetadataUsageId;
extern const uint32_t Shredder_OnTriggerEnter2D_m2981370104_MetadataUsageId;



// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m1853379185_gshared (UnityAction_2_t1903595547 * __this, Il2CppObject * p0, IntPtr_t p1, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Projectile>()
#define GameObject_GetComponent_TisProjectile_t4036506763_m2682440950(__this, method) ((  Projectile_t4036506763 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2856731593 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Projectile::GetDamage()
extern "C"  float Projectile_GetDamage_m1205682293 (Projectile_t4036506763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::Hit()
extern "C"  void Projectile_Hit_m3675573207 (Projectile_t4036506763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void AudioSource_PlayClipAtPoint_m1513558507 (Il2CppObject * __this /* static, unused */, AudioClip_t1932558630 * p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreKeeper::Score(System.Int32)
extern "C"  void ScoreKeeper_Score_m3693250700 (ScoreKeeper_t1955354816 * __this, int32_t ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1756533147 * GameObject_Find_m836511350 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
#define GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323(__this, method) ((  ScoreKeeper_t1955354816 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m976649312 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::ShootLaser()
extern "C"  void Enemy_ShootLaser_m1862317079 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Rigidbody2D>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisRigidbody2D_t502193897_m3259360896(__this /* static, unused */, p0, p1, p2, method) ((  Rigidbody2D_t502193897 * (*) (Il2CppObject * /* static, unused */, Rigidbody2D_t502193897 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t2243707580  Vector3_get_down_m2372302126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Transform_TransformDirection_m1639585047 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m1064335535 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t2243707580  Vector3_get_right_m1884123822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m475173995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ViewportToWorldPoint_m3841010930 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemySpawner::SpawnUntilFull()
extern "C"  void EnemySpawner_SpawnUntilFull_m3550855007 (EnemySpawner_t2939277584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform EnemySpawner::NextFreePosition()
extern "C"  Transform_t3275118058 * EnemySpawner_NextFreePosition_m2529217775 (EnemySpawner_t2939277584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3281327839 (Transform_t3275118058 * __this, Transform_t3275118058 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m666563676 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawWireCube_m2061545338 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t2243707580  Vector3_get_left_m2429378123 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnemySpawner::isFormationEmpty()
extern "C"  bool EnemySpawner_isFormationEmpty_m2261521957 (EnemySpawner_t2939277584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m3479720613 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m881385315 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t356221433_m1342661039(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreKeeper::Reset()
extern "C"  void ScoreKeeper_Reset_m1609613736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m393995325 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, method) ((  AudioSource_t1135106623 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m738814682 (AudioSource_t1135106623 * __this, AudioClip_t1932558630 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m313035616 (AudioSource_t1135106623 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
#define UnityAction_2__ctor_m1853379185(__this, p0, p1, method) ((  void (*) (UnityAction_2_t1903595547 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_2__ctor_m1853379185_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C"  void SceneManager_add_sceneLoaded_m1191442002 (Il2CppObject * __this /* static, unused */, UnityAction_2_t1903595547 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C"  void SceneManager_remove_sceneLoaded_m2086364025 (Il2CppObject * __this /* static, unused */, UnityAction_2_t1903595547 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m3735680091 (Scene_t1684909666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MoveWithKeys()
extern "C"  void PlayerController_MoveWithKeys_m2686895035 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m3468262484 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m1008512962 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2508161963 (MonoBehaviour_t1158329972 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m2354025655 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t2243707580  Vector3_get_up_m2725403797 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Die()
extern "C"  void PlayerController_Die_m1474232922 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<LevelManager>()
#define GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828(__this, method) ((  LevelManager_t3355282079 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawWireSphere_m3395547818 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t356221433_m1217399699(__this, method) ((  Text_t356221433 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2474411757 (Enemy_t1088811588 * __this, const MethodInfo* method)
{
	{
		__this->set_health_2((150.0f));
		__this->set_pointValue_3(((int32_t)120));
		__this->set_laserSpeed_4((10.0f));
		__this->set_shotsPerSecond_5((0.5f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Enemy_OnTriggerEnter2D_m990861181 (Enemy_t1088811588 * __this, Collider2D_t646061738 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnTriggerEnter2D_m990861181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t4036506763 * V_0 = NULL;
	{
		Collider2D_t646061738 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		Projectile_t4036506763 * L_2 = GameObject_GetComponent_TisProjectile_t4036506763_m2682440950(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t4036506763_m2682440950_MethodInfo_var);
		V_0 = L_2;
		Projectile_t4036506763 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_007c;
		}
	}
	{
		float L_5 = __this->get_health_2();
		Projectile_t4036506763 * L_6 = V_0;
		float L_7 = Projectile_GetDamage_m1205682293(L_6, /*hidden argument*/NULL);
		__this->set_health_2(((float)((float)L_5-(float)L_7)));
		Projectile_t4036506763 * L_8 = V_0;
		Projectile_Hit_m3675573207(L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_health_2();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		AudioClip_t1932558630 * L_10 = __this->get_loseSound_6();
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Transform_get_position_m1104419803(L_11, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		ScoreKeeper_t1955354816 * L_13 = __this->get_scoreKeeper_8();
		int32_t L_14 = __this->get_pointValue_3();
		ScoreKeeper_Score_m3693250700(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_15 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral370798906, /*hidden argument*/NULL);
	}

IL_007c:
	{
		return;
	}
}
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m4271536181 (Enemy_t1088811588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m4271536181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral2247053792, /*hidden argument*/NULL);
		ScoreKeeper_t1955354816 * L_1 = GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323(L_0, /*hidden argument*/GameObject_GetComponent_TisScoreKeeper_t1955354816_m3883054323_MethodInfo_var);
		__this->set_scoreKeeper_8(L_1);
		return;
	}
}
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1726793138 (Enemy_t1088811588 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_shotsPerSecond_5();
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Random_get_value_m976649312(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		Enemy_ShootLaser_m1862317079(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Enemy::ShootLaser()
extern "C"  void Enemy_ShootLaser_m1862317079 (Enemy_t1088811588 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_ShootLaser_m1862317079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_t502193897 * V_0 = NULL;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2638739322(&L_2, (0.0f), (-0.8f), (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Rigidbody2D_t502193897 * L_4 = __this->get_laser_7();
		Vector3_t2243707580  L_5 = V_1;
		Quaternion_t4030073918  L_6 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Rigidbody2D_t502193897 * L_7 = Object_Instantiate_TisRigidbody2D_t502193897_m3259360896(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisRigidbody2D_t502193897_m3259360896_MethodInfo_var);
		V_0 = L_7;
		Rigidbody2D_t502193897 * L_8 = V_0;
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Vector3_get_down_m2372302126(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_laserSpeed_4();
		Vector3_t2243707580  L_12 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Transform_TransformDirection_m1639585047(L_9, L_12, /*hidden argument*/NULL);
		Vector2_t2243707579  L_14 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_8, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::.ctor()
extern "C"  void EnemySpawner__ctor_m835779921 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	{
		__this->set_width_3((10.0f));
		__this->set_height_4((5.0f));
		__this->set_formationSpeed_5((0.5f));
		__this->set_spawnDelay_6((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Start()
extern "C"  void EnemySpawner_Start_m1167211377 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Vector3_t2243707580  L_0 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_formationMovement_7(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_z_3();
		Camera_t189460977 * L_4 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(L_4, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_z_3();
		V_0 = ((float)((float)L_3-(float)L_7));
		Camera_t189460977 * L_8 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = V_0;
		Vector3_t2243707580  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m2638739322(&L_10, (0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11 = Camera_ViewportToWorldPoint_m3841010930(L_8, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Camera_t189460977 * L_12 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = V_0;
		Vector3_t2243707580  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m2638739322(&L_14, (1.0f), (0.0f), L_13, /*hidden argument*/NULL);
		Vector3_t2243707580  L_15 = Camera_ViewportToWorldPoint_m3841010930(L_12, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		float L_16 = (&V_3)->get_x_1();
		__this->set_xmin_8(L_16);
		float L_17 = (&V_4)->get_x_1();
		__this->set_xmax_9(L_17);
		EnemySpawner_SpawnUntilFull_m3550855007(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::SpawnUntilFull()
extern "C"  void EnemySpawner_SpawnUntilFull_m3550855007 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_SpawnUntilFull_m3550855007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	GameObject_t1756533147 * V_1 = NULL;
	{
		Transform_t3275118058 * L_0 = EnemySpawner_NextFreePosition_m2529217775(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t3275118058 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t1756533147 * L_3 = __this->get_enemyPrefab_2();
		Transform_t3275118058 * L_4 = V_0;
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_6 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_7 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_1 = L_7;
		GameObject_t1756533147 * L_8 = V_1;
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		Transform_t3275118058 * L_10 = V_0;
		Transform_set_parent_m3281327839(L_9, L_10, /*hidden argument*/NULL);
		float L_11 = __this->get_spawnDelay_6();
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral4258467394, L_11, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.Void EnemySpawner::OnDrawGizmos()
extern "C"  void EnemySpawner_OnDrawGizmos_m567863445 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_width_3();
		float L_3 = __this->get_height_4();
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2638739322(&L_4, L_2, L_3, (0.0f), /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m2061545338(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Update()
extern "C"  void EnemySpawner_Update_m3003275738 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = L_0;
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = __this->get_formationMovement_7();
		float L_4 = __this->get_formationSpeed_5();
		Vector3_t2243707580  L_5 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_1, L_8, /*hidden argument*/NULL);
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		float L_11 = (&V_0)->get_x_1();
		float L_12 = __this->get_width_3();
		float L_13 = __this->get_xmin_8();
		if ((!(((float)((float)((float)L_11-(float)((float)((float)L_12/(float)(2.0f)))))) <= ((float)L_13))))
		{
			goto IL_006c;
		}
	}
	{
		Vector3_t2243707580  L_14 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_formationMovement_7(L_14);
		goto IL_00a2;
	}

IL_006c:
	{
		Transform_t3275118058 * L_15 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16 = Transform_get_position_m1104419803(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		float L_17 = (&V_1)->get_x_1();
		float L_18 = __this->get_width_3();
		float L_19 = __this->get_xmax_9();
		if ((!(((float)((float)((float)L_17+(float)((float)((float)L_18/(float)(2.0f)))))) >= ((float)L_19))))
		{
			goto IL_00a2;
		}
	}
	{
		Vector3_t2243707580  L_20 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_formationMovement_7(L_20);
	}

IL_00a2:
	{
		bool L_21 = EnemySpawner_isFormationEmpty_m2261521957(__this, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b3;
		}
	}
	{
		EnemySpawner_SpawnUntilFull_m3550855007(__this, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
// UnityEngine.Transform EnemySpawner::NextFreePosition()
extern "C"  Transform_t3275118058 * EnemySpawner_NextFreePosition_m2529217775 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_NextFreePosition_m2529217775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Transform_t3275118058 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m3479720613(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3275118058 *)CastclassClass(L_3, Transform_t3275118058_il2cpp_TypeInfo_var));
			Transform_t3275118058 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m881385315(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			Transform_t3275118058 * L_6 = V_0;
			V_2 = L_6;
			IL2CPP_LEAVE(0x55, FINALLY_003f);
		}

IL_002f:
		{
			Il2CppObject * L_7 = V_1;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x53, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_9 = V_1;
			Il2CppObject * L_10 = ((Il2CppObject *)IsInst(L_9, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_10;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			Il2CppObject * L_11 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_11);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0053:
	{
		return (Transform_t3275118058 *)NULL;
	}

IL_0055:
	{
		Transform_t3275118058 * L_12 = V_2;
		return L_12;
	}
}
// System.Boolean EnemySpawner::isFormationEmpty()
extern "C"  bool EnemySpawner_isFormationEmpty_m2261521957 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_isFormationEmpty_m2261521957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3275118058 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	bool V_2 = false;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = Transform_GetEnumerator_m3479720613(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Il2CppObject * L_2 = V_1;
			Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3275118058 *)CastclassClass(L_3, Transform_t3275118058_il2cpp_TypeInfo_var));
			Transform_t3275118058 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m881385315(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x56, FINALLY_0040);
		}

IL_0030:
		{
			Il2CppObject * L_6 = V_1;
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_8 = V_1;
			Il2CppObject * L_9 = ((Il2CppObject *)IsInst(L_8, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_9;
			if (!L_9)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			Il2CppObject * L_10 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_10);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0054:
	{
		return (bool)1;
	}

IL_0056:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void FinalScore::.ctor()
extern "C"  void FinalScore__ctor_m308005515 (FinalScore_t3643325790 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScore::Start()
extern "C"  void FinalScore_Start_m98013119 (FinalScore_t3643325790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinalScore_Start_m98013119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t356221433 * V_0 = NULL;
	{
		Text_t356221433 * L_0 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		V_0 = L_0;
		Text_t356221433 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		String_t* L_2 = Int32_ToString_m2960866144((((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		ScoreKeeper_Reset_m1609613736(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3771066388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral332901588, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		Application_LoadLevel_m393995325(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3014183236 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3014183236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral4082968917, /*hidden argument*/NULL);
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m3135785557 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C"  void MusicPlayer_Start_m704446533 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Start_m704446533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_0 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_2 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral3116614031, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_6 = Component_GetComponent_TisAudioSource_t1135106623_m3920278003(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1135106623_m3920278003_MethodInfo_var);
		__this->set_music_6(L_6);
		AudioSource_t1135106623 * L_7 = __this->get_music_6();
		AudioClip_t1932558630 * L_8 = __this->get_startClip_3();
		AudioSource_set_clip_m738814682(L_7, L_8, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_9 = __this->get_music_6();
		AudioSource_set_loop_m313035616(L_9, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_10 = __this->get_music_6();
		AudioSource_Play_m353744792(L_10, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Void MusicPlayer::OnEnable()
extern "C"  void MusicPlayer_OnEnable_m1470877637 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_OnEnable_m1470877637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)MusicPlayer_OnLevelFinishedLoading_m1474839163_MethodInfo_var);
		UnityAction_2_t1903595547 * L_1 = (UnityAction_2_t1903595547 *)il2cpp_codegen_object_new(UnityAction_2_t1903595547_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m1853379185(L_1, __this, L_0, /*hidden argument*/UnityAction_2__ctor_m1853379185_MethodInfo_var);
		SceneManager_add_sceneLoaded_m1191442002(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnDisable()
extern "C"  void MusicPlayer_OnDisable_m808082630 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_OnDisable_m808082630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntPtr_t L_0;
		L_0.set_m_value_0((void*)(void*)MusicPlayer_OnLevelFinishedLoading_m1474839163_MethodInfo_var);
		UnityAction_2_t1903595547 * L_1 = (UnityAction_2_t1903595547 *)il2cpp_codegen_object_new(UnityAction_2_t1903595547_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m1853379185(L_1, __this, L_0, /*hidden argument*/UnityAction_2__ctor_m1853379185_MethodInfo_var);
		SceneManager_remove_sceneLoaded_m2086364025(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::OnLevelFinishedLoading(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void MusicPlayer_OnLevelFinishedLoading_m1474839163 (MusicPlayer_t3223126890 * __this, Scene_t1684909666  ___scene0, int32_t ___mode1, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_OnLevelFinishedLoading_m1474839163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Scene_get_buildIndex_m3735680091((&___scene0), /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral2579142483, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = Scene_get_buildIndex_m3735680091((&___scene0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		AudioSource_t1135106623 * L_5 = __this->get_music_6();
		AudioClip_t1932558630 * L_6 = __this->get_startClip_3();
		AudioSource_set_clip_m738814682(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_7 = Scene_get_buildIndex_m3735680091((&___scene0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0056;
		}
	}
	{
		AudioSource_t1135106623 * L_8 = __this->get_music_6();
		AudioClip_t1932558630 * L_9 = __this->get_gameClip_4();
		AudioSource_set_clip_m738814682(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0056:
	{
		int32_t L_10 = Scene_get_buildIndex_m3735680091((&___scene0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0074;
		}
	}
	{
		AudioSource_t1135106623 * L_11 = __this->get_music_6();
		AudioClip_t1932558630 * L_12 = __this->get_endClip_5();
		AudioSource_set_clip_m738814682(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0074:
	{
		AudioSource_t1135106623 * L_13 = __this->get_music_6();
		AudioSource_set_loop_m313035616(L_13, (bool)1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_14 = __this->get_music_6();
		AudioSource_Play_m353744792(L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m1372585940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		__this->set_padding_3((0.5f));
		__this->set_laserSpeed_4((10.0f));
		__this->set_fireRate_5((0.4f));
		__this->set_health_6((250.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		Camera_t189460977 * L_3 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_z_3();
		V_0 = ((float)((float)L_2-(float)L_6));
		Camera_t189460977 * L_7 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t2243707580  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2638739322(&L_9, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Camera_ViewportToWorldPoint_m3841010930(L_7, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Camera_t189460977 * L_11 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t2243707580  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2638739322(&L_13, (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Camera_ViewportToWorldPoint_m3841010930(L_11, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_3)->get_x_1();
		float L_16 = __this->get_padding_3();
		__this->set_xmin_9(((float)((float)L_15+(float)L_16)));
		float L_17 = (&V_4)->get_x_1();
		float L_18 = __this->get_padding_3();
		__this->set_xmax_10(((float)((float)L_17-(float)L_18)));
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m4228472513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerController_MoveWithKeys_m2686895035(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = __this->get_fireRate_5();
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral1121135156, (1.0E-07f), L_1, /*hidden argument*/NULL);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m1008512962(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m2508161963(__this, _stringLiteral1121135156, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void PlayerController::MoveWithKeys()
extern "C"  void PlayerController_MoveWithKeys_m2686895035 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_MoveWithKeys_m2686895035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = L_1;
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = __this->get_adjustSpeed_2();
		Vector3_t2243707580  L_6 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_2, L_9, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		Transform_t3275118058 * L_11 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_12 = L_11;
		Vector3_t2243707580  L_13 = Transform_get_position_m1104419803(L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = __this->get_adjustSpeed_2();
		Vector3_t2243707580  L_16 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t2243707580  L_19 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_12, L_19, /*hidden argument*/NULL);
	}

IL_0083:
	{
		Transform_t3275118058 * L_20 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_21 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_22 = Transform_get_position_m1104419803(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		float L_23 = (&V_0)->get_x_1();
		float L_24 = __this->get_xmin_9();
		float L_25 = __this->get_xmax_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_26 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		Transform_t3275118058 * L_27 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_28 = Transform_get_position_m1104419803(L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		float L_29 = (&V_1)->get_y_2();
		Transform_t3275118058 * L_30 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_31 = Transform_get_position_m1104419803(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		float L_32 = (&V_2)->get_z_3();
		Vector3_t2243707580  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m2638739322(&L_33, L_26, L_29, L_32, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_20, L_33, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::ShootLaser()
extern "C"  void PlayerController_ShootLaser_m3899065872 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_ShootLaser_m3899065872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rigidbody2D_t502193897 * V_1 = NULL;
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2638739322(&L_2, (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Rigidbody2D_t502193897 * L_4 = __this->get_laser_7();
		Vector3_t2243707580  L_5 = V_0;
		Quaternion_t4030073918  L_6 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Rigidbody2D_t502193897 * L_7 = Object_Instantiate_TisRigidbody2D_t502193897_m3259360896(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/Object_Instantiate_TisRigidbody2D_t502193897_m3259360896_MethodInfo_var);
		V_1 = L_7;
		Rigidbody2D_t502193897 * L_8 = V_1;
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Vector3_get_up_m2725403797(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_laserSpeed_4();
		Vector3_t2243707580  L_12 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Transform_TransformDirection_m1639585047(L_9, L_12, /*hidden argument*/NULL);
		Vector2_t2243707579  L_14 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_8, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m429568576 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter2D_m429568576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t4036506763 * V_0 = NULL;
	{
		Collider2D_t646061738 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		Projectile_t4036506763 * L_2 = GameObject_GetComponent_TisProjectile_t4036506763_m2682440950(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t4036506763_m2682440950_MethodInfo_var);
		V_0 = L_2;
		Projectile_t4036506763 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		float L_5 = __this->get_health_6();
		Projectile_t4036506763 * L_6 = V_0;
		float L_7 = Projectile_GetDamage_m1205682293(L_6, /*hidden argument*/NULL);
		__this->set_health_6(((float)((float)L_5-(float)L_7)));
		Projectile_t4036506763 * L_8 = V_0;
		Projectile_Hit_m3675573207(L_8, /*hidden argument*/NULL);
		float L_9 = __this->get_health_6();
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		PlayerController_Die_m1474232922(__this, /*hidden argument*/NULL);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral370798906, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void PlayerController::Die()
extern "C"  void PlayerController_Die_m1474232922 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Die_m1474232922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LevelManager_t3355282079 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral4083360597, /*hidden argument*/NULL);
		LevelManager_t3355282079 * L_1 = GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828(L_0, /*hidden argument*/GameObject_GetComponent_TisLevelManager_t3355282079_m4214666828_MethodInfo_var);
		V_0 = L_1;
		LevelManager_t3355282079 * L_2 = V_0;
		LevelManager_LoadLevel_m3771066388(L_2, _stringLiteral3914578444, /*hidden argument*/NULL);
		AudioClip_t1932558630 * L_3 = __this->get_loseSound_8();
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Transform_get_position_m1104419803(L_4, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_6 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::.ctor()
extern "C"  void Position__ctor_m1652562254 (Position_t1661510619 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::OnDrawGizmos()
extern "C"  void Position_OnDrawGizmos_m731341812 (Position_t1661510619 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m3395547818(NULL /*static, unused*/, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::.ctor()
extern "C"  void Projectile__ctor_m2042814794 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		__this->set_damage_2((100.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::Start()
extern "C"  void Projectile_Start_m384752054 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		AudioClip_t1932558630 * L_0 = __this->get_laserSound_3();
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Projectile::GetDamage()
extern "C"  float Projectile_GetDamage_m1205682293 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_damage_2();
		return L_0;
	}
}
// System.Void Projectile::Hit()
extern "C"  void Projectile_Hit_m3675573207 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_Hit_m3675573207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::.ctor()
extern "C"  void ScoreKeeper__ctor_m3627398059 (ScoreKeeper_t1955354816 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::Start()
extern "C"  void ScoreKeeper_Start_m4165573063 (ScoreKeeper_t1955354816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Start_m4165573063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		ScoreKeeper_Reset_m1609613736(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Text_t356221433 * L_1 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		__this->set_scoreUI_3(L_1);
		Text_t356221433 * L_2 = __this->get_scoreUI_3();
		String_t* L_3 = Int32_ToString_m2960866144((((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
// System.Void ScoreKeeper::Reset()
extern "C"  void ScoreKeeper_Reset_m1609613736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Reset_m1609613736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->set_score_2(0);
		return;
	}
}
// System.Void ScoreKeeper::Score(System.Int32)
extern "C"  void ScoreKeeper_Score_m3693250700 (ScoreKeeper_t1955354816 * __this, int32_t ___points0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Score_m3693250700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t1955354816_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_score_2();
		int32_t L_1 = ___points0;
		((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->set_score_2(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		Text_t356221433 * L_2 = __this->get_scoreUI_3();
		String_t* L_3 = Int32_ToString_m2960866144((((ScoreKeeper_t1955354816_StaticFields*)ScoreKeeper_t1955354816_il2cpp_TypeInfo_var->static_fields)->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
// System.Void ScoreKeeper::.cctor()
extern "C"  void ScoreKeeper__cctor_m3476028118 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Shredder::.ctor()
extern "C"  void Shredder__ctor_m1925123928 (Shredder_t2348995045 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shredder::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Shredder_OnTriggerEnter2D_m2981370104 (Shredder_t2348995045 * __this, Collider2D_t646061738 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shredder_OnTriggerEnter2D_m2981370104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
