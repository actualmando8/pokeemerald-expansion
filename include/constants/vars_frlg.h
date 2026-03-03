#ifndef GUARD_CONSTANTS_VARS_FRLG_H
#define GUARD_CONSTANTS_VARS_FRLG_H

#ifndef FRLG_VAR_OFFSET
#define FRLG_VAR_OFFSET 0
#endif




// If nonzero, counts down by one every step.
// When it hits zero, repel's effect wears off.
#define VAR_REPEL_STEP_COUNT_FRLG                (FRLG_VAR_OFFSET + 0x4020)

// Counts up every step. Wraps around at 128.
// When wraparound occurs, the friendship of
// every party poke gets a slight boost.
#define VAR_HAPPINESS_STEP_COUNTER          (FRLG_VAR_OFFSET + 0x4021)

// Counts up every step while a party Pokemon is
// poisoned. Wraps around at 5. When wraparound
// occurs, every party Pokemon with the PSN status
// takes 1 point of damage.
// This is a deviation from the typical rate in
// the series, which is 1 damage every 4 steps.
#define VAR_POISON_STEP_COUNTER_FRLG             (FRLG_VAR_OFFSET + 0x4022)

// Step counter. Caps at 1500. If you enter a map with
// renewable hidden items and this counter is capped,
// the counter resets to 0 and all renewable hidden
// item flags are resampled.
#define VAR_RENEWABLE_ITEM_STEP_COUNTER     (FRLG_VAR_OFFSET + 0x4023)

// Determines which wild encounter set to use in the
// Altering Cave. Incremented by Mystery Event.
// Wraps around at 10.
#define VAR_ALTERING_CAVE_WILD_SET_FRLG          (FRLG_VAR_OFFSET + 0x4024)

// Step counter set to 500 at game start. When you get
// a massage from Daisy, it resets to 0. Caps at 500.
#define VAR_MASSAGE_COOLDOWN_STEP_COUNTER   (FRLG_VAR_OFFSET + 0x4025)

// Step counter. Wraps around at 100. Used to
// determine whether the player has reached the
// triangle in time.
#define VAR_DEOXYS_INTERACTION_STEP_COUNTER (FRLG_VAR_OFFSET + 0x4026)

// Bits 0-11 are the number of mons in all boxes
// with the species sanity bit set.
// Bits 12-15 are the same for the player's party.
// Used by Quest Log.
#define VAR_QUEST_LOG_MON_COUNTS           (FRLG_VAR_OFFSET + 0x4027)
#define VAR_WONDER_NEWS_STEP_COUNTER_FRLG  (FRLG_VAR_OFFSET + 0x4028)
#define VAR_0x4029                         (FRLG_VAR_OFFSET + 0x4029)
#define VAR_0x402A                         (FRLG_VAR_OFFSET + 0x402A)
#define VAR_0x402B                         (FRLG_VAR_OFFSET + 0x402B)
#define VAR_DAYS_FRLG                      (FRLG_VAR_OFFSET + 0x402C) // was VAR_RESET_RTC_ENABLE
#define VAR_0x402D                         (FRLG_VAR_OFFSET + 0x402D)
#define VAR_0x402E                         (FRLG_VAR_OFFSET + 0x402E)

#define VAR_0x402F                         (FRLG_VAR_OFFSET + 0x402F)

#define VAR_ICE_STEP_COUNT_FRLG            (FRLG_VAR_OFFSET + 0x4030)
#define VAR_STARTER_MON_FRLG               (FRLG_VAR_OFFSET + 0x4031) // 0: Bulbasaur, 1: Squirtle, 2: Charmander
#define VAR_RESET_RTC_ENABLE_FRLG          (FRLG_VAR_OFFSET + 0x4032)
#define VAR_ENIGMA_BERRY_AVAILABLE_FRLG    (FRLG_VAR_OFFSET + 0x4033)

