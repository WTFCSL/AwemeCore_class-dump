//
//     Generated by private class-dump
//

@class LBIMServiceModel, NSString, NSTimer, LEBUPnPDevice, LBInnerLelinkDeviceModel, NSObject, LEBAsyncSocket;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface LBLelinkService : NSObject <LEBAsyncSocketDelegate> {
    BOOL _hasNewVersion;
    BOOL _frequentlyUsed;
    BOOL _onceConnected;
    BOOL _lastTimeConnected;
    BOOL _fromQRCode;
    BOOL _innerLelinkServiceAvailable;
    BOOL _upnpServiceAvailable;
    BOOL _imServiceAvailable;
    BOOL _lelinkServiceAvailable;
    BOOL _lelinkCheckCompleted;
    BOOL _isLelinkAlive;
    BOOL _dlnaCheckCompleted;
    BOOL _stopSearch;
    BOOL _multiTunnels;
    BOOL _supportWr;
    unsigned long long _serviceType;
    unsigned long long _sourceStyle;
    NSString *_lelinkServiceName;
    NSString *_tvUID;
    NSString *_ipAddress;
    long long _remotePort;
    long long _port;
    long long _lelinkPort;
    NSString *_receviverPackageName;
    NSString *_UDN;
    NSString *_alias;
    NSString *_vuuid;
    NSString *_appID;
    long long _mirrorReconnect;
    LBInnerLelinkDeviceModel *_innerLelinkDevice;
    LEBUPnPDevice *_upnpDevice;
    LBIMServiceModel *_imDevice;
    id _lelinkConnection;
    long long _leinkCheckCounter;
    long long _dlnaCheckCounter;
    NSString *_originalName;
    NSTimer *_lelinkCheckTimer;
    NSTimer *_dlnaCheckTimer;
    NSObject<OS_dispatch_queue> *_checkAliveQueue;
    NSObject<OS_dispatch_semaphore> *_lelinkSemaphore;
    NSObject<OS_dispatch_semaphore> *_externaLelinkSemaphore;
    LEBAsyncSocket *_lelinkCheckSocket;
    LEBAsyncSocket *_externalLelinkCheckSocket;
}

@property (nonatomic, getter=isFrequentlyUsed) BOOL frequentlyUsed;
@property (nonatomic, getter=isOnceConnected) BOOL onceConnected;
@property (nonatomic, getter=isLastTimeConnected) BOOL lastTimeConnected;
@property (nonatomic, getter=isFromQRCode) BOOL fromQRCode;
@property (nonatomic, getter=isLelinkServiceAvailable) BOOL lelinkServiceAvailable;
@property (nonatomic, getter=isInnerLelinkServiceAvailable) BOOL innerLelinkServiceAvailable;
@property (nonatomic, getter=isUpnpServiceAvailable) BOOL upnpServiceAvailable;
@property (retain, nonatomic) NSTimer *lelinkCheckTimer;
@property (nonatomic) BOOL lelinkCheckCompleted;
@property (nonatomic) BOOL isLelinkAlive;
@property (nonatomic) long long leinkCheckCounter;
@property (retain, nonatomic) NSTimer *dlnaCheckTimer;
@property (nonatomic) BOOL dlnaCheckCompleted;
@property (nonatomic) long long dlnaCheckCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkAliveQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lelinkSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *externaLelinkSemaphore;
@property (retain, nonatomic) LEBAsyncSocket *lelinkCheckSocket;
@property (nonatomic) BOOL stopSearch;
@property (nonatomic, getter=isMultiTunnels) BOOL multiTunnels;
@property (nonatomic, getter=isSupportWr) BOOL supportWr;
@property (retain, nonatomic) LEBAsyncSocket *externalLelinkCheckSocket;
@property (nonatomic) unsigned long long serviceType;
@property (nonatomic) unsigned long long sourceStyle;
@property (copy, nonatomic) NSString *lelinkServiceName;
@property (copy, nonatomic) NSString *tvUID;
@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) long long remotePort;
@property (nonatomic) long long port;
@property (nonatomic) long long lelinkPort;
@property (copy, nonatomic) NSString *receviverPackageName;
@property (copy, nonatomic) NSString *UDN;
@property (nonatomic) BOOL hasNewVersion;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *vuuid;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long mirrorReconnect;
@property (readonly, nonatomic, getter=isImServiceAvailable) BOOL imServiceAvailable;
@property (retain, nonatomic) LBInnerLelinkDeviceModel *innerLelinkDevice;
@property (retain, nonatomic) LEBUPnPDevice *upnpDevice;
@property (retain, nonatomic) LBIMServiceModel *imDevice;
@property (weak, nonatomic) id lelinkConnection;
@property (copy, nonatomic) NSString *originalName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lelinkServiceWithDict:(id)arg0;

