//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface BDPAutoTestManager : NSObject <BDPLaunchDispatchObjectProtocol> {
    NSMutableDictionary *_handlerMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (BOOL)openWithLaunchParam:(id)arg0;
+ (void)registerDispatchObject;
+ (id)sharedInstance;

- (void)registerHandler:(id)arg0 forAction:(id)arg1;
- (BOOL)autoTestWithParam:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end