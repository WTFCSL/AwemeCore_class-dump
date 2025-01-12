//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMapTable;

@interface AWEOpenPlatformLynxAuthManager : NSObject <BDXContainerLifecycleProtocol> {
    NSMutableDictionary *_authInfoMap;
    NSMapTable *_containerMap;
}

@property (retain, nonatomic) NSMutableDictionary *authInfoMap;
@property (retain, nonatomic) NSMapTable *containerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (BOOL)shouldUseLynxAuth:(id)arg0;
- (void)startLynxAuth:(id)arg0 originParams:(id)arg1 withAuthCompletion:(id /* block */)arg2 withFailCompletion:(id /* block */)arg3;
- (void)setAuthInfoMap:(id)arg0;
- (void)subscribeLynxAuthEvent;
- (BOOL)checkAuthEntranceInAllowList:(id)arg0;
- (BOOL)checkAuthPageTypeInAllowList:(id)arg0;
- (BOOL)checkAuthPageSupportLandScape:(id)arg0;
- (void)requestAuthInfoWithModel:(id)arg0 params:(id)arg1;
- (id)authInfoMap;
- (id)sourceFromFlowType:(unsigned long long)arg0;
- (id)containerMap;
- (void)runCompletionWithAuthID:(id)arg0 responseModel:(id)arg1;
- (void)setContainerMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
