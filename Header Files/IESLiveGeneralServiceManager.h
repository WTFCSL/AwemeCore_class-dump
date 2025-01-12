//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveGeneralServiceLaunchParam, NSRecursiveLock, IESLiveGuideModel, NSLock, NSMutableDictionary, NSString, NSMutableArray, IESLiveComponentContext;

@interface IESLiveGeneralServiceManager : NSObject <IESLiveGeneralService, IESLiveDIExteriorDelegate> {
    BOOL _leaved;
    BOOL _optEnable;
    BOOL _lazyLoadEnable;
    IESLiveGeneralServiceLaunchParam *_launchParam;
    unsigned long long _enterStage;
    NSMutableArray *_registerClasses;
    NSMutableDictionary *_lazyProtocolsMap;
    NSMutableDictionary *_lazyActionsMap;
    NSMutableDictionary *_serviceEntityMap;
    NSMutableDictionary *_generalServiceImps;
    id _room;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    IESLiveGuideModel *_guideModel;
    NSRecursiveLock *_lock;
    NSLock *_mapLock;
    NSMutableDictionary *_serviceProtocolPool;
    NSMutableDictionary *_serviceActionPool;
    NSMutableDictionary *_generalServiceProtocols;
}

@property (retain, nonatomic) IESLiveGeneralServiceLaunchParam *launchParam;
@property (nonatomic) unsigned long long enterStage;
@property (retain, nonatomic) NSMutableArray *registerClasses;
@property (retain, nonatomic) NSMutableDictionary *lazyProtocolsMap;
@property (retain, nonatomic) NSMutableDictionary *lazyActionsMap;
@property (retain, nonatomic) NSMutableDictionary *serviceEntityMap;
@property (retain, nonatomic) NSMutableDictionary *generalServiceImps;
@property (nonatomic) BOOL leaved;
@property (retain, nonatomic) id room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSLock *mapLock;
@property (retain, nonatomic) NSMutableDictionary *serviceProtocolPool;
@property (retain, nonatomic) NSMutableDictionary *serviceActionPool;
@property (nonatomic) BOOL optEnable;
@property (nonatomic) BOOL lazyLoadEnable;
@property (retain, nonatomic) NSMutableDictionary *generalServiceProtocols;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideModel;
- (id)componentContext;
- (void)setGuideModel:(id)arg0;
- (void)setComponentContext:(id)arg0;
- (void)setRegisterClasses:(id)arg0;
- (void)setLaunchParam:(id)arg0;
- (id)launchParam;
- (BOOL)lazyLoadEnable;
- (void)remoteRoomDataReady:(id)arg0;
- (void)launchWithParam:(id)arg0;
- (void)loadBatchWithRoom:(id)arg0 trackContext:(id)arg1 componentContext:(id)arg2;
- (void)notifyObjectWithProtocol:(id)arg0;
- (void)notifySingletonObjectWithProtocol:(id)arg0;
- (void)notifyPrototypeObjectWithProtocol:(id)arg0;
- (void)setGeneralServiceImps:(id)arg0;
- (void)setLazyProtocolsMap:(id)arg0;
- (void)setLazyActionsMap:(id)arg0;
- (void)setServiceEntityMap:(id)arg0;
- (void)setMapLock:(id)arg0;
- (void)setOptEnable:(BOOL)arg0;
- (void)setLazyLoadEnable:(BOOL)arg0;
- (void)setEnterStage:(unsigned long long)arg0;
- (void)lacunchAllService;
- (id)generalServiceImps;
- (id)loadRoomInfoWithService:(id)arg0;
- (void)clearAllService;
- (BOOL)leaved;
- (void)setLeaved:(BOOL)arg0;
- (id)lazyProtocolsMap;
- (id)lazyActionsMap;
- (void)checkSaveServiceProtocols;
- (void)saveLazyInfoWithClass:(Class)arg0;
- (id)serviceEntityMap;
- (unsigned long long)enterStage;
- (void)checkProtocolAndActionBindService:(id)arg0;
- (id)mapLock;
- (void)bindProtocolServiceIntoPool:(id)arg0 service:(id)arg1;
- (void)bindActionIntoPool:(id)arg0 service:(id)arg1;
- (BOOL)optEnable;
- (void)lazyCheckAndLoadWithProtocol:(id)arg0;
- (id)dynamicCreateService:(Class)arg0;
- (BOOL)checkUseProtocol:(id)arg0;
- (id)serviceProtocolPool;
- (void)setGeneralServiceProtocols:(id)arg0;
- (id)generalServiceProtocols;
- (id)serviceWithProtocol:(id)arg0;
- (void)setServiceProtocolPool:(id)arg0;
- (id)serviceActionPool;
- (void)setServiceActionPool:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)dealloc;
- (void)setLock:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)prepareForClose;
- (id)createService:(Class)arg0;
- (id)registerClasses;

@end