#define VAR_0x4034                         (FRLG_VAR_OFFSET + 0x4034)
#define VAR_RESORT_GOREGEOUS_STEP_COUNTER  (FRLG_VAR_OFFSET + 0x4035)
#define VAR_RESORT_GORGEOUS_REQUESTED_MON  (FRLG_VAR_OFFSET + 0x4036)
#define VAR_PC_BOX_TO_SEND_MON_FRLG        (FRLG_VAR_OFFSET + 0x4037)
#define VAR_FANCLUB_FAN_COUNTER_FRLG       (FRLG_VAR_OFFSET + 0x4038)
#define VAR_FANCLUB_LOSE_FAN_TIMER_FRLG    (FRLG_VAR_OFFSET + 0x4039)
#define VAR_ELEVATOR_FLOOR                 (FRLG_VAR_OFFSET + 0x403A)
#define VAR_RESORT_GORGEOUS_REWARD         (FRLG_VAR_OFFSET + 0x403B)
#define VAR_0x403C                         (FRLG_VAR_OFFSET + 0x403C) // Set to 0x0302, never read
#define VAR_HERACROSS_SIZE_RECORD          (FRLG_VAR_OFFSET + 0x403D)
#define VAR_DEOXYS_INTERACTION_NUM         (FRLG_VAR_OFFSET + 0x403E)
#define VAR_0x403F                         (FRLG_VAR_OFFSET + 0x403F)
#define VAR_MAGIKARP_SIZE_RECORD           (FRLG_VAR_OFFSET + 0x4040)
#define VAR_0x4041                         (FRLG_VAR_OFFSET + 0x4041)
#define VAR_TRAINER_CARD_MON_ICON_TINT_IDX (FRLG_VAR_OFFSET + 0x4042)
#define VAR_TRAINER_CARD_MON_ICON_1        (FRLG_VAR_OFFSET + 0x4043)
#define VAR_TRAINER_CARD_MON_ICON_2        (FRLG_VAR_OFFSET + 0x4044)
#define VAR_TRAINER_CARD_MON_ICON_3        (FRLG_VAR_OFFSET + 0x4045)
#define VAR_TRAINER_CARD_MON_ICON_4        (FRLG_VAR_OFFSET + 0x4046)
#define VAR_TRAINER_CARD_MON_ICON_5        (FRLG_VAR_OFFSET + 0x4047)
#define VAR_TRAINER_CARD_MON_ICON_6        (FRLG_VAR_OFFSET + 0x4048)
#define VAR_HOF_BRAG_STATE                 (FRLG_VAR_OFFSET + 0x4049)
#define VAR_EGG_BRAG_STATE                 (FRLG_VAR_OFFSET + 0x404A)
#define VAR_LINK_WIN_BRAG_STATE            (FRLG_VAR_OFFSET + 0x404B)
#define VAR_POKELOT_RND2                   (FRLG_VAR_OFFSET + 0x404C)
#define VAR_QL_ENTRANCE                    (FRLG_VAR_OFFSET + 0x404D)
#define VAR_NATIONAL_DEX_FRLG              (FRLG_VAR_OFFSET + 0x404E)
#define VAR_LOTAD_SIZE_RECORD              (FRLG_VAR_OFFSET + 0x404F)

