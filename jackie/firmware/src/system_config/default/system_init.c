/*******************************************************************************
  System Initialization File

  File Name:
    system_init.c

  Summary:
    This file contains source code necessary to initialize the system.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits, 
    and allocates any necessary global system resources, such as the 
    sysObj structure that contains the object handles to all the MPLAB Harmony 
    module objects in the system.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "system_config.h"
#include "system_definitions.h"


// ****************************************************************************
// ****************************************************************************
// Section: Configuration Bits
// ****************************************************************************
// ****************************************************************************
// <editor-fold defaultstate="collapsed" desc="Configuration Bits">

/*** DEVCFG0 ***/

#pragma config DEBUG =      OFF
#pragma config JTAGEN =     ON
#pragma config ICESEL =     ICS_PGx1
#pragma config TRCEN =      ON
#pragma config BOOTISA =    MIPS32
#pragma config FECCCON =    OFF_UNLOCKED
#pragma config FSLEEP =     OFF
#pragma config DBGPER =     PG_ALL
#pragma config EJTAGBEN =   NORMAL
#pragma config CP =         OFF

/*** DEVCFG1 ***/

#pragma config FNOSC =      FRCDIV
#pragma config DMTINTV =    WIN_127_128
#pragma config FSOSCEN =    ON
#pragma config IESO =       ON
#pragma config POSCMOD =    OFF
#pragma config OSCIOFNC =   OFF
#pragma config FCKSM =      CSECME
#pragma config WDTPS =      PS1048576
#pragma config WDTSPGM =    STOP
#pragma config FWDTEN =     ON
#pragma config WINDIS =     NORMAL
#pragma config FWDTWINSZ =  WINSZ_25
#pragma config DMTCNT =     DMT31
#pragma config FDMTEN =     ON

/*** DEVCFG2 ***/

#pragma config FPLLIDIV =   DIV_8
#pragma config FPLLRNG =    RANGE_34_68_MHZ
#pragma config FPLLICLK =   PLL_FRC
#pragma config FPLLMULT =   MUL_128
#pragma config FPLLODIV =   DIV_32
#pragma config UPLLFSEL =   FREQ_24MHZ
#pragma config UPLLEN =     ON

/*** DEVCFG3 ***/

#pragma config USERID =     0xffff
#pragma config FMIIEN =     ON
#pragma config FETHIO =     ON
#pragma config PGL1WAY =    ON
#pragma config PMDL1WAY =   ON
#pragma config IOL1WAY =    ON
#pragma config FUSBIDIO =   ON

/*** BF1SEQ0 ***/

#pragma config TSEQ =       0xffff
#pragma config CSEQ =       0xffff
// </editor-fold>


// *****************************************************************************
// *****************************************************************************
// Section: Library/Stack Initialization Data
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: Driver Initialization Data
// *****************************************************************************
// *****************************************************************************

//<editor-fold defaultstate="collapsed" desc="DRV_Timer Initialization Data">

/*** TMR Driver Initialization Data ***/

const DRV_TMR_INIT drvTmr0InitData =
{
    .moduleInit.sys.powerState = DRV_TMR_POWER_STATE_IDX0,
    .tmrId = DRV_TMR_PERIPHERAL_ID_IDX0,
    .clockSource = DRV_TMR_CLOCK_SOURCE_IDX0, 
    .prescale = DRV_TMR_PRESCALE_IDX0,
    .mode = DRV_TMR_OPERATION_MODE_IDX0,
    .interruptSource = DRV_TMR_INTERRUPT_SOURCE_IDX0,
    .asyncWriteEnable = false,
};
// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="DRV_USART Initialization Data">

const DRV_USART_INIT drvUsart0InitData =
{
    .moduleInit.value = DRV_USART_POWER_STATE_IDX0,
    .usartID = DRV_USART_PERIPHERAL_ID_IDX0, 
    .mode = DRV_USART_OPER_MODE_IDX0,
    .modeData.AddressedModeInit.address = DRV_USART_OPER_MODE_DATA_IDX0,
    .flags = DRV_USART_INIT_FLAGS_IDX0,
    .brgClock = DRV_USART_BRG_CLOCK_IDX0,
    .lineControl = DRV_USART_LINE_CNTRL_IDX0,
    .baud = DRV_USART_BAUD_RATE_IDX0,
    .handshake = DRV_USART_HANDSHAKE_MODE_IDX0,
    .interruptTransmit = DRV_USART_XMIT_INT_SRC_IDX0,
    .interruptReceive = DRV_USART_RCV_INT_SRC_IDX0,
    .queueSizeTransmit = DRV_USART_XMIT_QUEUE_SIZE_IDX0,
    .queueSizeReceive = DRV_USART_RCV_QUEUE_SIZE_IDX0,
};

// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="DRV_SPI Initialization Data">
 
 /*** SPI Driver Initialization Data ***/
 /*** Index 0  ***/
 DRV_SPI_INIT drvSpi0InitData =
 {
    .spiId = DRV_SPI_SPI_ID_IDX0,
    .taskMode = DRV_SPI_TASK_MODE_IDX0,
    .spiMode = DRV_SPI_SPI_MODE_IDX0,
    .allowIdleRun = DRV_SPI_ALLOW_IDLE_RUN_IDX0,
    .spiProtocolType = DRV_SPI_SPI_PROTOCOL_TYPE_IDX0,
    .commWidth = DRV_SPI_COMM_WIDTH_IDX0,
    .spiClk = DRV_SPI_SPI_CLOCK_IDX0,
    .baudRate = DRV_SPI_BAUD_RATE_IDX0,
    .bufferType = DRV_SPI_BUFFER_TYPE_IDX0,
    .clockMode = DRV_SPI_CLOCK_MODE_IDX0,
    .inputSamplePhase = DRV_SPI_INPUT_PHASE_IDX0,
    .queueSize = DRV_SPI_QUEUE_SIZE_IDX0,
    .jobQueueReserveSize = DRV_SPI_RESERVED_JOB_IDX0,
 };
// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="DRV_I2C Initialization Data">
// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="SYS_TMR Initialization Data">
/*** TMR Service Initialization Data ***/
const SYS_TMR_INIT sysTmrInitData =
{
    .moduleInit = {SYS_MODULE_POWER_RUN_FULL},
    .drvIndex = DRV_TMR_INDEX_0,
    .tmrFreq = 1000, 
};

// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="DRV_GFX_LCC Initialization Data">

/*** DRV GFX Initialization Data ***/

DRV_GFX_INIT drvGfxInit =
{
    .orientation             = DISP_ORIENTATION,
    .horizontalResolution    = DISP_HOR_RESOLUTION,
    .verticalResolution      = DISP_VER_RESOLUTION,
    .dataWidth               = DISP_DATA_WIDTH,
    .horizontalPulseWidth    = DISP_HOR_PULSE_WIDTH,
    .horizontalBackPorch     = DISP_HOR_BACK_PORCH,
    .horizontalFrontPorch    = DISP_HOR_FRONT_PORCH,
    .verticalPulseWidth      = DISP_VER_PULSE_WIDTH,
    .verticalBackPorch       = DISP_VER_BACK_PORCH,
    .verticalFrontPorch      = DISP_VER_FRONT_PORCH,
    .logicShift              = DISP_INV_LSHIFT,
    .LCDType                 = 1,
    .colorType               = 0,
    .TCON_Init               = TCON_MODULE,
};

GFX_COLOR frameBuffer[1][DISP_HOR_RESOLUTION][DISP_VER_RESOLUTION];

// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="DRV_OVM7690 Configuration">
/*** OVM7690 Driver Initialization Data ***/

const DRV_CAMERA_OVM7690_INIT drvCameraInit =
{
    .cameraID                = CAMERA_MODULE_OVM7690,
    .sourcePort              = (void *)&PORTK,
    .hsyncChannel            = PORT_CHANNEL_A,
    .hsyncPosition           = PORTS_BIT_POS_1,
    .vsyncChannel            = PORT_CHANNEL_J,
    .vsyncPosition           = PORTS_BIT_POS_2,
    .hsyncInterruptSource    = INT_SOURCE_CHANGE_NOTICE_A,
    .vsyncInterruptSource    = INT_SOURCE_CHANGE_NOTICE_J,
    .dmaChannel              = DRV_CAMERA_OVM7690_DMA_CHANNEL_INDEX,
    .dmaTriggerSource        = DMA_TRIGGER_EXTERNAL_2,
    .bpp                     = GFX_CONFIG_COLOR_DEPTH,
};
// </editor-fold>

