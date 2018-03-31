#ifndef ZEROCOIN_PARAMS_H
#define ZEROCOIN_PARAMS_H

#define ZEROCOIN_MODULUS   "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784406918290641249515082189298559149176184502808489120072844992687392807287776735971418347270261896375014971824691165077613379859095700097330459748808428401797429100642458691817195118746121515172654632282216869987549182422433637259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133844143603833904414952634432190114657544454178424020924616515723350778707749817125772467962926386356373289912154831438167899885040445364023527381951378636564391212010397122822120720357"
#define ZEROCOIN_MODULUS_V2 "C7970CEEDCC3B0754490201A7AA613CD73911081C790F5F1A8726F463550BB5B7FF0DB8E1EA1189EC72F93D1650011BD721AEEACC2ACDE32A04107F0648C2813A31F5B0B7765FF8B44B4B6FFC93384B646EB09C7CF5E8592D40EA33C80039F35B4F14A04B51F7BFD781BE4D1673164BA8EB991C2C4D730BBBE35F592BDEF524AF7E8DAEFD26C66FC02C479AF89D64D373F442709439DE66CEB955F3EA37D5159F6135809F85334B5CB1813ADDC80CD05609F10AC6A95AD65872C909525BDAD32BC729592642920F24C61DC5B3C3B7923E56B16A4D9D373D8721F24A3FC0F1B3131F55615172866BCCC30F95054C824E733A5EB6817F7BC16399D48C6361CC7E5"

/** Dust Soft Limit, allowed with additional fee per output */
//static const int64_t DUST_SOFT_LIMIT = 100000; // 0.001 XZC
/** Dust Hard Limit, ignored as wallet inputs (mininput default) */
static const int64_t DUST_HARD_LIMIT = 1000;   // 0.00001 XZC mininput

// There were bugs before this block, don't do some checks on early blocks
#define ZC_CHECK_BUG_FIXED_AT_BLOCK         61168
// Do strict check on duplicate minted public coin value after this block
#define ZC_CHECK_DUPLICATE_MINT_AT_BLOCK    70000

// The mint id number to change to zerocoin v2
#define ZC_V2_SWITCH_ID_1 200
#define ZC_V2_SWITCH_ID_10 30
#define ZC_V2_SWITCH_ID_25 15
#define ZC_V2_SWITCH_ID_50 15
#define ZC_V2_SWITCH_ID_100 100

// Same for testnet
#define ZC_V2_TESTNET_SWITCH_ID_1 18
#define ZC_V2_TESTNET_SWITCH_ID_10 7
#define ZC_V2_TESTNET_SWITCH_ID_25 5
#define ZC_V2_TESTNET_SWITCH_ID_50 4
#define ZC_V2_TESTNET_SWITCH_ID_100 10

#define ZC_V1_5_STARTING_BLOCK          78500
#define ZC_V1_5_TESTNET_STARTING_BLOCK  37954

#define ZC_V1_5_GRACEFUL_MEMPOOL_PERIOD	500
#define ZC_V1_5_GRACEFUL_PERIOD			1500

#define ZC_MODULUS_V2_START_BLOCK		85000
#define ZC_MODULUS_V1_STOP_BLOCK		86000

#define ZC_MODULUS_V2_TESTNET_START_BLOCK 85000
#define ZC_MODULUS_V1_TESTNET_STOP_BLOCK 86000

#define ZC_MODULUS_V2_BASE_ID			1000

// Number of coins per id in spend v1/v1.5
#define ZC_SPEND_V1_COINSPERID			10
// Number of coins per id in spend v2.0
#define ZC_SPEND_V2_COINSPERID			10000

// Version of index that introduced storing accumulators and coin serials
#define ZC_ADVANCED_INDEX_VERSION           130500
// Version of wallet.db entry that introduced storing extra information for mints
#define ZC_ADVANCED_WALLETDB_MINT_VERSION	130504

// number of mint confirmations needed to spend coin
#define ZC_MINT_CONFIRMATIONS               6

#endif