// Map Scene
#define VAR_MAP_SCENE_PALLET_TOWN_OAK                                          (FRLG_VAR_OFFSET + 0x4050)
#define VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN                                    (FRLG_VAR_OFFSET + 0x4051)
#define VAR_MAP_SCENE_CERULEAN_CITY_RIVAL                                      (FRLG_VAR_OFFSET + 0x4052)
#define VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER                                (FRLG_VAR_OFFSET + 0x4053)
#define VAR_MAP_SCENE_ROUTE22                                                  (FRLG_VAR_OFFSET + 0x4054)
#define VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB                           (FRLG_VAR_OFFSET + 0x4055)
#define VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F                             (FRLG_VAR_OFFSET + 0x4056)
#define VAR_MAP_SCENE_VIRIDIAN_CITY_MART                                       (FRLG_VAR_OFFSET + 0x4057)
#define VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE                                 (FRLG_VAR_OFFSET + 0x4058)
#define VAR_MAP_SCENE_POKEMON_TOWER_6F                                         (FRLG_VAR_OFFSET + 0x4059)
#define VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR                                   (FRLG_VAR_OFFSET + 0x405A)
#define VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR                                     (FRLG_VAR_OFFSET + 0x405B)
#define VAR_MAP_SCENE_SILPH_CO_7F                                              (FRLG_VAR_OFFSET + 0x405C)
#define VAR_MAP_SCENE_POKEMON_TOWER_2F                                         (FRLG_VAR_OFFSET + 0x405D)
#define VAR_MAP_SCENE_ROUTE16                                                  (FRLG_VAR_OFFSET + 0x405E)
#define VAR_MAP_SCENE_ROUTE23                                                  (FRLG_VAR_OFFSET + 0x405F)
#define VAR_MAP_SCENE_SILPH_CO_11F                                             (FRLG_VAR_OFFSET + 0x4060)
#define VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F                                    (FRLG_VAR_OFFSET + 0x4061)
#define VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES                        (FRLG_VAR_OFFSET + 0x4062)
#define VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F                                      (FRLG_VAR_OFFSET + 0x4063)
#define VAR_MAP_SCENE_VICTORY_ROAD_1F                                          (FRLG_VAR_OFFSET + 0x4064)
#define VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1                                 (FRLG_VAR_OFFSET + 0x4065)
#define VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2                                 (FRLG_VAR_OFFSET + 0x4066)
#define VAR_MAP_SCENE_VICTORY_ROAD_3F                                          (FRLG_VAR_OFFSET + 0x4067)
#define VAR_MAP_SCENE_POKEMON_LEAGUE                                           (FRLG_VAR_OFFSET + 0x4068)
#define VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL (FRLG_VAR_OFFSET + 0x4069)
#define VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE (FRLG_VAR_OFFSET + 0x406A)
#define VAR_MAP_SCENE_ROUTE24                                                  (FRLG_VAR_OFFSET + 0x406B)
#define VAR_MAP_SCENE_PEWTER_CITY                                              (FRLG_VAR_OFFSET + 0x406C)
#define VAR_0x406D                                                             (FRLG_VAR_OFFSET + 0x406D)
#define VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE                        (FRLG_VAR_OFFSET + 0x406E)
#define VAR_CABLE_CLUB_STATE_FRLG                                              (FRLG_VAR_OFFSET + 0x406F)
#define VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY                                    (FRLG_VAR_OFFSET + 0x4070)
#define VAR_MAP_SCENE_CINNABAR_ISLAND                                          (FRLG_VAR_OFFSET + 0x4071)
#define VAR_0x4072                                                             (FRLG_VAR_OFFSET + 0x4072)
#define VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB                    (FRLG_VAR_OFFSET + 0x4073)
#define VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1                                 (FRLG_VAR_OFFSET + 0x4074)
#define VAR_MAP_SCENE_ONE_ISLAND_HARBOR                                        (FRLG_VAR_OFFSET + 0x4075)
#define VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F                             (FRLG_VAR_OFFSET + 0x4076)
#define VAR_0x4077                                                             (FRLG_VAR_OFFSET + 0x4077)
#define VAR_MAP_SCENE_TWO_ISLAND                                               (FRLG_VAR_OFFSET + 0x4078)
#define VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER                            (FRLG_VAR_OFFSET + 0x4079)
#define VAR_0x407A                                                             (FRLG_VAR_OFFSET + 0x407A)
#define VAR_MAP_SCENE_THREE_ISLAND                                             (FRLG_VAR_OFFSET + 0x407B)
#define VAR_MAP_SCENE_POKEMON_CENTER_TEALA                                     (FRLG_VAR_OFFSET + 0x407C)
#define VAR_MAP_SCENE_CERULEAN_CITY_ROCKET                                     (FRLG_VAR_OFFSET + 0x407D)
#define VAR_MAP_SCENE_VERMILION_CITY                                           (FRLG_VAR_OFFSET + 0x407E)
#define VAR_MAP_SCENE_MT_EMBER_EXTERIOR                                        (FRLG_VAR_OFFSET + 0x407F)
#define VAR_MAP_SCENE_ICEFALL_CAVE_BACK                                        (FRLG_VAR_OFFSET + 0x4080)
#define VAR_MAP_SCENE_SAFFRON_CITY_DOJO                                        (FRLG_VAR_OFFSET + 0x4081)
#define VAR_MAP_SCENE_TRAINER_TOWER                                            (FRLG_VAR_OFFSET + 0x4082)
#define VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10                             (FRLG_VAR_OFFSET + 0x4083)
#define VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS                              (FRLG_VAR_OFFSET + 0x4084)
#define VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR                                  (FRLG_VAR_OFFSET + 0x4085)
#define VAR_MAP_SCENE_FOUR_ISLAND                                              (FRLG_VAR_OFFSET + 0x4086)
#define VAR_0x4087                                                             (FRLG_VAR_OFFSET + 0x4087)
#define VAR_MAP_SCENE_ROCKET_WAREHOUSE                                         (FRLG_VAR_OFFSET + 0x4088)
#define VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F                             (FRLG_VAR_OFFSET + 0x4089)
#define VAR_MAP_SCENE_CINNABAR_ISLAND_2                                        (FRLG_VAR_OFFSET + 0x408A)
#define VAR_MAP_SCENE_MT_MOON_B2F                                              (FRLG_VAR_OFFSET + 0x408B)


