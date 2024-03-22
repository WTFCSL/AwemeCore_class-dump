//
//     Generated by private class-dump
//

@class NSString, IESEffectModel;

@interface AWEStickerApplySwitchModeHandler : AWEStickerApplyBaseHandler <ACCRecordSwitchModeServiceSubscriber> {
    IESEffectModel *_needRestoredProp;
}

@property (retain, nonatomic) IESEffectModel *needRestoredProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)handlerDidBecomeActive;
- (void)camera:(id)arg0 didApplySticker:(id)arg1 success:(BOOL)arg2;
- (void)p_checkRestorePropAfterCaptureReady:(id)arg0 oldMode:(id)arg1;
- (BOOL)needSaveRestoredPropModeId:(long long)arg0;
- (void)p_storePropForSwitcMode;
- (id)needRestoredProp;
- (void)p_restorePropForSwitcMode;
- (void)setNeedRestoredProp:(id)arg0;
- (void).cxx_destruct;

@end
