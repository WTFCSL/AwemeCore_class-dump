//
//     Generated by private class-dump
//

@protocol ACCRecorderElementBindService;

@interface ACCRecorderElementBindComponent : ACCFeatureComponent {
    id<ACCRecorderElementBindService> _recorderElementBindService;
}

@property (retain, nonatomic) id<ACCRecorderElementBindService> recorderElementBindService;

- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)arg0;
- (id)recorderElementBindService;
- (void)setRecorderElementBindService:(id)arg0;
- (void).cxx_destruct;

@end
