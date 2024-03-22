//
//     Generated by private class-dump
//

@class DIRSConfig, NSString, NSMutableDictionary, NSMutableSet, NSDate, NSMutableArray, BDTrackerConfig;
@protocol AWETrackerProtocol;

@interface TrackerService : HTSService <TrackerServiceAdapter, HTSService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _trackerHookerRWLock;
    BOOL _isEventV1Enabled;
    BOOL _abTestForV3AsyncEnabled;
    BOOL _trackBacktraceEnabled;
    BOOL _bdTrackBacktraceEnabled;
    BOOL _shouldTurnOnTrackerEventFilter;
    BOOL _didReady;
    BOOL _trackerHookerEnable;
    BOOL _trackerHookerWithBDTrackerProtocol;
    int _customLogLevel;
    id /* block */ _configParamsBlock;
    id /* block */ _commonParamsBlock;
    id /* block */ _customHeaderBlock;
    id /* block */ _customEventBlock;
    id<AWETrackerProtocol> _trakerProtocol;
    NSDate *_firstTimeStartUpDate;
    BDTrackerConfig *_bdtrackerConfig;
    id /* block */ _logSettingsHTTPHeaderBlock;
    DIRSConfig *_irisConfig;
    NSMutableDictionary *_customEventDictionary;
    NSMutableSet *_customEventKeySet;
    id /* block */ _abTestblock;
    id /* block */ _filiterBlock;
    NSMutableArray *_additionalVidBlocks;
    id /* block */ _abVersionBlock;
    id /* block */ _vidBlock;
    NSMutableArray *_cache;
    NSMutableArray *_trackerHookerArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *customEventDictionary;
@property (retain, nonatomic) NSMutableSet *customEventKeySet;
@property (copy, nonatomic) id /* block */ abTestblock;
@property (nonatomic) BOOL shouldTurnOnTrackerEventFilter;
@property (copy, nonatomic) id /* block */ filiterBlock;
@property (retain, nonatomic) NSMutableArray *additionalVidBlocks;
@property (copy, nonatomic) id /* block */ abVersionBlock;
@property (copy, nonatomic) id /* block */ vidBlock;
@property (nonatomic) BOOL trackBacktraceEnabled;
@property (nonatomic) BOOL bdTrackBacktraceEnabled;
@property (retain, nonatomic) NSMutableArray *cache;
@property (nonatomic) BOOL didReady;
@property (retain, nonatomic) NSMutableArray *trackerHookerArray;
@property (nonatomic) BOOL trackerHookerEnable;
@property (nonatomic) BOOL trackerHookerWithBDTrackerProtocol;
@property (copy, nonatomic) id /* block */ configParamsBlock;
@property (copy, nonatomic) id /* block */ commonParamsBlock;
@property (copy, nonatomic) id /* block */ customHeaderBlock;
@property (copy, nonatomic) id /* block */ customEventBlock;
@property (retain, nonatomic) id<AWETrackerProtocol> trakerProtocol;
@property (copy, nonatomic) NSDate *firstTimeStartUpDate;
@property (nonatomic) BOOL isEventV1Enabled;
@property (retain) BDTrackerConfig *bdtrackerConfig;
@property (nonatomic) BOOL abTestForV3AsyncEnabled;
@property (copy, nonatomic) id /* block */ logSettingsHTTPHeaderBlock;
@property (retain, nonatomic) DIRSConfig *irisConfig;
@property (nonatomic) int customLogLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)_aweLazyRegisterLoad_AWEPad;

