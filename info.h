/* generated by multigen */

typedef enum {
SPR_TROO,
SPR_SHTG,
SPR_PUNG,
SPR_PISG,
SPR_PISF,
SPR_SHTF,
SPR_CHGG,
SPR_CHGF,
SPR_MISG,
SPR_MISF,
SPR_SAWG,
SPR_PLSG,
SPR_PLSF,
SPR_BFGG,
SPR_BFGF,
SPR_BLUD,
SPR_PUFF,
SPR_BAL1,
SPR_BAL2,
SPR_BAL7,
SPR_PLSS,
SPR_PLSE,
SPR_MISL,
SPR_BFS1,
SPR_BFE1,
SPR_BFE2,
SPR_TFOG,
SPR_IFOG,
SPR_PLAY,
SPR_POSS,
SPR_SPOS,
SPR_SARG,
SPR_HEAD,
SPR_BOSS,
SPR_SKUL,
SPR_ARM1,
SPR_ARM2,
SPR_BAR1,
SPR_BEXP,
SPR_FCAN,
SPR_BON1,
SPR_BON2,
SPR_BKEY,
SPR_RKEY,
SPR_YKEY,
SPR_BSKU,
SPR_RSKU,
SPR_YSKU,
SPR_STIM,
SPR_MEDI,
SPR_SOUL,
SPR_PINV,
SPR_PSTR,
SPR_PINS,
SPR_SUIT,
SPR_PMAP,
SPR_PVIS,
SPR_CLIP,
SPR_AMMO,
SPR_ROCK,
SPR_BROK,
SPR_CELL,
SPR_CELP,
SPR_SHEL,
SPR_SBOX,
SPR_BPAK,
SPR_BFUG,
SPR_MGUN,
SPR_CSAW,
SPR_LAUN,
SPR_PLAS,
SPR_SHOT,
SPR_COLU,
SPR_SMT2,
SPR_POL2,
SPR_POL5,
SPR_POL4,
SPR_POL1,
SPR_GOR4,
SPR_GOR5,
SPR_SMIT,
SPR_COL2,
SPR_COL4,
SPR_CAND,
SPR_CBRA,
SPR_TRE1,
SPR_ELEC,
SPR_FSKU,
SPR_SMBT,
SPR_SMGT,
SPR_SMRT,
NUMSPRITES
} spritenum_t;

