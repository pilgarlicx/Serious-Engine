/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#line 4 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"

#include "StdH.h"
#include "Models/Items/ItemHolder/ItemHolder.h"

#include <EntitiesMP/PowerUpItem.h>
#include <EntitiesMP/PowerUpItem_tables.h>
CEntityEvent *EPowerUp::MakeCopy(void) { CEntityEvent *peeCopy = new EPowerUp(*this); return peeCopy;}
EPowerUp::EPowerUp() : CEntityEvent(EVENTCODE_EPowerUp) {;
 ClearToDefault(puitType);
};
void CPowerUpItem::SetDefaultProperties(void) {
  m_puitType = PUIT_INVULNER ;
  CItem::SetDefaultProperties();
}
  
#line 77 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
void CPowerUpItem::Precache(void) 
#line 78 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 79 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType ){
#line 80 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : 
#line 81 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : 
#line 82 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : 
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : 
#line 84 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
PrecacheSound  (SOUND_PICKUP );break ;
#line 85 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : PrecacheSound  (SOUND_BOMB );break ;
#line 86 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 87 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
  
#line 90 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
BOOL CPowerUpItem::FillEntityStatistics(EntityStats * pes) 
#line 91 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 92 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_strName  = "PowerUp";
#line 93 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_ctCount  = 1;
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_ctAmmount  = 1;
#line 95 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_fValue  = 0;
#line 96 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
pes  -> es_iScore  = 0;
#line 98 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType ){
#line 99 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : pes  -> es_strName  += " invisibility";break ;
#line 100 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : pes  -> es_strName  += " invulnerability";break ;
#line 101 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : pes  -> es_strName  += " serious damage";break ;
#line 102 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : pes  -> es_strName  += " serious speed";break ;
#line 103 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : pes  -> es_strName  = "Serious Bomb!";
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 105 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
return TRUE ;
#line 106 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
  