// *****************************************************************************
// *****************************************************************************
// Section: TCPIP Data
// *****************************************************************************
// *****************************************************************************

//<editor-fold defaultstate="collapsed" desc="TCPIP Stack Initialization Data">

/*** ARP Service Initialization Data ***/
const TCPIP_ARP_MODULE_CONFIG tcpipARPInitData =
{ 
    .cacheEntries       = TCPIP_ARP_CACHE_ENTRIES,     
    .deleteOld          = TCPIP_ARP_CACHE_DELETE_OLD,    
    .entrySolvedTmo     = TCPIP_ARP_CACHE_SOLVED_ENTRY_TMO, 
    .entryPendingTmo    = TCPIP_ARP_CACHE_PENDING_ENTRY_TMO, 
    .entryRetryTmo      = TCPIP_ARP_CACHE_PENDING_RETRY_TMO, 
    .permQuota          = TCPIP_ARP_CACHE_PERMANENT_QUOTA, 
    .purgeThres         = TCPIP_ARP_CACHE_PURGE_THRESHOLD, 
    .purgeQuanta        = TCPIP_ARP_CACHE_PURGE_QUANTA, 
    .retries            = TCPIP_ARP_CACHE_ENTRY_RETRIES, 
    .gratProbeCount     = TCPIP_ARP_GRATUITOUS_PROBE_COUNT,
};


/*** Announce Discovery Initialization Data ***/
const TCPIP_ANNOUNCE_MODULE_CONFIG tcpipAnnounceInitData =
{ 
};

/*** UDP Sockets Initialization Data ***/
const TCPIP_UDP_MODULE_CONFIG tcpipUDPInitData =
{
    .nSockets       = TCPIP_UDP_MAX_SOCKETS,
    .sktTxBuffSize  = TCPIP_UDP_SOCKET_DEFAULT_TX_SIZE, 
    .poolBuffers    = TCPIP_UDP_SOCKET_POOL_BUFFERS,
    .poolBufferSize = TCPIP_UDP_SOCKET_POOL_BUFFER_SIZE,
};

/*** TCP Sockets Initialization Data ***/
const TCPIP_TCP_MODULE_CONFIG tcpipTCPInitData =
{
    .nSockets       = TCPIP_TCP_MAX_SOCKETS,
    .sktTxBuffSize  = TCPIP_TCP_SOCKET_DEFAULT_TX_SIZE, 
    .sktRxBuffSize  = TCPIP_TCP_SOCKET_DEFAULT_RX_SIZE,
};




/*** DHCP client Initialization Data ***/
const TCPIP_DHCP_MODULE_CONFIG tcpipDHCPInitData =
{     
    .dhcpEnable     = TCPIP_DHCP_CLIENT_ENABLED,   
    .dhcpTmo        = TCPIP_DHCP_TIMEOUT,
    .dhcpCliPort    = TCPIP_DHCP_CLIENT_CONNECT_PORT,
    .dhcpSrvPort    = TCPIP_DHCP_SERVER_LISTEN_PORT,

};



/*** NBNS Server Initialization Data ***/
const TCPIP_NBNS_MODULE_CONFIG tcpipNBNSInitData =
{ 
};

/*** ETH MAC Initialization Data ***/
const TCPIP_MODULE_MAC_PIC32INT_CONFIG tcpipMACPIC32INTInitData =
{ 
    .nTxDescriptors         = TCPIP_EMAC_TX_DESCRIPTORS,
    .rxBuffSize             = TCPIP_EMAC_RX_BUFF_SIZE,
    .nRxDescriptors         = TCPIP_EMAC_RX_DESCRIPTORS,
    .nRxDedicatedBuffers    = TCPIP_EMAC_RX_DEDICATED_BUFFERS,
    .nRxInitBuffers         = TCPIP_EMAC_RX_INIT_BUFFERS,
    .rxLowThreshold         = TCPIP_EMAC_RX_LOW_THRESHOLD,
    .rxLowFill              = TCPIP_EMAC_RX_LOW_FILL,
    .ethFlags               = TCPIP_EMAC_ETH_OPEN_FLAGS,
    .phyFlags               = TCPIP_EMAC_PHY_CONFIG_FLAGS,
    .linkInitDelay          = TCPIP_EMAC_PHY_LINK_INIT_DELAY,
    .phyAddress             = TCPIP_EMAC_PHY_ADDRESS,
    .pPhyObject             = &DRV_ETHPHY_OBJECT_SMSC_LAN8740,
};

