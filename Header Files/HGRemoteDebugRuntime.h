//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSMutableDictionary, NSDictionary, NSTimer, HGConnectionStatus, NSString, HGRemoteDebugAgent;

@interface HGRemoteDebugRuntime : HGRuntime <HGApplicationLifeCycleMessage, HGRemoteDebugAgentDelegate> {
    BOOL _inLocalNetwork;
    BOOL _isFastMode;
    int _ideInspectVersion;
    HGRemoteDebugAgent *_debugAgent;
    NSString *_uniqueTimeID;
    NSDictionary *_methodMapping;
    NSTimer *_timer;
    NSTimer *_quickTriggerTimer;
    NSRecursiveLock *_responseDictLocker;
    NSMutableDictionary *_networkResponseDict;
    HGConnectionStatus *_connectionStatus;
    NSString *_selectServerURLString;
    NSString *_localServerURLString;
    NSString *_roomServerURLString;
}

@property (copy, nonatomic) NSDictionary *methodMapping;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *quickTriggerTimer;
@property (retain, nonatomic) NSRecursiveLock *responseDictLocker;
@property (retain, nonatomic) NSMutableDictionary *networkResponseDict;
@property (retain, nonatomic) HGConnectionStatus *connectionStatus;
@property (copy, nonatomic) NSString *selectServerURLString;
@property (copy, nonatomic) NSString *localServerURLString;
@property (copy, nonatomic) NSString *roomServerURLString;
@property (nonatomic) BOOL inLocalNetwork;
@property (nonatomic) BOOL isFastMode;
@property (retain, nonatomic) HGRemoteDebugAgent *debugAgent;
@property (nonatomic) int ideInspectVersion;
@property (copy, nonatomic) NSString *uniqueTimeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFastMode;
- (void)applicationExitWithUniqueID:(id)arg0;
- (void)updateUniqueID:(id)arg0;
- (void)webSocketDidOpen:(id)arg0;
- (void)setDebugAgent:(id)arg0;
- (id)debugAgent;
- (void)setIdeInspectVersion:(int)arg0;
- (void)setNetworkResponseDict:(id)arg0;
- (void)setResponseDictLocker:(id)arg0;
- (void)setInLocalNetwork:(BOOL)arg0;
- (void)setIsFastMode:(BOOL)arg0;
- (void)reconnectIfNeed;
- (id)quickTriggerTimer;
- (void)invalidateQuickTriggerTimer;
- (void)setInitDebugRuntimeStatus;
- (void)setLocalServerURLString:(id)arg0;
- (void)setRoomServerURLString:(id)arg0;
- (id)localServerURLString;
- (id)roomServerURLString;
- (void)setSelectServerURLString:(id)arg0;
- (void)connectRemoteDebugSocket;
- (int)ideInspectVersion;
- (void)setQuickTriggerTimer:(id)arg0;
- (void)sendInitToIDE;
- (id)selectServerURLString;
- (id)addIDToIDEServerURL:(id)arg0 queryParameter:(id)arg1;
- (void)sendAppCloseToIDE;
- (id)uniqueTimeID;
- (id)responseDictLocker;
- (id)networkResponseDict;
- (id)getMimeTypeWithStr:(id)arg0;
- (void)sendPingToIDE;
- (void)setUniqueTimeID:(id)arg0;
- (void)sendAppOnlineToIDE;
- (void)initTimer;
- (BOOL)inLocalNetwork;
- (void)sendRemoveStorageToIDE:(id)arg0;
- (void)webSocketDidReceiveEvent:(id)arg0;
- (void)webSocketDidReceiveMessage:(id)arg0;
- (void)webSocketDidReceiveCDPCallBackMessage:(id)arg0;
- (void)webSocketDidReceiveDomMessage:(id)arg0;
- (void)webSocketManager:(id)arg0 didFailWithError:(id)arg1;
- (void)webSocketManager:(id)arg0 didCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(BOOL)arg3;
- (void)sendQuickJSErrorToIDE:(id)arg0 withSource:(id)arg1;
- (void)sendRequestParamToIDE:(id)arg0;
- (void)sendResponseDataToIDE:(id)arg0;
- (void)sendRequestFailedToIDE:(id)arg0;
- (void)sendSetStorageToIDE:(id)arg0;
- (void)sendUpdateStorageToIDE:(id)arg0;
- (void)sendClearStorageToIDE;
- (void)sendAppDataToIDE:(id)arg0 withWebviewId:(id)arg1 route:(id)arg2;
- (void)sendRouteToIDEWithWebviewId:(id)arg0 route:(id)arg1;
- (void)asyncSendDomMessage:(id)arg0;
- (id)methodMapping;
- (void)setMethodMapping:(id)arg0;
- (id)projectType;
- (id)timer;
- (void)invalidateTimer;
- (id)init;
- (void).cxx_destruct;
- (id)connectionStatus;
- (void)setTimer:(id)arg0;
- (void)setConnectionStatus:(id)arg0;
- (void)dealloc;
- (id)getCurrentTime;

@end