#line 109 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
void CPowerUpItem::RenderParticles(void) 
#line 110 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 112 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(GetRenderType  () != CEntity  :: RT_MODEL  || GetSP  () -> sp_gmGameMode  > CSessionProperties  :: GM_COOPERATIVE  
#line 113 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
|| ! ShowItemParticles  ()){
#line 114 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
return ;
#line 115 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 116 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType ){
#line 117 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : 
#line 118 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 2.0f * 0.75f , 1.00f * 0.75f , PT_STAR08  , 320);
#line 119 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 120 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : 
#line 121 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 2.0f * 0.75f , 1.00f * 0.75f , PT_STAR08  , 192);
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : 
#line 124 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 1.0f * 0.75f , 0.75f * 0.75f , PT_STAR08  , 128);
#line 125 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 126 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : 
#line 127 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Particles_Stardust  (this  , 1.0f * 0.75f , 0.75f * 0.75f , PT_STAR08  , 128);
#line 128 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : 
#line 130 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Particles_Atomic  (this  , 2.0f * 0.75f , 2.0f * 0.95f , PT_STAR05  , 12);
#line 131 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 132 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 133 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
  
#line 136 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
void CPowerUpItem::SetProperties(void) 
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 138 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType )
#line 139 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 140 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : 
#line 141 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 142 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 143 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 144 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("Invisibility");
#line 145 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_INVISIB  , TEXTURE_REFLECTION_METAL  , 0 , TEXTURE_SPECULAR_STRONG  , 0);
#line 146 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 147 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75));
#line 148 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 149 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : 
#line 150 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 151 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 60.0f;
#line 153 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("Invulnerability");
#line 154 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_INVULNER  , TEXTURE_REFLECTION_GOLD  , TEXTURE_REFLECTION_METAL  , TEXTURE_SPECULAR_MEDIUM  , 0);
#line 155 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 156 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75));
#line 157 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 158 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : 
#line 159 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 160 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 161 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 162 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("SeriousDamage");
#line 163 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_DAMAGE  , TEXTURE_DAMAGE  , 0 , TEXTURE_SPECULAR_STRONG  , 0);
#line 164 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75));
#line 166 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 167 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : 
#line 168 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 169 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 170 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 171 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("SeriousSpeed");
#line 172 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_SPEED  , TEXTURE_SPEED  , 0 , 0 , 0);
#line 173 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 174 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 0.75f , 1.0f * 0.75f , 1.0f * 0.75));
#line 175 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 176 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : 
#line 177 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StartModelAnim  (ITEMHOLDER_ANIM_SMALLOSCILATION  , AOF_LOOPING  | AOF_NORESTART );
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ForceCollisionBoxIndexChange  (ITEMHOLDER_COLLISION_BOX_BIG );
#line 179 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fRespawnTime  = (m_fCustomRespawnTime  > 0) ? m_fCustomRespawnTime  : 40.0f;
#line 180 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_strDescription  . PrintF  ("Serious Bomb!");
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddItem  (MODEL_BOMB  , TEXTURE_BOMB  , 0 , 0 , 0);
#line 182 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
AddFlare  (MODEL_FLARE  , TEXTURE_FLARE  , FLOAT3D (0 , 0.2f , 0) , FLOAT3D (1 , 1 , 0.3f));
#line 183 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
StretchItem  (FLOAT3D (1.0f * 3.0f , 1.0f * 3.0f , 1.0f * 3.0));
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
break ;
#line 185 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 186 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
BOOL CPowerUpItem::
#line 191 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ItemCollected(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPowerUpItem_ItemCollected
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EPass, "CPowerUpItem::ItemCollected expects 'EPass' as input!");  const EPass &epass = (const EPass &)__eeInput;
#line 193 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ASSERT  (epass  . penOther  != NULL );
#line 196 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(m_puitType  == PUIT_BOMB ){
#line 197 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(IsOfClass  (epass  . penOther  , "Player")){
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(((CPlayer  &) * epass  . penOther ) . m_iSeriousBombCount  >= 3){
#line 199 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Return(STATE_CURRENT,EVoid());
#line 199 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
return TRUE;
#line 200 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 201 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 202 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 204 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(! (m_bPickupOnce  || m_bRespawn )){
#line 206 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
BOOL bWasPicked  = MarkPickedBy  (epass  . penOther );
#line 207 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(bWasPicked ){
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Return(STATE_CURRENT,EVoid());
#line 209 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
return TRUE;
#line 210 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 211 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
EPowerUp  ePowerUp ;
#line 215 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
ePowerUp  . puitType  = m_puitType ;
#line 217 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(epass  . penOther  -> ReceiveItem  (ePowerUp )){
#line 219 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(_pNetwork  -> IsPlayerLocal  (epass  . penOther ))
#line 220 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 221 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
switch(m_puitType )
#line 222 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
{
#line 223 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVISIB : IFeel_PlayEffect  ("PU_Invulnerability");break ;
#line 224 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_INVULNER : IFeel_PlayEffect  ("PU_Invulnerability");break ;
#line 225 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_DAMAGE : IFeel_PlayEffect  ("PU_Invulnerability");break ;
#line 226 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_SPEED : IFeel_PlayEffect  ("PU_FastShoes");break ;
#line 227 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
case PUIT_BOMB : IFeel_PlayEffect  ("PU_SeriousBomb");break ;
#line 228 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 232 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_soPick  . Set3DParameters  (50.0f , 1.0f , 2.0f , 1.0f);
#line 233 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if(m_puitType  == PUIT_BOMB ){
#line 234 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
PlaySound  (m_soPick  , SOUND_BOMB  , SOF_3D );
#line 235 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fPickSoundLen  = GetSoundLength  (SOUND_BOMB );
#line 236 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}else if(TRUE ){
#line 237 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
PlaySound  (m_soPick  , SOUND_PICKUP  , SOF_3D );
#line 238 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
m_fPickSoundLen  = GetSoundLength  (SOUND_PICKUP );
#line 239 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 240 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
if((m_bPickupOnce  || m_bRespawn )){Jump(STATE_CURRENT, STATE_CItem_ItemReceived, FALSE, EVoid());return TRUE;}
#line 241 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
}
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Return(STATE_CURRENT,EVoid());
#line 242 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
return TRUE; ASSERT(FALSE); return TRUE;};BOOL CPowerUpItem::
#line 246 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Main(const CEntityEvent &__eeInput) {
#undef STATE_CURRENT
#define STATE_CURRENT STATE_CPowerUpItem_Main
  ASSERTMSG(__eeInput.ee_slEvent==EVENTCODE_EVoid, "CPowerUpItem::Main expects 'EVoid' as input!");  const EVoid &e = (const EVoid &)__eeInput;
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Initialize  ();
#line 249 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
SetProperties  ();
#line 250 "D:/SE1_GPL/Sources/EntitiesMP/PowerUpItem.es"
Jump(STATE_CURRENT, STATE_CItem_ItemLoop, FALSE, EVoid());return TRUE; ASSERT(FALSE); return TRUE;};