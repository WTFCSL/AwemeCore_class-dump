//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSMutableDictionary, NSDictionary, NSMutableSet;
@protocol BDUGLuckyDebugProtocol, BDUGHostSettingsProtocol;

@interface BDUGLuckyServiceManager : NSObject {
    BOOL _deadlockFixSwitch;
    id<BDUGHostSettingsProtocol> _hostSettingsDataProvider;
    id<BDUGLuckyDebugProtocol> _debugDataProvider;
    NSDictionary *_abTestSettings;
    NSMutableDictionary *_protocolToClassMap;
    NSMutableDictionary *_protocolToObjectMap;
    NSRecursiveLock *_recLock;
    NSMutableSet *_protocolClassCalledSet;
}

@property (nonatomic) BOOL deadlockFixSwitch;
@property (copy, nonatomic) NSDictionary *abTestSettings;
@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToObjectMap;
@property (retain) NSRecursiveLock *recLock;
@property (retain) NSMutableSet *protocolClassCalledSet;
@property (retain, nonatomic) id<BDUGHostSettingsProtocol> hostSettingsDataProvider;
@property (retain, nonatomic) id<BDUGLuckyDebugProtocol> debugDataProvider;

+ (id)getObjectWithProtocol:(id)arg0;
+ (Class)getClassWithProtocol:(id)arg0;
+ (BOOL)_bindClass:(Class)arg0 toProtocol:(id)arg1;
+ (id)_getObjectWithProtocol:(id)arg0;
+ (Class)_getClassWithProtocol:(id)arg0;
+ (BOOL)_checkSelector:(SEL)arg0 withProtocol:(id)arg1 assert:(BOOL)arg2;
+ (BOOL)bindClass:(Class)arg0 toProtocol:(id)arg1;
+ (BOOL)checkSelector:(SEL)arg0 withProtocol:(id)arg1 assert:(BOOL)arg2;
+ (BOOL)checkClassSelector:(SEL)arg0 withProtocol:(id)arg1 assert:(BOOL)arg2;
+ (void)configABTestSettings:(id)arg0;
+ (BOOL)isDegradationSchemeForProtocol:(id)arg0;
+ (id)_getProtocolesForCls:(Class)arg0;
+ (BOOL)_isClassEnableRebind:(Class)arg0;
+ (BOOL)_bindClass:(Class)arg0 toProtocol:(id)arg1 supportRebind:(BOOL)arg2;
+ (void)collectBDUGService;
+ (id)getServiceList;
+ (BOOL)_isDegradationSchemeForProtocol:(id)arg0;
+ (void)_configABTestSettings:(id)arg0;
+ (void)_registerDefaultSercice:(Class)arg0;
+ (void)_registerCustomsizedService:(Class)arg0;
+ (BOOL)_checkClassSelector:(SEL)arg0 withProtocol:(id)arg1 assert:(BOOL)arg2;
+ (void)registerDefaultSercice:(Class)arg0;
+ (void)registerCustomsizedService:(Class)arg0;
+ (id)_bdug_service_AWEPineappleLuckyIMService280;
+ (id)_bdug_service_AWELuckySDKAdapter1170;
+ (id)_bdug_service_AWELuckySDKDialogManagerAdapter1250;
+ (id)_bdug_service_AWELuckySDKMotionService200;
+ (id)sharedInstance;

- (id)abTestSettings;
- (id)abTestSettings;
- (void)setAbTestSettings:(id)arg0;
- (void)setAbTestSettings:(id)arg0;
- (id)defaultAccessKey;
- (id)_getObjectWithProtocol:(id)arg0;
- (Class)_getClassWithProtocol:(id)arg0;
- (BOOL)_checkSelector:(SEL)arg0 withProtocol:(id)arg1 assert:(BOOL)arg2;
- (id)getObjectWithKey:(id)arg0 subKey:(id)arg1 subSubKey:(id)arg2;
- (id)getLuckyGeckoAccessKey;
- (id)getLuckyCatGeckoAccessKey;
- (id)debugDataProvider;
- (id)__getLuckyGeckoAccessKeyWithAppSettingsKey:(id)arg0;
- (id)getGeckoDataSubSubKey;
- (id)getLuckyDogGeckoAccessKey;
- (void)registerABTestService;
- (BOOL)_bindClass:(Class)arg0 toProtocol:(id)arg1 supportRebind:(BOOL)arg2;
- (BOOL)__isDegradationSchemeForProtocol:(id)arg0;
- (void)registerAllService;
- (void)_triggerSetupIfNeededWithProtocolName:(id)arg0 protocol:(id)arg1;
- (id)_getObjectWithClass:(Class)arg0;
- (void)_registerServiceWithClass:(Class)arg0;
- (void)registerSwiftService:(Class)arg0;
- (id)_buildProtocolToABClassMap;
- (id)_getProtocolNamesForCls:(Class)arg0;
- (id)_getABModules;
- (void)setDeadlockFixSwitch:(BOOL)arg0;
- (void)_configABTestSettings:(id)arg0;
- (BOOL)_checkClassSelector:(SEL)arg0 withProtocol:(id)arg1 assert:(BOOL)arg2;
- (id)hostSettingsDataProvider;
- (id)hostSettingsDataProvider;
- (void)setHostSettingsDataProvider:(id)arg0;
- (void)setDebugDataProvider:(id)arg0;
- (BOOL)deadlockFixSwitch;
- (id)protocolToClassMap;
- (void)setProtocolToClassMap:(id)arg0;
- (id)protocolToObjectMap;
- (void)setProtocolToObjectMap:(id)arg0;
- (id)recLock;
- (void)setRecLock:(id)arg0;
- (id)protocolClassCalledSet;
- (void)setProtocolClassCalledSet:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end