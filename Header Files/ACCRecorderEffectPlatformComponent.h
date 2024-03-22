//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecordPropService;

@interface ACCRecorderEffectPlatformComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber> {
    id<ACCRecordPropService> _propService;
}

@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)propServiceDidApplyProp:(id)arg0 success:(BOOL)arg1;
- (void).cxx_destruct;

@end
