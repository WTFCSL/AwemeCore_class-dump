//
//     Generated by private class-dump
//

@class NSString;

@protocol ACCSideslipPropPanelFocusEditorHandleServiceProtocol <ACCSideslipPropPanelFocusHandleService>

@property (readonly, copy, nonatomic) NSString *applyedEffectId;
@property (readonly, nonatomic) long long applyedEffectIndex;

- (void)predownloadTemplateFixedResources;
- (void)updateApplyedEffectIfNeeded;
- (void)handleRemoveApplyedEffectOrTemplateIfNeededWith:(id)arg0;
- (void)resetPropTryStartTimeIfNeeded;
- (void)trackPropTryFinishEventIfNeeded;
- (BOOL)applyEffect:(id)arg0 index:(long long)arg1;
- (void)replayMusic:(id /* block */)arg0;
- (id)applyedEffectId;
- (long long)applyedEffectIndex;

@end
