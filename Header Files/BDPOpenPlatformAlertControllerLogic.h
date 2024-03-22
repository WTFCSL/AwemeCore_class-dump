//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID;

@interface BDPOpenPlatformAlertControllerLogic : NSObject <BDPPrivacyRegulationViewDelegate> {
    id /* block */ _completionBlk;
    BDPUniqueID *_uniqueID;
    NSString *_authInfoAll;
    NSString *_authInfoShow;
    NSString *_authInfoSelect;
}

@property (copy, nonatomic) id /* block */ completionBlk;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *authInfoAll;
@property (retain, nonatomic) NSString *authInfoShow;
@property (retain, nonatomic) NSString *authInfoSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)completionBlk;
- (void)setCompletionBlk:(id /* block */)arg0;
- (void)requestOpenAuthScopeInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)privateShowSingleOpenAlertVC:(id)arg0;
- (void)privateShowMultiOpenAlertVC:(id)arg0;
- (void)authorize:(id)arg0;
- (id)contentView:(id)arg0;
- (void)showOpenPlatformAlertController:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (double)calculationCellHeightWithContent:(id)arg0;
- (void)clickPrivacyViewWithType:(unsigned long long)arg0;
- (void)initAWEOpenplatformAuthInfo;
- (void)trackAwemweAuthResult:(id)arg0;
- (void)trackAwemweAuthTrigger;
- (long long)errorCodeForErrNo:(long long)arg0;
- (void)setAuthInfoSelect:(id)arg0;
- (void)trackAwemweAuthSubmit;
- (void)trackAwemweAuthRefuse;
- (void)trackAwemweAuthNotify;
- (void)setAuthInfoAll:(id)arg0;
- (void)setAuthInfoShow:(id)arg0;
- (id)commonAWEOpenplatformAuthParams;
- (id)authInfoAll;
- (id)authInfoShow;
- (id)authInfoSelect;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
