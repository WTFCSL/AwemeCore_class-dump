//
//     Generated by private class-dump
//

@class LynxTemplateData, NSString, NSDictionary, NSSet, BDLynxBridgeRegistry, NSMutableArray, LynxView;
@protocol BDHMLynxJSBMonitorAdapterProtocol;

@interface BDLynxBridge : NSObject {
    BOOL _isMapRegistry;
    NSMutableArray *_methods;
    LynxView *_lynxView;
    NSDictionary *_globalProps;
    LynxTemplateData *_globalPropsData;
    NSSet *_directPerformMethods;
    BDLynxBridgeRegistry *_methodRegistry;
    NSMutableArray *_executors;
    NSString *_namescope;
}

@property (class, nonatomic) BOOL shouldUseMapRegistry;

@property (weak, nonatomic) id<BDHMLynxJSBMonitorAdapterProtocol> bdhm_jsbDelegate;
@property (retain, nonatomic) NSMutableArray *methods;
@property (retain, nonatomic) NSMutableArray *executors;
@property (copy, nonatomic) NSString *namescope;
@property (nonatomic) BOOL isMapRegistry;
@property (readonly, weak, nonatomic) LynxView *lynxView;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) LynxTemplateData *globalPropsData;
@property (copy, nonatomic) NSSet *directPerformMethods;
@property (retain, nonatomic) BDLynxBridgeRegistry *methodRegistry;

+ (void)registerGlobalHandler:(id /* block */)arg0 forMethod:(id)arg1;
+ (void)secnf_swizzleMethods;
+ (void)secnf_enablePlugin;
+ (void)secplugin_swizzleMethods;
+ (void)secplugin_enablePlugins;
+ (void)callEvent:(id)arg0 containerID:(id)arg1 params:(id)arg2;
+ (void)registerGlobalSessionHandler:(id)arg0 forMethod:(id)arg1 namescope:(id)arg2 authType:(long long)arg3;
+ (void)registerGlobalSessionHandler:(id /* block */)arg0 forMethod:(id)arg1 namescope:(id)arg2;
+ (void)registerGlobalHandler:(id /* block */)arg0 forMethod:(id)arg1 namescope:(id)arg2;
+ (void)registerGlobalHandler:(id /* block */)arg0 forMethod:(id)arg1 authType:(long long)arg2;
+ (void)registerGlobalHandler:(id /* block */)arg0 forMethod:(id)arg1 namescope:(id)arg2 authType:(long long)arg3;
+ (BOOL)shouldUseMapRegistry;
+ (void)_registerHandler:(id /* block */)arg0 sessionHandler:(id /* block */)arg1 forMethod:(id)arg2 namescope:(id)arg3 intoMethods:(id)arg4 intoRegistry:(id)arg5;
+ (void)callEvent:(id)arg0 containerID:(id)arg1 params:(id)arg2 code:(long long)arg3;
+ (void)setShouldUseMapRegistry:(BOOL)arg0;
+ (void)p_puzzle_registerHandler:(id /* block */)arg0 sessionHandler:(id /* block */)arg1 forMethod:(id)arg2 namescope:(id)arg3 intoMethods:(id)arg4;

- (id)namescope;
- (void)setNamescope:(id)arg0;
- (id)lynxView;
- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (void)addExecutor:(id)arg0;
- (void)registerHandler:(id /* block */)arg0 forMethod:(id)arg1;
- (void)attachLynxView:(id)arg0;
- (void)callEvent:(id)arg0 params:(id)arg1;
- (id /* block */)secnf_getHandlerWithMessage:(id)arg0 namescope:(id)arg1;
- (id /* block */)secnf_getSessionHandlerWithMessage:(id)arg0 namescope:(id)arg1;
- (void)secnf_fixMessage:(id)arg0 namescope:(id)arg1;
- (void)_executeMethodWithMessage:(id)arg0 callback:(id /* block */)arg1;
- (void)secplugin_executeMethodWithMessage:(id)arg0 callback:(id /* block */)arg1;
- (void)setExecutors:(id)arg0;
- (BOOL)canHandleMessage:(id)arg0;
- (id /* block */)_getHandlerWithMessage:(id)arg0;
- (id /* block */)_getSessionHandlerWithMessage:(id)arg0;
- (id)bdx_legacy_monitorInitWithLynxView:(id)arg0;
- (id)initWithLynxView:(id)arg0;
- (id)methodRegistry;
- (void)setGlobalPropsData:(id)arg0;
- (id)globalPropsData;
- (id)initWithoutLynxView;
- (void)setMethodRegistry:(id)arg0;
- (BOOL)isMapRegistry;
- (id)_findMethodInMapForMessage:(id)arg0;
- (void)setIsMapRegistry:(BOOL)arg0;
- (id)bdhm_jsbDelegate;
- (void)setBdhm_jsbDelegate:(id)arg0;
- (void)registerHandler:(id /* block */)arg0 forMethod:(id)arg1 namescope:(id)arg2;
- (void)callEvent:(id)arg0 params:(id)arg1 code:(long long)arg2;
- (id)directPerformMethods;
- (BOOL)_handleWithLynx:(id)arg0 handler:(id /* block */)arg1 sessionHandler:(id /* block */)arg2 message:(id)arg3 callback:(id /* block */)arg4;
- (id /* block */)_getHandlerWithMessage:(id)arg0 namescope:(id)arg1;
- (id /* block */)_getSessionHandlerWithMessage:(id)arg0 namescope:(id)arg1;
- (void)registerSessionHandler:(id /* block */)arg0 forMethod:(id)arg1 namescope:(id)arg2;
- (BOOL)respondsToMessage:(id)arg0;
- (void)setDirectPerformMethods:(id)arg0;
- (void)puzzle_registerHandler:(id /* block */)arg0 sessionHandler:(id /* block */)arg1 forMethod:(id)arg2 namescope:(id)arg3;
- (void)puzzle_executeMethodWithMessage:(id)arg0 callback:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)methods;
- (id)allMethods;
- (void)setMethods:(id)arg0;
- (id)executors;

@end