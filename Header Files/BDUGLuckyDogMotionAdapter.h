//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGLuckyDogMotionAdapter : NSObject <BDUGLuckyDogMotionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeNetworkModule;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)vibrateWithStyle:(long long)arg0;
- (void)registerShakeType:(long long)arg0 bussinessId:(id)arg1 successBlock:(id /* block */)arg2;
- (void)unRegisterWithBussinessId:(id)arg0;
- (long long)currentGlobleShakCount;

@end