- (void)eventData:(id)arg0;
- (id)clientDID;
- (void)setLaunchFrom:(unsigned long long)arg0;
- (void)trackCustomKey:(id)arg0 withEvent:(id)arg1;
- (void)onServiceInit;
- (id)aAWEPadModuleAdapter;
- (BOOL)shouldTurnOnTrackerEventFilter;
- (unsigned long long)sdkLaunchFrom;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)trackLogData:(id)arg0;
- (void)addAdditionalVidBlock:(id /* block */)arg0;
- (void)clearAllEventData;
- (void)addTrackerDeallocCallbackTo:(id)arg0 with:(id /* block */)arg1;
- (id)applyAspectsForEvent:(id)arg0 context:(id)arg1;
- (id)transmissionNodeInfoForEvent:(id)arg0 withBlock:(id /* block */)arg1;
- (id)transmissionNodeInfoForEvent:(id)arg0 withParams:(id)arg1;
- (id)applyTransmissionForEvent:(id)arg0 forObject:(id)arg1;
- (id)applyTransmissionForEvent:(id)arg0 forObject:(id)arg1 trackerContext:(id)arg2;
- (id)transmissionChainForEvent:(id)arg0 forObject:(id)arg1;
- (id)applyTransmissionWithChain:(id)arg0 trackerContext:(id)arg1;
- (void)trackEvent:(id)arg0 label:(id)arg1 value:(id)arg2 extra:(id)arg3 attributes:(id)arg4;
- (void)trackEvent:(id)arg0 params:(id)arg1 to:(unsigned long long)arg2;
- (void)trackEventData:(id)arg0;
- (id /* block */)commonParamsBlock;
- (void)setCommonParamsBlock:(id /* block */)arg0;
- (void)setCustomHeaderBlock:(id /* block */)arg0;
- (id /* block */)customHeaderBlock;
- (void)setConfigParamsBlock:(id /* block */)arg0;
- (id /* block */)configParamsBlock;
- (void)setEventEnable:(BOOL)arg0;
- (void)startWithAppID:(id)arg0 channel:(id)arg1 appName:(id)arg2 autoActivated:(BOOL)arg3;
- (void)setEventSamplingEnable:(BOOL)arg0;
- (void)setExpectedBatchEventInterval:(double)arg0 withCaller:(id)arg1 withUniqueKey:(id)arg2;
- (void)setCustomEventBlock:(id /* block */)arg0;
- (void)setVidBlock:(id /* block */)arg0;
- (void)setEventUserIDEnable:(BOOL)arg0;
- (void)setLogSettingsHTTPHeaderBlock:(id /* block */)arg0;
- (id /* block */)customEventBlock;
- (id /* block */)logSettingsHTTPHeaderBlock;
- (id /* block */)vidBlock;
- (void)trackEvent:(id)arg0 params:(id)arg1 needStagingFlag:(BOOL)arg2;
- (id)firstTimeStartUpDate;
- (void)addTrackerHookerForEvents:(id)arg0 withEventhandler:(id /* block */)arg1;
- (void)setFirstTimeStartUpDate:(id)arg0;
- (BOOL)didReady;
- (BOOL)isDataIRISEnabled;
- (void)setTrackerHookerEnable:(BOOL)arg0;
- (void)setTrackerHookerWithBDTrackerProtocol:(BOOL)arg0;
- (void)addTrackerAllHookerWithEventHandler:(id /* block */)arg0;
- (void)setTeaEventSamplingEnable:(BOOL)arg0;
- (void)setZstdCompressionEnable:(BOOL)arg0;
- (void)setupHADispatcher:(BOOL)arg0;
- (void)setEnablePrioritizedEvents:(BOOL)arg0;
- (void)setABTestBlock:(id /* block */)arg0;
- (void)setTurnOnTrackerEventFilter:(BOOL)arg0;
- (id)queryExposureExperimentsForUserKey:(id)arg0;
- (id)queryExposureExperimentsForUserKey:(id)arg0;
- (void)setTrakerProtocol:(id)arg0;
- (void)setTransferBlock:(id /* block */)arg0;
- (id)irisConfig;
- (void)enableDataIRIS;
- (void)configBacktraceIsEnable:(BOOL)arg0 InAWETrackerService:(int)arg1 AndIsEnable:(BOOL)arg2 InBDTrackProtocol:(int)arg3 ForBackTraceDepth:(int)arg4;
- (void)adp_trackEvent:(id)arg0 params:(id)arg1 to:(unsigned long long)arg2;
- (BOOL)replacementCheckEvent:(id)arg0 withOriginParams:(id)arg1 newParams:(id)arg2 extraInfo:(id)arg3;
- (BOOL)trackBacktraceEnabled;
- (BOOL)bdTrackBacktraceEnabled;
- (BOOL)trackerHookerEnable;
- (BOOL)trackerHookerWithBDTrackerProtocol;
- (id)getTrackerHookers;
- (void)registerEventV1WithKey:(id)arg0;
- (id)eventV1CategoryName;
- (void)eventV1:(id)arg0 attributes:(id)arg1;
- (void)eventV1:(id)arg0 label:(id)arg1;
- (id)additionalVidBlocks;
- (void)setCustomEventDictionary:(id)arg0;
- (void)setCustomEventKeySet:(id)arg0;
- (void)startDataIRISWithAppID:(id)arg0 channel:(id)arg1 appName:(id)arg2 autoActivated:(BOOL)arg3;
- (void)startTTWithAppID:(id)arg0 channel:(id)arg1 appName:(id)arg2 autoActivated:(BOOL)arg3;
- (void)setDidReady:(BOOL)arg0;
- (void)trackCache;
- (id /* block */)abVersionBlock;
- (BOOL)getABTestCase:(char *)arg0;
- (id)trackerHookerArray;
- (void)setAbTestblock:(id /* block */)arg0;
- (void)setShouldTurnOnTrackerEventFilter:(BOOL)arg0;
- (id)customEventDictionary;
- (id)customEventKeySet;
- (void)setTrackBacktraceEnabled:(BOOL)arg0;
- (void)setBdTrackBacktraceEnabled:(BOOL)arg0;
- (void)addToCacheWithEvent:(id)arg0 params:(id)arg1 platform:(unsigned long long)arg2;
- (void)trackEventV1:(id)arg0 params:(id)arg1;
- (id /* block */)filiterBlock;
- (void)broadcastEventData:(id)arg0;
- (BOOL)checkVaildForCustomEvent;
- (unsigned long long)mapForLaunchFrom:(unsigned long long)arg0;
- (id)trakerProtocol;
- (id /* block */)abTestblock;
- (void)setFiliterBlock:(id /* block */)arg0;
- (void)startWithAppID:(id)arg0 channel:(id)arg1 appName:(id)arg2 autoActivated:(BOOL)arg3 eventV1Key:(id)arg4;
- (void)setupZstdDict:(id)arg0;
- (void)setupTrackerParamsCheck;
- (void)setAWETrackerFiliterBlock:(id /* block */)arg0;
- (BOOL)isEventV1Enabled;
- (void)setIsEventV1Enabled:(BOOL)arg0;
- (id)bdtrackerConfig;
- (void)setBdtrackerConfig:(id)arg0;
- (BOOL)abTestForV3AsyncEnabled;
- (void)setAbTestForV3AsyncEnabled:(BOOL)arg0;
- (void)setIrisConfig:(id)arg0;
- (int)customLogLevel;
- (void)setCustomLogLevel:(int)arg0;
- (void)setAdditionalVidBlocks:(id)arg0;
- (void)setAbVersionBlock:(id /* block */)arg0;
- (void)setTrackerHookerArray:(id)arg0;
- (void)setCache:(id)arg0;
- (void)handleURL:(id)arg0;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
- (id)deviceID;
- (id)sessionID;
- (id)installID;
- (void)dealloc;

@end