#define VAR_0x408C                 (FRLG_VAR_OFFSET + 0x408C)
#define VAR_0x408D                 (FRLG_VAR_OFFSET + 0x408D)
#define VAR_0x408E                 (FRLG_VAR_OFFSET + 0x408E)
#define VAR_0x408F                 (FRLG_VAR_OFFSET + 0x408F)
#define VAR_0x4090                 (FRLG_VAR_OFFSET + 0x4090)
#define VAR_0x4091                 (FRLG_VAR_OFFSET + 0x4091)
#define VAR_0x4092                 (FRLG_VAR_OFFSET + 0x4092)
#define VAR_0x4093                 (FRLG_VAR_OFFSET + 0x4093)
#define VAR_0x4094                 (FRLG_VAR_OFFSET + 0x4094)
#define VAR_0x4095                 (FRLG_VAR_OFFSET + 0x4095)
#define VAR_0x4096                 (FRLG_VAR_OFFSET + 0x4096)
#define VAR_0x4097                 (FRLG_VAR_OFFSET + 0x4097)
#define VAR_0x4098                 (FRLG_VAR_OFFSET + 0x4098)
#define VAR_0x4099                 (FRLG_VAR_OFFSET + 0x4099)
#define VAR_0x409A                 (FRLG_VAR_OFFSET + 0x409A)
#define VAR_0x409B                 (FRLG_VAR_OFFSET + 0x409B)
#define VAR_0x409C                 (FRLG_VAR_OFFSET + 0x409C)
#define VAR_0x409D                 (FRLG_VAR_OFFSET + 0x409D)
#define VAR_0x409E                 (FRLG_VAR_OFFSET + 0x409E)
#define VAR_0x409F                 (FRLG_VAR_OFFSET + 0x409F)
#define VAR_0x40A0                 (FRLG_VAR_OFFSET + 0x40A0)
#define VAR_0x40A1                 (FRLG_VAR_OFFSET + 0x40A1)
#define VAR_0x40A2                 (FRLG_VAR_OFFSET + 0x40A2)
#define VAR_0x40A3                 (FRLG_VAR_OFFSET + 0x40A3)
#define VAR_0x40A4                 (FRLG_VAR_OFFSET + 0x40A4)
#define VAR_0x40A5                 (FRLG_VAR_OFFSET + 0x40A5)
#define VAR_0x40A6                 (FRLG_VAR_OFFSET + 0x40A6)
#define VAR_0x40A7                 (FRLG_VAR_OFFSET + 0x40A7)
#define VAR_0x40A8                 (FRLG_VAR_OFFSET + 0x40A8)
#define VAR_0x40A9                 (FRLG_VAR_OFFSET + 0x40A9)

#define VAR_QLBAK_TRAINER_REMATCHES (FRLG_VAR_OFFSET + 0x40AA) // array of 4
#define VAR_QLBAK_MAP_LAYOUT        (FRLG_VAR_OFFSET + 0x40AE)