/*** Wi-Fi Interface MRF24W Initialization Data ***/
const TCPIP_MODULE_MAC_MRF24W_CONFIG macMRF24WConfigData ={
};


/*** Zeroconfig initialization data ***/
const ZCLL_MODULE_CONFIG tcpipZCLLInitData =
{
};




/*** DNS Client Initialization Data ***/
const TCPIP_DNS_CLIENT_MODULE_CONFIG tcpipDNSClientInitData =
{
    .deleteOldLease         = TCPIP_DNS_CLIENT_DELETE_OLD_ENTRIES,
    .cacheEntries           = TCPIP_DNS_CLIENT_CACHE_ENTRIES,
    .entrySolvedTmo         = TCPIP_DNS_CLIENT_CACHE_ENTRY_TMO,    
    .IPv4EntriesPerDNSName  = TCPIP_DNS_CLIENT_CACHE_PER_IPV4_ADDRESS,
    .dnsIpAddressType       = TCPIP_DNS_CLIENT_OPEN_ADDRESS_TYPE,
    .IPv6EntriesPerDNSName  = TCPIP_DNS_CLIENT_CACHE_PER_IPV6_ADDRESS,
};




const TCPIP_NETWORK_CONFIG __attribute__((unused))  TCPIP_HOSTS_CONFIGURATION[] =
{
/*** Network Configuration Index 0 ***/
    {
        TCPIP_NETWORK_DEFAULT_INTERFACE_NAME,       // interface
        TCPIP_NETWORK_DEFAULT_HOST_NAME,            // hostName
        TCPIP_NETWORK_DEFAULT_MAC_ADDR,             // macAddr
        TCPIP_NETWORK_DEFAULT_IP_ADDRESS,           // ipAddr
        TCPIP_NETWORK_DEFAULT_IP_MASK,              // ipMask
        TCPIP_NETWORK_DEFAULT_GATEWAY,              // gateway
        TCPIP_NETWORK_DEFAULT_DNS,                  // priDNS
        TCPIP_NETWORK_DEFAULT_SECOND_DNS,           // secondDNS
        TCPIP_NETWORK_DEFAULT_POWER_MODE,           // powerMode
        TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS,      // startFlags
    },
};

const TCPIP_STACK_MODULE_CONFIG TCPIP_STACK_MODULE_CONFIG_TBL [] =
{
    {TCPIP_MODULE_IPV4,          0},
    {TCPIP_MODULE_ICMP,          0},                           // TCPIP_MODULE_ICMP
    {TCPIP_MODULE_ARP,           &tcpipARPInitData},              // TCPIP_MODULE_ARP
    {TCPIP_MODULE_UDP,           &tcpipUDPInitData},              // TCPIP_MODULE_UDP,
    {TCPIP_MODULE_TCP,           &tcpipTCPInitData},              // TCPIP_MODULE_TCP,
    {TCPIP_MODULE_DHCP_CLIENT,   &tcpipDHCPInitData},             // TCPIP_MODULE_DHCP_CLIENT,
    {TCPIP_MODULE_ANNOUNCE,      &tcpipAnnounceInitData},                     // TCPIP_MODULE_ANNOUNCE,
    {TCPIP_MODULE_DNS_CLIENT,&tcpipDNSClientInitData}, // TCPIP_MODULE_DNS_CLIENT,
    {TCPIP_MODULE_NBNS,          &tcpipNBNSInitData},                           // TCPIP_MODULE_NBNS

    {TCPIP_MODULE_ZCLL, 0},                                    // TCPIP_MODULE_ZCLL,
    // MAC modules
    {TCPIP_MODULE_MAC_PIC32INT, &tcpipMACPIC32INTInitData},     // TCPIP_MODULE_MAC_PIC32INT
};

/*********************************************************************
 * Function:        SYS_MODULE_OBJ TCPIP_STACK_Init()
 *
 * PreCondition:    None
 *
 * Input:
 *
 * Output:          valid system module object if Stack and its componets are initialized
 *                  SYS_MODULE_OBJ_INVALID otherwise
 *
 * Overview:        The function starts the initialization of the stack.
 *                  If an error occurs, the SYS_ERROR() is called
 *                  and the function de-initialize itself and will return false.
 *
 * Side Effects:    None
 *
 * Note:            This function must be called before any of the
 *                  stack or its component routines are used.
 *
 ********************************************************************/


