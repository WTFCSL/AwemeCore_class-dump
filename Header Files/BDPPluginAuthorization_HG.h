//
//     Generated by private class-dump
//

@class BDPBatchPermissionAuthorizer_HG, BDPOpenPlatformAlertControllerLogic_HG;

@interface BDPPluginAuthorization_HG : BDPBridgeInstancePlugin {
    BDPOpenPlatformAlertControllerLogic_HG *_alertLogic;
    BDPBatchPermissionAuthorizer_HG *_batchPermissionAuthorizer;
}

@property (retain, nonatomic) BDPOpenPlatformAlertControllerLogic_HG *alertLogic;
@property (retain, nonatomic) BDPBatchPermissionAuthorizer_HG *batchPermissionAuthorizer;

- (void)setAlertLogic:(id)arg0;
- (BOOL)shouldUseCombineAuthorizeForAppID:(id)arg0;
- (id)batchPermissionAuthorizer;
- (void)setBatchPermissionAuthorizer:(id)arg0;
- (id)alertLogic;
- (void)authorizeWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)showDouyinOpenAuthWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)openSettingWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getSettingWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end