#define VAR_0x40AF                 (FRLG_VAR_OFFSET + 0x40AF)
#define VAR_0x40B0                 (FRLG_VAR_OFFSET + 0x40B0)
#define VAR_0x40B1                 (FRLG_VAR_OFFSET + 0x40B1)
#define VAR_0x40B2                 (FRLG_VAR_OFFSET + 0x40B2)
#define VAR_0x40B3                 (FRLG_VAR_OFFSET + 0x40B3)
#define VAR_PORTHOLE               (FRLG_VAR_OFFSET + 0x40B4)
#define VAR_EVENT_PICHU_SLOT       (FRLG_VAR_OFFSET + 0x40B5)
#define VAR_MYSTERY_GIFT_1         (FRLG_VAR_OFFSET + 0x40B6)
#define VAR_MYSTERY_GIFT_2         (FRLG_VAR_OFFSET + 0x40B7)
#define VAR_MYSTERY_GIFT_3         (FRLG_VAR_OFFSET + 0x40B8)
#define VAR_MYSTERY_GIFT_4         (FRLG_VAR_OFFSET + 0x40B9)
#define VAR_MYSTERY_GIFT_5         (FRLG_VAR_OFFSET + 0x40BA)
#define VAR_MYSTERY_GIFT_6         (FRLG_VAR_OFFSET + 0x40BB)
#define VAR_MYSTERY_GIFT_7         (FRLG_VAR_OFFSET + 0x40BC)
#define VAR_0x40BD                 (FRLG_VAR_OFFSET + 0x40BD)
#define VAR_0x40BE                 (FRLG_VAR_OFFSET + 0x40BE)
#define VAR_0x40BF                 (FRLG_VAR_OFFSET + 0x40BF)
#define VAR_0x40C0                 (FRLG_VAR_OFFSET + 0x40C0)
#define VAR_0x40C1                 (FRLG_VAR_OFFSET + 0x40C1)
#define VAR_0x40C2                 (FRLG_VAR_OFFSET + 0x40C2)
#define VAR_0x40C3                 (FRLG_VAR_OFFSET + 0x40C3)
#define VAR_0x40C4                 (FRLG_VAR_OFFSET + 0x40C4)
#define VAR_0x40C5                 (FRLG_VAR_OFFSET + 0x40C5)
#define VAR_0x40C6                 (FRLG_VAR_OFFSET + 0x40C6)
#define VAR_0x40C7                 (FRLG_VAR_OFFSET + 0x40C7)
#define VAR_0x40C8                 (FRLG_VAR_OFFSET + 0x40C8)
#define VAR_0x40C9                 (FRLG_VAR_OFFSET + 0x40C9)
#define VAR_0x40CA                 (FRLG_VAR_OFFSET + 0x40CA)
#define VAR_0x40CB                 (FRLG_VAR_OFFSET + 0x40CB)
#define VAR_0x40CC                 (FRLG_VAR_OFFSET + 0x40CC)
#define VAR_0x40CD                 (FRLG_VAR_OFFSET + 0x40CD)
#define VAR_0x40CE                 (FRLG_VAR_OFFSET + 0x40CE)
#define VAR_FRONTIER_FACILITY      (FRLG_VAR_OFFSET + 0x40CF)
#define VAR_0x40D0                 (FRLG_VAR_OFFSET + 0x40D0)
#define VAR_0x40D1                 (FRLG_VAR_OFFSET + 0x40D1)
#define VAR_0x40D2                 (FRLG_VAR_OFFSET + 0x40D2)
#define VAR_0x40D3                 (FRLG_VAR_OFFSET + 0x40D3)
#define VAR_0x40D4                 (FRLG_VAR_OFFSET + 0x40D4)
#define VAR_0x40D5                 (FRLG_VAR_OFFSET + 0x40D5)
#define VAR_0x40D6                 (FRLG_VAR_OFFSET + 0x40D6)
#define VAR_0x40D7                 (FRLG_VAR_OFFSET + 0x40D7)
#define VAR_0x40D8                 (FRLG_VAR_OFFSET + 0x40D8)
#define VAR_0x40D9                 (FRLG_VAR_OFFSET + 0x40D9)
#define VAR_0x40DA                 (FRLG_VAR_OFFSET + 0x40DA)
#define VAR_0x40DB                 (FRLG_VAR_OFFSET + 0x40DB)
#define VAR_0x40DC                 (FRLG_VAR_OFFSET + 0x40DC)
#define VAR_0x40DD                 (FRLG_VAR_OFFSET + 0x40DD)
#define VAR_0x40DE                 (FRLG_VAR_OFFSET + 0x40DE)
#define VAR_0x40DF                 (FRLG_VAR_OFFSET + 0x40DF)
#define VAR_0x40E0                 (FRLG_VAR_OFFSET + 0x40E0)
#define VAR_0x40E1                 (FRLG_VAR_OFFSET + 0x40E1)
#define VAR_0x40E2                 (FRLG_VAR_OFFSET + 0x40E2)
#define VAR_0x40E3                 (FRLG_VAR_OFFSET + 0x40E3)
#define VAR_0x40E4                 (FRLG_VAR_OFFSET + 0x40E4)
#define VAR_0x40E5                 (FRLG_VAR_OFFSET + 0x40E5)
#define VAR_DAILY_SLOTS            (FRLG_VAR_OFFSET + 0x40E6)
#define VAR_DAILY_WILDS            (FRLG_VAR_OFFSET + 0x40E7)
#define VAR_DAILY_BLENDER          (FRLG_VAR_OFFSET + 0x40E8)
#define VAR_DAILY_PLANTED_BERRIES  (FRLG_VAR_OFFSET + 0x40E9)
#define VAR_DAILY_PICKED_BERRIES   (FRLG_VAR_OFFSET + 0x40EA)
#define VAR_DAILY_ROULETTE         (FRLG_VAR_OFFSET + 0x40EB)
#define VAR_0x40EC                 (FRLG_VAR_OFFSET + 0x40EC)
#define VAR_0x40ED                 (FRLG_VAR_OFFSET + 0x40ED)
#define VAR_0x40EE                 (FRLG_VAR_OFFSET + 0x40EE)
#define VAR_0x40EF                 (FRLG_VAR_OFFSET + 0x40EF)
#define VAR_0x40F0                 (FRLG_VAR_OFFSET + 0x40F0)
#define VAR_DAILY_BP               (FRLG_VAR_OFFSET + 0x40F1)
#define VAR_0x40F2                 (FRLG_VAR_OFFSET + 0x40F2)
#define VAR_0x40F3                 (FRLG_VAR_OFFSET + 0x40F3)
#define VAR_0x40F4                 (FRLG_VAR_OFFSET + 0x40F4)
#define VAR_0x40F5                 (FRLG_VAR_OFFSET + 0x40F5)
#define VAR_0x40F6                 (FRLG_VAR_OFFSET + 0x40F6)
#define VAR_0x40F7                 (FRLG_VAR_OFFSET + 0x40F7)
#define VAR_0x40F8                 (FRLG_VAR_OFFSET + 0x40F8)
#define VAR_0x40F9                 (FRLG_VAR_OFFSET + 0x40F9)
#define VAR_0x40FA                 (FRLG_VAR_OFFSET + 0x40FA)
#define VAR_0x40FB                 (FRLG_VAR_OFFSET + 0x40FB)
#define VAR_0x40FC                 (FRLG_VAR_OFFSET + 0x40FC)
#define VAR_0x40FD                 (FRLG_VAR_OFFSET + 0x40FD)
#define VAR_0x40FE                 (FRLG_VAR_OFFSET + 0x40FE)
#define VAR_0x40FF                 (FRLG_VAR_OFFSET + 0x40FF)

