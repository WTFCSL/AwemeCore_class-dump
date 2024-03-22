//
//     Generated by private class-dump
//

@class NSArray, NSString, IESLiveSeatWidgeEffectTask;

@interface IESLiveSeatWidgeResourceManager : IESLiveMultiBaseResourceManager <IESLiveSocialInteractAction> {
    NSArray *_effects;
    IESLiveSeatWidgeEffectTask *_task;
}

@property (copy, nonatomic) NSArray *effects;
@property (retain, nonatomic) IESLiveSeatWidgeEffectTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didJoinChannelWithLayout:(id)arg0;
- (void)getEffectWithName:(id)arg0 complete:(id /* block */)arg1;
- (void)downloadWidgetEffects;
- (void)downloadEffectIfNeeded:(id)arg0;
- (void).cxx_destruct;
- (id)effects;
- (void)setTask:(id)arg0;
- (id)task;
- (void)setEffects:(id)arg0;

@end