SYS_MODULE_OBJ TCPIP_STACK_Init()
{
    TCPIP_STACK_INIT    tcpipInit;

    tcpipInit.moduleInit.sys.powerState = SYS_MODULE_POWER_RUN_FULL;
    tcpipInit.pNetConf = TCPIP_HOSTS_CONFIGURATION;
    tcpipInit.nNets = sizeof (TCPIP_HOSTS_CONFIGURATION) / sizeof (*TCPIP_HOSTS_CONFIGURATION);
    tcpipInit.pModConfig = TCPIP_STACK_MODULE_CONFIG_TBL;
    tcpipInit.nModules = sizeof (TCPIP_STACK_MODULE_CONFIG_TBL) / sizeof (*TCPIP_STACK_MODULE_CONFIG_TBL);

    return TCPIP_STACK_Initialize(0, &tcpipInit.moduleInit);
}

// </editor-fold>

// *****************************************************************************
// *****************************************************************************
// Section: System Data
// *****************************************************************************
// *****************************************************************************

/* Structure to hold the object handles for the modules in the system. */
SYSTEM_OBJECTS sysObj;


// *****************************************************************************
// *****************************************************************************
// Section: Module Initialization Data
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Device Control System Service Initialization Data
  
  <editor-fold defaultstate="collapsed" 
  desc="Device Control System Service Initialization Data">
*/

const SYS_DEVCON_INIT sysDevconInit =
{
    .moduleInit = {0},
};

// </editor-fold>


//<editor-fold defaultstate="collapsed" desc="SYS_DMA Initialization Data">

/*** System DMA Initialization Data ***/

const SYS_DMA_INIT sysDmaInit =
{
	.sidl = SYS_DMA_SIDL_DISABLE,

};

// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="SYS_DEBUG Initialization Data">
/*** System Debug Initialization Data ***/

SYS_DEBUG_INIT debugInit =
{
    .moduleInit = {0},
    .errorLevel = SYS_ERROR_FATAL
};
// </editor-fold>
//<editor-fold defaultstate="collapsed" desc="SYS_CONSOLE Initialization Data">
/*** System Console Initialization Data ***/

SYS_MODULE_OBJ sysConsoleObjects[] = { SYS_MODULE_OBJ_INVALID };

/* Declared in console device implementation (sys_console_uart.c) */
extern SYS_CONSOLE_DEV_DESC consUsartDevDesc;
SYS_CONSOLE_INIT consUsartInit0 =
{
    .moduleInit = {0},
    .consDevDesc = &consUsartDevDesc,
};
// </editor-fold>
// *****************************************************************************
// *****************************************************************************
// Section: Static Initialization Functions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: System Initialization
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void SYS_Initialize ( SYS_INIT_DATA *data )

  Summary:
    Initializes the board, services, drivers, application and other modules.

  Remarks:
    See prototype in system/common/sys_module.h.
 */