typedef enum {
S_NULL,
S_LIGHTDONE,
S_PUNCH,
S_PUNCHDOWN,
S_PUNCHUP,
S_PUNCH1,
S_PUNCH2,
S_PUNCH3,
S_PUNCH4,
S_PUNCH5,
S_PISTOL,
S_PISTOLDOWN,
S_PISTOLUP,
S_PISTOL1,
S_PISTOL2,
S_PISTOL3,
S_PISTOL4,
S_PISTOLFLASH,
S_SGUN,
S_SGUNDOWN,
S_SGUNUP,
S_SGUN1,
S_SGUN2,
S_SGUN3,
S_SGUN4,
S_SGUN5,
S_SGUN6,
S_SGUN7,
S_SGUN8,
S_SGUN9,
S_SGUNFLASH1,
S_SGUNFLASH2,
S_CHAIN,
S_CHAINDOWN,
S_CHAINUP,
S_CHAIN1,
S_CHAIN2,
S_CHAIN3,
S_CHAINFLASH1,
S_CHAINFLASH2,
S_MISSILE,
S_MISSILEDOWN,
S_MISSILEUP,
S_MISSILE1,
S_MISSILE2,
S_MISSILE3,
S_MISSILEFLASH1,
S_MISSILEFLASH2,
S_MISSILEFLASH3,
S_MISSILEFLASH4,
S_SAW,
S_SAWB,
S_SAWDOWN,
S_SAWUP,
S_SAW1,
S_SAW2,
S_SAW3,
S_PLASMA,
S_PLASMADOWN,
S_PLASMAUP,
S_PLASMA1,
S_PLASMA2,
S_PLASMAFLASH1,
S_PLASMAFLASH2,
S_BFG,
S_BFGDOWN,
S_BFGUP,
S_BFG1,
S_BFG2,
S_BFG3,
S_BFG4,
S_BFGFLASH1,
S_BFGFLASH2,
S_BLOOD1,
S_BLOOD2,
S_BLOOD3,
S_PUFF1,
S_PUFF2,
S_PUFF3,
S_PUFF4,
S_TBALL1,
S_TBALL2,
S_TBALLX1,
S_TBALLX2,
S_TBALLX3,
S_RBALL1,
S_RBALL2,
S_RBALLX1,
S_RBALLX2,
S_RBALLX3,
S_BRBALL1,
S_BRBALL2,
S_BRBALLX1,
S_BRBALLX2,
S_BRBALLX3,
S_PLASBALL,
S_PLASBALL2,
S_PLASEXP,
S_PLASEXP2,
S_PLASEXP3,
S_PLASEXP4,
S_PLASEXP5,
S_ROCKET,
S_BFGSHOT,
S_BFGSHOT2,
S_BFGLAND,
S_BFGLAND2,
S_BFGLAND3,
S_BFGLAND4,
S_BFGLAND5,
S_BFGLAND6,
S_BFGEXP,
S_BFGEXP2,
S_BFGEXP3,
S_BFGEXP4,
S_EXPLODE1,
S_EXPLODE2,
S_EXPLODE3,
S_TFOG,
S_TFOG01,
S_TFOG02,
S_TFOG2,
S_TFOG3,
S_TFOG4,
S_TFOG5,
S_TFOG6,
S_TFOG7,
S_TFOG8,
S_TFOG9,
S_TFOG10,
S_IFOG,
S_IFOG01,
S_IFOG02,
S_IFOG2,
S_IFOG3,
S_IFOG4,
S_IFOG5,
S_PLAY,
S_PLAY_RUN1,
S_PLAY_RUN2,
S_PLAY_RUN3,
S_PLAY_RUN4,
S_PLAY_ATK1,
S_PLAY_ATK2,
S_PLAY_PAIN,
S_PLAY_PAIN2,
S_PLAY_DIE1,
S_PLAY_DIE2,
S_PLAY_DIE3,
S_PLAY_DIE4,
S_PLAY_DIE5,
S_PLAY_DIE6,
S_PLAY_DIE7,
S_PLAY_XDIE1,
S_PLAY_XDIE2,
S_PLAY_XDIE3,
S_PLAY_XDIE4,
S_PLAY_XDIE5,
S_PLAY_XDIE6,
S_PLAY_XDIE7,
S_PLAY_XDIE8,
S_PLAY_XDIE9,
S_POSS_STND,
S_POSS_STND2,
S_POSS_RUN1,
S_POSS_RUN2,
S_POSS_RUN3,
S_POSS_RUN4,
S_POSS_RUN5,
S_POSS_RUN6,
S_POSS_RUN7,
S_POSS_RUN8,
S_POSS_ATK1,
S_POSS_ATK2,
S_POSS_ATK3,
S_POSS_PAIN,
S_POSS_PAIN2,
S_POSS_DIE1,
S_POSS_DIE2,
S_POSS_DIE3,
S_POSS_DIE4,
S_POSS_DIE5,
S_POSS_XDIE1,
S_POSS_XDIE2,
S_POSS_XDIE3,
S_POSS_XDIE4,
S_POSS_XDIE5,
S_POSS_XDIE6,
S_POSS_XDIE7,
S_POSS_XDIE8,
S_POSS_XDIE9,
S_SPOS_STND,
S_SPOS_STND2,
S_SPOS_RUN1,
S_SPOS_RUN2,
S_SPOS_RUN3,
S_SPOS_RUN4,
S_SPOS_RUN5,
S_SPOS_RUN6,
S_SPOS_RUN7,
S_SPOS_RUN8,
S_SPOS_ATK1,
S_SPOS_ATK2,
S_SPOS_ATK3,
S_SPOS_PAIN,
S_SPOS_PAIN2,
S_SPOS_DIE1,
S_SPOS_DIE2,
S_SPOS_DIE3,
S_SPOS_DIE4,
S_SPOS_DIE5,
S_SPOS_XDIE1,
S_SPOS_XDIE2,
S_SPOS_XDIE3,
S_SPOS_XDIE4,
S_SPOS_XDIE5,
S_SPOS_XDIE6,
S_SPOS_XDIE7,
S_SPOS_XDIE8,
S_SPOS_XDIE9,
S_TROO_STND,
S_TROO_STND2,
S_TROO_RUN1,
S_TROO_RUN2,
S_TROO_RUN3,
S_TROO_RUN4,
S_TROO_RUN5,
S_TROO_RUN6,
S_TROO_RUN7,
S_TROO_RUN8,
S_TROO_ATK1,
S_TROO_ATK2,
S_TROO_ATK3,
S_TROO_PAIN,
S_TROO_PAIN2,
S_TROO_DIE1,
S_TROO_DIE2,
S_TROO_DIE3,
S_TROO_DIE4,
S_TROO_DIE5,
S_TROO_XDIE1,
S_TROO_XDIE2,
S_TROO_XDIE3,
S_TROO_XDIE4,
S_TROO_XDIE5,
S_TROO_XDIE6,
S_TROO_XDIE7,
S_TROO_XDIE8,
S_SARG_STND,
S_SARG_STND2,
S_SARG_RUN1,
S_SARG_RUN2,
S_SARG_RUN3,
S_SARG_RUN4,
S_SARG_RUN5,
S_SARG_RUN6,
S_SARG_RUN7,
S_SARG_RUN8,
S_SARG_ATK1,
S_SARG_ATK2,
S_SARG_ATK3,
S_SARG_PAIN,
S_SARG_PAIN2,
S_SARG_DIE1,
S_SARG_DIE2,
S_SARG_DIE3,
S_SARG_DIE4,
S_SARG_DIE5,
S_SARG_DIE6,
S_HEAD_STND,
S_HEAD_RUN1,
S_HEAD_ATK1,
S_HEAD_ATK2,
S_HEAD_ATK3,
S_HEAD_PAIN,
S_HEAD_PAIN2,
S_HEAD_PAIN3,
S_HEAD_DIE1,
S_HEAD_DIE2,
S_HEAD_DIE3,
S_HEAD_DIE4,
S_HEAD_DIE5,
S_HEAD_DIE6,
S_BOSS_STND,
S_BOSS_STND2,
S_BOSS_RUN1,
S_BOSS_RUN2,
S_BOSS_RUN3,
S_BOSS_RUN4,
S_BOSS_RUN5,
S_BOSS_RUN6,
S_BOSS_RUN7,
S_BOSS_RUN8,
S_BOSS_ATK1,
S_BOSS_ATK2,
S_BOSS_ATK3,
S_BOSS_PAIN,
S_BOSS_PAIN2,
S_BOSS_DIE1,
S_BOSS_DIE2,
S_BOSS_DIE3,
S_BOSS_DIE4,
S_BOSS_DIE5,
S_BOSS_DIE6,
S_BOSS_DIE7,
S_SKULL_STND,
S_SKULL_STND2,
S_SKULL_RUN1,
S_SKULL_RUN2,
S_SKULL_ATK1,
S_SKULL_ATK2,
S_SKULL_ATK3,
S_SKULL_ATK4,
S_SKULL_PAIN,
S_SKULL_PAIN2,
S_SKULL_DIE1,
S_SKULL_DIE2,
S_SKULL_DIE3,
S_SKULL_DIE4,
S_SKULL_DIE5,
S_SKULL_DIE6,
S_ARM1,
S_ARM1A,
S_ARM2,
S_ARM2A,
S_BAR1,
S_BAR2,
S_BEXP,
S_BEXP2,
S_BEXP3,
S_BEXP4,
S_BEXP5,
S_BBAR1,
S_BBAR2,
S_BBAR3,
S_BON1,
S_BON1A,
S_BON1B,
S_BON1C,
S_BON1D,
S_BON1E,
S_BON2,
S_BON2A,
S_BON2B,
S_BON2C,
S_BON2D,
S_BON2E,
S_BKEY,
S_BKEY2,
S_RKEY,
S_RKEY2,
S_YKEY,
S_YKEY2,
S_BSKULL,
S_BSKULL2,
S_RSKULL,
S_RSKULL2,
S_YSKULL,
S_YSKULL2,
S_STIM,
S_MEDI,
S_SOUL,
S_SOUL2,
S_SOUL3,
S_SOUL4,
S_SOUL5,
S_SOUL6,
S_PINV,
S_PINV2,
S_PINV3,
S_PINV4,
S_PSTR,
S_PINS,
S_PINS2,
S_PINS3,
S_PINS4,
S_SUIT,
S_PMAP,
S_PMAP2,
S_PMAP3,
S_PMAP4,
S_PMAP5,
S_PMAP6,
S_PVIS,
S_PVIS2,
S_CLIP,
S_AMMO,
S_ROCK,
S_BROK,
S_CELL,
S_CELP,
S_SHEL,
S_SBOX,
S_BPAK,
S_BFUG,
S_MGUN,
S_CSAW,
S_LAUN,
S_PLAS,
S_SHOT,
S_COLU,
S_STALAG,
S_DEADTORSO,
S_DEADBOTTOM,
S_HEADSONSTICK,
S_GIBS,
S_HEADONASTICK,
S_DEADSTICK,
S_MEAT4,
S_MEAT5,
S_STALAGTITE,
S_SHRTGRNCOL,
S_SHRTREDCOL,
S_CANDLESTIK,
S_CANDELABRA,
S_TORCHTREE,
S_TECHPILLAR,
S_FLOATSKULL,
S_FLOATSKULL2,
S_FLOATSKULL3,
S_BTORCHSHRT,
S_BTORCHSHRT2,
S_BTORCHSHRT3,
S_BTORCHSHRT4,
S_GTORCHSHRT,
S_GTORCHSHRT2,
S_GTORCHSHRT3,
S_GTORCHSHRT4,
S_RTORCHSHRT,
S_RTORCHSHRT2,
S_RTORCHSHRT3,
S_RTORCHSHRT4,
NUMSTATES
} statenum_t;

