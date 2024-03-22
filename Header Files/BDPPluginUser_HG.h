//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID;

@interface BDPPluginUser_HG : BDPBridgeInstancePlugin <BDPPrivacyRegulationViewDelegate_HG> {
    BOOL _isLoginFinish;
    BOOL _isHostLoginFinish;
    NSString *_gameOrientation;
    BDPUniqueID *_uniqueID;
}

@property (nonatomic) BOOL isLoginFinish;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickPrivacyView:(id)arg0 type:(unsigned long long)arg1;
- (void)tma_loginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (BOOL)isLoginFinish;
- (void)setIsLoginFinish:(BOOL)arg0;
- (id)transformErrorWithError:(id)arg0;
- (void)loginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getUserInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)checkSessionWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getUseDurationWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)dealUserRelationWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_webviewGetPhoneNumberWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)_serviceGetPhoneNumberWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)hostLoginWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getHostInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