- (void)applicationWillResignActiveNotification:(id)arg0;
- (void)stopCheckLelinkStatus;
- (void)stopCheckDLNAStatus;
- (void)lelinkBrowserStopSearchNotification:(id)arg0;
- (BOOL)stopSearch;
- (BOOL)isInnerLelinkServiceAvailable;
- (void)startCheckLelinkStatus;
- (BOOL)isUpnpServiceAvailable;
- (void)startCheckDLNAStatus;
- (void)setStopSearch:(BOOL)arg0;
- (id)innerLelinkDevice;
- (void)setLelinkCheckCompleted:(BOOL)arg0;
- (void)setLeinkCheckCounter:(long long)arg0;
- (void)checkLelink:(id)arg0;
- (void)setLelinkCheckTimer:(id)arg0;
- (id)lelinkServiceName;
- (id)lelinkSemaphore;
- (BOOL)lelinkCheckCompleted;
- (id)checkAliveQueue;
- (id)lelinkCheckSocket;
- (void)setIsLelinkAlive:(BOOL)arg0;
- (long long)leinkCheckCounter;
- (void)setInnerLelinkServiceAvailable:(BOOL)arg0;
- (void)setLelinkSemaphore:(id)arg0;
- (BOOL)isLelinkAlive;
- (id)externalLelinkCheckSocket;
- (id)externaLelinkSemaphore;
- (void)setExternaLelinkSemaphore:(id)arg0;
- (void)setDlnaCheckCounter:(long long)arg0;
- (void)setDlnaCheckCompleted:(BOOL)arg0;
- (void)checkDLNA:(id)arg0;
- (void)setDlnaCheckTimer:(id)arg0;
- (id)upnpDevice;
- (BOOL)dlnaCheckCompleted;
- (void)postRequestWith:(id)arg0;
- (long long)dlnaCheckCounter;
- (void)setUpnpServiceAvailable:(BOOL)arg0;
- (void)setUDN:(id)arg0;
- (void)setFromQRCode:(BOOL)arg0;
- (void)setLelinkPort:(long long)arg0;
- (void)setLastTimeConnected:(BOOL)arg0;
- (void)setOnceConnected:(BOOL)arg0;
- (id)UDN;
- (void)generateUDN:(id)arg0;
- (BOOL)isEqualToLelinkService:(id)arg0;
- (id)tvUID;
- (void)checkLelinkOnline;
- (void)checkDLNAOnline;
- (void)setLelinkServiceAvailable:(BOOL)arg0;
- (id)p_funcSimplifyIsOpen;
- (void)getMdnsTXTInfoWithIpAddress:(id)arg0 remotePort:(long long)arg1 block:(id /* block */)arg2;
- (void)setSourceStyle:(unsigned long long)arg0;
- (void)setLelinkServiceName:(id)arg0;
- (void)setTvUID:(id)arg0;
- (void)setInnerLelinkDevice:(id)arg0;
- (void)setReceviverPackageName:(id)arg0;
- (BOOL)hasNewVersion;
- (void)setHasNewVersion:(BOOL)arg0;
- (BOOL)p_isNotEmptyString:(id)arg0;
- (BOOL)isLelinkServiceAvailable;
- (void)setUpnpDevice:(id)arg0;
- (BOOL)isMultiTunnels;
- (BOOL)isSupportWr;
- (void)checkOnlineStatus;
- (void)setServiceAvailable:(int)arg0;
- (id)getserviceDrainage;
- (void)getLelinkService:(id)arg0 resultBlock:(id /* block */)arg1;
- (id)lelinkDeviceWithServiceModel:(id)arg0 isOnline:(BOOL)arg1 localip:(id)arg2 aliasName:(id)arg3 tvUid:(id)arg4 sourceStyle:(unsigned long long)arg5;
- (id)imDeviceWithServiceName:(id)arg0 localip:(id)arg1 localPort:(id)arg2 tvUid:(id)arg3 appid:(id)arg4 aliasName:(id)arg5 pt:(id)arg6 pol:(id)arg7 tunnels:(id)arg8 isOnline:(BOOL)arg9 sourceStyle:(unsigned long long)arg10;
- (BOOL)p_detectionEquipmentIdentificationServer:(id)arg0;
- (unsigned long long)sourceStyle;
- (long long)lelinkPort;
- (id)receviverPackageName;
- (void)setVuuid:(id)arg0;
- (BOOL)isFrequentlyUsed;
- (void)setFrequentlyUsed:(BOOL)arg0;
- (BOOL)isOnceConnected;
- (BOOL)isLastTimeConnected;
- (BOOL)isFromQRCode;
- (long long)mirrorReconnect;
- (void)setMirrorReconnect:(long long)arg0;
- (BOOL)isImServiceAvailable;
- (id)imDevice;
- (void)setImDevice:(id)arg0;
- (id)lelinkConnection;
- (void)setLelinkConnection:(id)arg0;
- (id)lelinkCheckTimer;
- (id)dlnaCheckTimer;
- (void)setCheckAliveQueue:(id)arg0;
- (void)setLelinkCheckSocket:(id)arg0;
- (void)setMultiTunnels:(BOOL)arg0;
- (void)setSupportWr:(BOOL)arg0;
- (void)setExternalLelinkCheckSocket:(id)arg0;
- (id)alias;
- (long long)port;
- (id)init;
- (void)setPort:(long long)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)dict;
- (id)vuuid;
- (long long)remotePort;
- (unsigned long long)serviceType;
- (void)setServiceType:(unsigned long long)arg0;
- (id)appID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (void)setAlias:(id)arg0;
- (void)dealloc;
- (void)setRemotePort:(long long)arg0;
- (id)originalName;
- (void)setOriginalName:(id)arg0;
- (id)ipAddress;
- (void)setIpAddress:(id)arg0;
- (void)applicationDidBecomeActiveNotification:(id)arg0;
- (void)socket:(id)arg0 didConnectToHost:(id)arg1 port:(unsigned short)arg2;

@end