typedef struct
{
	 uint16_t	sprite;
	 uint16_t	frame;
	 int16_t	tics;
	 uint16_t	nextstate;
	 void		(*action) ();
} state_t;

extern const state_t	states[NUMSTATES];
extern const char * const sprnames[NUMSPRITES];


typedef enum {
MT_PLAYER,
MT_POSSESSED,
MT_SHOTGUY,
MT_TROOP,
MT_SERGEANT,
MT_SHADOWS,
MT_HEAD,
MT_BRUISER,
MT_SKULL,
MT_BARREL,
MT_TROOPSHOT,
MT_HEADSHOT,
MT_BRUISERSHOT,
MT_ROCKET,
MT_PLASMA,
MT_BFG,
MT_PUFF,
MT_BLOOD,
MT_TFOG,
MT_IFOG,
MT_TELEPORTMAN,
MT_EXTRABFG,
MT_MISC0,
MT_MISC1,
MT_MISC2,
MT_MISC3,
MT_MISC4,
MT_MISC5,
MT_MISC6,
MT_MISC7,
MT_MISC8,
MT_MISC9,
MT_MISC10,
MT_MISC11,
MT_MISC12,
MT_INV,
MT_MISC13,
MT_INS,
MT_MISC14,
MT_MISC15,
MT_MISC16,
MT_CLIP,
MT_MISC17,
MT_MISC18,
MT_MISC19,
MT_MISC20,
MT_MISC21,
MT_MISC22,
MT_MISC23,
MT_MISC24,
MT_MISC25,
MT_CHAINGUN,
MT_MISC26,
MT_MISC27,
MT_MISC28,
MT_SHOTGUN,
MT_MISC29,
MT_MISC30,
MT_MISC31,
MT_MISC32,
MT_MISC33,
MT_MISC34,
MT_MISC35,
MT_MISC36,
MT_MISC37,
MT_MISC38,
MT_MISC39,
MT_MISC40,
MT_MISC41,
MT_MISC42,
MT_MISC43,
MT_MISC44,
MT_MISC45,
MT_MISC46,
MT_MISC47,
MT_MISC48,
MT_MISC49,
MT_MISC50,
MT_MISC51,
MT_MISC52,
MT_MISC53,
MT_MISC54,
NUMMOBJTYPES} mobjtype_t;

typedef struct {
	int16_t		doomednum;
	uint16_t	spawnstate;
	int16_t		spawnhealth;
	uint16_t	seestate;
	uint16_t	seesound;
	uint16_t	reactiontime;
	uint16_t	attacksound;
	uint16_t	painstate;
	uint16_t	painchance;
	uint16_t	painsound;
	uint16_t	meleestate;
	uint16_t	missilestate;
	uint16_t	deathstate;
	uint16_t	xdeathstate;
	uint16_t	deathsound;
	int		speed;
	int		radius;
	int		height;
	uint16_t	mass;
	uint16_t	damage;
	uint16_t	activesound;
	int		flags;
} mobjinfo_t;

extern const mobjinfo_t mobjinfo[NUMMOBJTYPES];

