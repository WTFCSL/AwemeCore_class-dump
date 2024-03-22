//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface PTYLynxBridgeModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)isValidArray:(id)arg0;
+ (id)isValidDict:(id)arg0;
+ (id)name;
+ (void)setup:(id)arg0;

- (void)registerAppLogRunEventCallback:(id)arg0 callback:(id /* block */)arg1;
- (void)removeAppLogRunEventCallback:(id)arg0;
- (void)registerMessageHandler:(id)arg0 callback:(id /* block */)arg1;
- (void)removeMessageHandler:(id)arg0;
- (void)runTask:(id)arg0 withParams:(id)arg1 async:(BOOL)arg2 entrance:(id)arg3 pendingTimeout:(double)arg4 callback:(id /* block */)arg5;
- (BOOL)isReady;

@end