void SYS_Initialize ( void* data )
{
//    /* Core Processor Initialization */
//    SYS_CLK_Initialize( NULL );
//    sysObj.sysDevcon = SYS_DEVCON_Initialize(SYS_DEVCON_INDEX_0, (SYS_MODULE_INIT*)&sysDevconInit);
//    SYS_DEVCON_PerformanceConfig(SYS_CLK_SystemFrequencyGet());
//    SYS_DEVCON_JTAGDisable();
//    SYS_PORTS_Initialize();
//    sysObj.sysDma = SYS_DMA_Initialize((SYS_MODULE_INIT *)&sysDmaInit);
//
//
//    /* Board Support Package Initialization */
//    BSP_Initialize();
//
//    /* Initialize Drivers */
//    
//    /*Initialize TMR0 */
//    DRV_TMR0_Initialize();
//
//    sysObj.drvTmr0 = DRV_TMR_Initialize(DRV_TMR_INDEX_0, (SYS_MODULE_INIT *)&drvTmr0InitData);
//
//    SYS_INT_VectorPrioritySet(INT_VECTOR_T2, INT_PRIORITY_LEVEL1);
//    SYS_INT_VectorSubprioritySet(INT_VECTOR_T2, INT_SUBPRIORITY_LEVEL0);
//    
// 
//    sysObj.drvUsart0 = DRV_USART_Initialize(DRV_USART_INDEX_0, (SYS_MODULE_INIT *)&drvUsart0InitData);
//    SYS_INT_VectorPrioritySet(INT_VECTOR_UART2_TX, INT_PRIORITY_LEVEL1);
//    SYS_INT_VectorSubprioritySet(INT_VECTOR_UART2_TX, INT_SUBPRIORITY_LEVEL0);
//    SYS_INT_VectorPrioritySet(INT_VECTOR_UART2_RX, INT_PRIORITY_LEVEL1);
//    SYS_INT_VectorSubprioritySet(INT_VECTOR_UART2_RX, INT_SUBPRIORITY_LEVEL0);
//    SYS_INT_VectorPrioritySet(INT_VECTOR_UART2_FAULT, INT_PRIORITY_LEVEL1);
//    SYS_INT_VectorSubprioritySet(INT_VECTOR_UART2_FAULT, INT_SUBPRIORITY_LEVEL0);
// 
//    /*** SPI Driver Index 0 initialization***/
//
// 
//    sysObj.spiObjectIdx0 = DRV_SPI_Initialize(0, (const SYS_MODULE_INIT  * const)&drvSpi0InitData);
//    DRV_I2C0_Initialize();
//    sysObj.drvOvm7690 = DRV_CAMERA_OVM7690_Initialize( DRV_CAMERA_OVM7690_INDEX_0,
//                                                       (SYS_MODULE_INIT *)&drvCameraInit);
//
//
//    /*Initialize OC0 */
//    DRV_OC0_Initialize();
//    DRV_GFX_LCC_FrameBufferAddressSet(&frameBuffer);
//    DRV_GFX_LCC_Initialize(GFX_INDEX_0, (SYS_MODULE_INIT*)&drvGfxInit);
//
//    /* Setting priority for LCC Refresh ISR */
//    SYS_INT_VectorPrioritySet(INT_VECTOR_DMA1, INT_PRIORITY_LEVEL7);
//
//
//    /* Enable MRF24W Interrupt */
//    SYS_PORTS_PinDirectionSelect(PORTS_ID_0,
//                                 SYS_PORTS_DIRECTION_INPUT,
//                                 WF_INT_PORT_CHANNEL,
//                                 WF_INT_BIT_POS);
//
//    /* Setup falling edge interrupt (this might change once system level
//       API is implemented */
//    PLIB_INT_ExternalFallingEdgeSelect(INT_ID_0, MRF_INT_SOURCE);
//
//
//    /* Initialize System Services */
//    SYS_INT_Initialize();  
//    sysObj.sysConsole0 = SYS_CONSOLE_Initialize(SYS_CONSOLE_INDEX_0, NULL);
//
//    sysObj.sysDebug = SYS_DEBUG_Initialize(SYS_DEBUG_INDEX_0, (SYS_MODULE_INIT*)&debugInit);
//
//    /*** TMR Service Initialization Code ***/
//    sysObj.sysTmr  = SYS_TMR_Initialize(SYS_TMR_INDEX_0, (const SYS_MODULE_INIT  * const)&sysTmrInitData);
//    SYS_RANDOM_Initialize(0, 0);
//
//    /* Initialize Middleware */
//
//    /* set priority for ETHERNET interrupt source */
//    SYS_INT_VectorPrioritySet(INT_VECTOR_ETH, INT_PRIORITY_LEVEL5);
//
//    /* set sub-priority for ETHERNET interrupt source */
//    SYS_INT_VectorSubprioritySet(INT_VECTOR_ETH, INT_SUBPRIORITY_LEVEL3);
//    
//    if(!_SYS_CONSOLE_INIT(SYS_CONSOLE_PORT))
//    {
//        return;
//    }
//
//    if (!_SYS_DEBUG_INIT(SYS_DEBUG_PORT))
//    {
//        return;
//    }
//    /* TCPIP Stack Initialization */
//    sysObj.tcpip = TCPIP_STACK_Init();
//    if (sysObj.tcpip == SYS_MODULE_OBJ_INVALID)
//    {
//       return;
//    }
//
//    /* Enable Global Interrupts */
//    SYS_INT_Enable();
//
//    /* Initialize the Application */
//    APP_Initialize();
    
        /* Core Processor Initialization */
    SYS_CLK_Initialize( NULL );
    sysObj.sysDevcon = SYS_DEVCON_Initialize(SYS_DEVCON_INDEX_0, (SYS_MODULE_INIT*)&sysDevconInit);
    SYS_DEVCON_PerformanceConfig(SYS_CLK_SystemFrequencyGet());
    SYS_PORTS_Initialize();

    /* Board Support Package Initialization */
    BSP_Initialize();

    /* Initialize Drivers */

    sysObj.drvTmr0 = DRV_TMR_Initialize(DRV_TMR_INDEX_0, (SYS_MODULE_INIT *)&drvTmr0InitData);

    SYS_INT_VectorPrioritySet(INT_VECTOR_T2, INT_PRIORITY_LEVEL4);
    SYS_INT_VectorSubprioritySet(INT_VECTOR_T2, INT_SUBPRIORITY_LEVEL0);
 
 
     sysObj.drvUsart0 = DRV_USART_Initialize(DRV_USART_INDEX_0, (SYS_MODULE_INIT *)&drvUsart0InitData);
    SYS_INT_VectorPrioritySet(INT_VECTOR_UART2_TX, INT_PRIORITY_LEVEL1);
    SYS_INT_VectorSubprioritySet(INT_VECTOR_UART2_TX, INT_SUBPRIORITY_LEVEL0);
    SYS_INT_VectorPrioritySet(INT_VECTOR_UART2_RX, INT_PRIORITY_LEVEL1);
    SYS_INT_VectorSubprioritySet(INT_VECTOR_UART2_RX, INT_SUBPRIORITY_LEVEL0);
    SYS_INT_VectorPrioritySet(INT_VECTOR_UART2_FAULT, INT_PRIORITY_LEVEL1);
    SYS_INT_VectorSubprioritySet(INT_VECTOR_UART2_FAULT, INT_SUBPRIORITY_LEVEL0);

    /*** SPI Driver Index 0 initialization***/

 
    sysObj.spiObjectIdx0 = DRV_SPI_Initialize(0, (const SYS_MODULE_INIT  * const)&drvSpi0InitData);
    /* Configure the Flash Controller Interrupt Priority */
    SYS_INT_VectorPrioritySet(INT_VECTOR_FLASH, INT_PRIORITY_LEVEL4);

    /* Configure the Flash Controller Interrupt Sub Priority */
    SYS_INT_VectorSubprioritySet(INT_VECTOR_FLASH, INT_SUBPRIORITY_LEVEL0);


    /* Enable MRF24W Interrupt */
    SYS_PORTS_PinDirectionSelect(PORTS_ID_0,
                                 SYS_PORTS_DIRECTION_INPUT,
                                 WF_INT_PORT_CHANNEL,
                                 WF_INT_BIT_POS);

    /* Setup falling edge interrupt (this might change once system level
       API is implemented */
    PLIB_INT_ExternalFallingEdgeSelect(INT_ID_0, MRF_INT_SOURCE);


    /* Initialize System Services */
    SYS_INT_Initialize();  
    sysObj.sysConsole0 = SYS_CONSOLE_Initialize(SYS_CONSOLE_INDEX_0, (SYS_MODULE_INIT *)&consUsartInit0);

    sysObj.sysDebug = SYS_DEBUG_Initialize(SYS_DEBUG_INDEX_0, (SYS_MODULE_INIT*)&debugInit);

    /*** TMR Service Initialization Code ***/
    sysObj.sysTmr  = SYS_TMR_Initialize(SYS_TMR_INDEX_0, (const SYS_MODULE_INIT  * const)&sysTmrInitData);
    SYS_RANDOM_Initialize(0, 0);

    /* Initialize Middleware */

    
    /* TCPIP Stack Initialization */
    sysObj.tcpip = TCPIP_STACK_Init();
    if (sysObj.tcpip == SYS_MODULE_OBJ_INVALID)
    {
       return;
    }

    /* Enable Global Interrupts */
    SYS_INT_Enable();

    /* Initialize the Application */
    APP_Initialize();
}


/*******************************************************************************
 End of File
*/

