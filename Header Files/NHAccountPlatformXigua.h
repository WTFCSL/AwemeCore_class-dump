//
//     Generated by private class-dump
//

@class NSString;

@interface NHAccountPlatformXigua : NSObject <XiGuaOpenSDKApiDelegate, NHAccountPlatformProtocol> {
    id /* block */ _XiguaSuccessBlock;
    id /* block */ _XiguaFailureBlock;
    id /* block */ _XiguaCancelBlock;
}

@property (copy, nonatomic) id /* block */ XiguaSuccessBlock;
@property (copy, nonatomic) id /* block */ XiguaFailureBlock;
@property (copy, nonatomic) id /* block */ XiguaCancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerApp:(id)arg0;
- (void)requestLogin:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)requestBind:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (void)requestAccessToken:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (BOOL)isSSOAvailable;
- (void)OAuth:(id /* block */)arg0 failure:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (id)parametersNeeded:(id)arg0;
- (void)setXiguaSuccessBlock:(id /* block */)arg0;
- (void)setXiguaFailureBlock:(id /* block */)arg0;
- (void)setXiguaCancelBlock:(id /* block */)arg0;
- (id /* block */)XiguaFailureBlock;
- (id /* block */)XiguaSuccessBlock;
- (id /* block */)XiguaCancelBlock;
- (void)didReceiveResponse:(id)arg0;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)arg0;

@end