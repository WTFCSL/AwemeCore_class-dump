//
//     Generated by private class-dump
//

@protocol BDUGLuckyDogMotionProtocol <BDUGServiceProtocol>

- (void)vibrateWithStyle:(long long)arg0;
- (void)registerShakeType:(long long)arg0 bussinessId:(id)arg1 successBlock:(id /* block */)arg2;
- (void)unRegisterWithBussinessId:(id)arg0;
- (long long)currentGlobleShakCount;

@end
