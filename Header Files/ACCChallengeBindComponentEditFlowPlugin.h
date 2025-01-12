//
//     Generated by private class-dump
//

@class ACCVideoEditChallengeBindComponent, NSString;
@protocol ACCFeatureComponent;

@interface ACCChallengeBindComponentEditFlowPlugin : NSObject <ACCVideoEditFlowControlSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable> {
    id<ACCFeatureComponent> _component;
}

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCVideoEditChallengeBindComponent *hostComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

+ (id)hostIdentifier;

- (void)bindServices:(id)arg0;
- (id)hostComponent;
- (void)publishServiceWillStart;
- (void)willExitEditModeWithService:(id)arg0;
- (void)dataClearForBackup:(id)arg0;
- (void)willDirectPublishWithEditFlowService:(id)arg0;
- (void)onEnterPublishWithEditFlowService:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
