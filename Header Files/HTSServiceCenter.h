//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface HTSServiceCenter : NSObject {
    NSMutableDictionary *p_hashService;
    NSMutableDictionary *p_hashProtocolService;
    NSMutableDictionary *p_hashProtocolInstance;
    NSMutableDictionary *p_hashProtocolScope;
    NSRecursiveLock *p_lock;
    NSString *bundleName;
    Class block_cls;
    NSArray *_targetStringArray;
    NSDictionary *_abTestConfig;
}

@property (class, nonatomic) BOOL debugAssertOn;

@property (copy, nonatomic) NSArray *targetStringArray;
@property (copy, nonatomic) NSDictionary *abTestConfig;

+ (id)abConfig;
+ (id)abConfig;
+ (BOOL)getSwitchWithKey:(id)arg0;
+ (BOOL)debugAssertOn;
+ (void)setDebugAssertOn:(BOOL)arg0;
+ (id)defaultCenter;

- (void)bindClass:(Class)arg0 toProtocol:(id)arg1;
- (id)abTestConfig;
- (void)unbindProtocol:(id)arg0;
- (id)getProtocolService:(id)arg0;
- (void)setAbTestConfig:(id)arg0;
- (id)convertAndCheckForClassNameFromStandardProtocolName:(id)arg0;
- (id)targetStringArray;
- (Class)swiftClassForClassName:(id)arg0;
- (void)bindBlock:(id /* block */)arg0 toProtocol:(id)arg1;
- (BOOL)__isEmptyString:(id)arg0;
- (int)__checkScopeType:(id)arg0;
- (id)__convertAndCheckForClassNameFromStandardProtocolName:(id)arg0;
- (Class)__swiftClassForClassName:(id)arg0;
- (void)__checkDebugStandardClassName:(id)arg0 protocolName:(id)arg1;
- (int)__getScopeType:(id)arg0;
- (Class)__convertDIClass:(id)arg0;
- (BOOL)__isConformsScopeDI:(Class)arg0;
- (id)__getMultipleInstanceProtocolName:(id)arg0;
- (id)__getSingleInstanceProtocolName:(id)arg0;
- (id)__getWeakSingletonInstanceProtocolName:(id)arg0;
- (BOOL)__isSupportScopeScenarios:(id)arg0;
- (id)__getInstanceProtocol:(id)arg0;
- (void)registABTestConfig:(id /* block */)arg0;
- (void)checkDebugStandardClassName:(id)arg0 protocolName:(id)arg1;
- (Class)getStatelessProtocolService:(id)arg0;
- (Class)getClassFromProtocol:(id)arg0;
- (void)callEnterForeground;
- (void)callEnterBackground;
- (void)callTerminate;
- (void)callServiceMemoryWarning;
- (void)callClearData;
- (void)setTargetStringArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)removeService:(Class)arg0;
- (void)dealloc;
- (id)getService:(Class)arg0;

@end