#define VARS_END_FRLG              (FRLG_VAR_OFFSET + 0x40FF)
#define VARS_COUNT_FRLG            (VARS_END_FRLG - 0x4000 + 1)

#ifndef SPECIAL_VARS_START
#define SPECIAL_VARS_START         0x8000

#define VAR_0x8000                 0x8000
#define VAR_0x8001                 0x8001
#define VAR_0x8002                 0x8002
#define VAR_0x8003                 0x8003
#define VAR_0x8004                 0x8004
#define VAR_0x8005                 0x8005
#define VAR_0x8006                 0x8006
#define VAR_0x8007                 0x8007
#define VAR_0x8008                 0x8008
#define VAR_0x8009                 0x8009
#define VAR_0x800A                 0x800A
#define VAR_0x800B                 0x800B
#define VAR_FACING                 0x800C
#define VAR_RESULT                 0x800D
#define VAR_ITEM_ID                0x800E
#define VAR_LAST_TALKED            0x800F
#define VAR_MON_BOX_ID_FRLG        0x8010
#define VAR_MON_BOX_POS_FRLG       0x8011
#define VAR_TEXT_COLOR             0x8012
#define VAR_PREV_TEXT_COLOR        0x8013
#define VAR_0x8014                 0x8014 // Unknown/unused

#define SPECIAL_VARS_END_FRLG      0x8014
#endif // SPECIAL_VARS_START

// Text color ids for VAR_TEXT_COLOR / VAR_PREV_TEXT_COLOR
#define NPC_TEXT_COLOR_MALE      0 // Blue, for male NPCs
#define NPC_TEXT_COLOR_FEMALE    1 // Red, for female NPCs
#define NPC_TEXT_COLOR_MON       2 // Black, for Pokémon
#define NPC_TEXT_COLOR_NEUTRAL   3 // Black, for inanimate objects and messages from the game
#define NPC_TEXT_COLOR_DEFAULT 255 // If an NPC is selected, use the color specified by GetColorFromTextColorTable, otherwise use Neutral.

#endif // GUARD_CONSTANTS_VARS_FRLG_H
