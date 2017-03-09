//
// btstack_config.h for mRF5-Zephyr port
//

#ifndef __BTSTACK_CONFIG
#define __BTSTACK_CONFIG

// Port related features

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_LE_PERIPHERAL
#define ENABLE_LE_CENTRAL

#define ENABLE_LOG_INFO
// #define ENABLE_LOG_ERROR

#define HAVE_EMBEDDED_TICK

// BTstack configuration. buffers, sizes, ...
#define HCI_ACL_PAYLOAD_SIZE 27
#define MAX_NR_WHITELIST_ENTRIES 1
#define MAX_NR_HCI_CONNECTIONS 3
#define MAX_NR_SM_LOOKUP_ENTRIES 1
#define MAX_NR_L2CAP_SERVICES 0
#define MAX_NR_L2CAP_CHANNELS 0
#define MAX_NR_GATT_CLIENTS 1
#define MAX_NR_GATT_SUBCLIENTS 1

#define MAX_NR_RFCOMM_MULTIPLEXERS 0
#define MAX_NR_RFCOMM_SERVICES 0
#define MAX_NR_RFCOMM_CHANNELS 0
#define MAX_NR_HFP_CONNECTIONS 0
#define MAX_NR_BTSTACK_LINK_KEY_DB_MEMORY_ENTRIES 0
#define MAX_NR_BNEP_SERVICES 0
#define MAX_NR_BNEP_CHANNELS 0
#define MAX_NR_SERVICE_RECORD_ITEMS 0


// additional ticker for BTstack run loop single shot timer
#define BTSTACK_TICKER_NODES 1
#define BTSTACK_USER_ID 3
#define BTSTACK_USER_OPS 2
#define BTSTACK_TICKER_ID (RADIO_TICKER_NODES)

#define HAVE_HOST_CONTROLLER_API

#endif