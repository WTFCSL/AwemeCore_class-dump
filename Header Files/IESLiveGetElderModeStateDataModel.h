//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveGetElderModeStateDataModel : IESLiveBridgeModel {
    BOOL _currentState;
    NSNumber *_delayEffectState;
}

@property (nonatomic) BOOL currentState;
@property (retain, nonatomic) NSNumber *delayEffectState;

+ (id)modelCustomPropertyMapper;

- (void)setDelayEffectState:(id)arg0;
- (id)delayEffectState;
- (void)setCurrentState:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)currentState;

@end
