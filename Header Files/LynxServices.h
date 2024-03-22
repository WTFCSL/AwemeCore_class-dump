//
//     Generated by private class-dump
//

@class NSMutableSet, NSMutableDictionary, NSRecursiveLock;

@interface LynxServices : NSObject {
    NSMutableDictionary *_protocolToClassMap;
    NSMutableDictionary *_protocolToInstanceMap;
    NSRecursiveLock *_recLock;
    NSMutableSet *_protocolClassCalledSet;
}

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToInstanceMap;
@property (retain) NSRecursiveLock *recLock;
@property (retain) NSMutableSet *protocolClassCalledSet;

+ (void)lynxLazyLoad;
+ (void)bindClass:(Class)arg0 toProtocol:(id)arg1;
+ (id)getInstanceWithProtocol:(id)arg0 bizID:(id)arg1;
+ (id)__lynx_auto_register_serivce__LynxAsyncService450;
+ (id)__lynx_auto_register_serivce__LynxServiceKryptonImpl180;
+ (id)__lynx_auto_register_serivce__LynxAppLogService110;
+ (id)__lynx_auto_register_serivce__LynxImageService340;
+ (id)__lynx_auto_register_serivce__LynxModuleService80;
+ (id)__lynx_auto_register_serivce__LynxMonitorService200;
+ (id)__lynx_auto_register_serivce__LynxNetworkService680;
+ (id)__lynx_auto_register_serivce__LynxResourceService110;
+ (id)__lynx_auto_register_serivce__LynxServiceInitializer110;
+ (id)__lynx_auto_register_serivce__LynxTrackEventService140;
+ (id)__lynx_auto_register_serivce__LynxTrailService90;
+ (id)__lynx_auto_register_serivce__LynxVideoService70;
+ (id)sharedInstance;
+ (void)registerService:(Class)arg0;

- (void)bindClass:(Class)arg0 toProtocol:(id)arg1;
- (id)protocolToClassMap;
- (void)setProtocolToClassMap:(id)arg0;
- (id)recLock;
- (void)setRecLock:(id)arg0;
- (id)protocolClassCalledSet;
- (void)setProtocolClassCalledSet:(id)arg0;
- (id)getInstanceWithProtocol:(id)arg0 bizID:(id)arg1;
- (id)protocolToInstanceMap;
- (id)getInstanceWithClass:(Class)arg0;
- (void)setProtocolToInstanceMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end