//
//     Generated by private class-dump
//

@interface IESLiveChargeVerifyManager : NSObject

+ (id)sharedManager;

- (void)goToVerifyWithSceneCodeString:(id)arg0 Completion:(id /* block */)arg1;
- (void)arouseNewCertifyProcessWithScene:(id)arg0 flow:(id)arg1 ticket:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)arouseNewFullAuthCertifyProcessWithScene:(id)arg0 flow:(id)arg1 ticket:(id)arg2 withCompleteBlock:(id /* block */)arg3;

@end
