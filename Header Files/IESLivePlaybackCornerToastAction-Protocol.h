//
//     Generated by private class-dump
//

@protocol IESLivePlaybackCornerToastAction <NSObject>

- (void)showText:(id)arg0;
- (void)showText:(id)arg0 delayTime:(double)arg1;
- (void)showAttributeText:(id)arg0;
- (void)showAttributeText:(id)arg0 delayTime:(double)arg1 cutWidth:(BOOL)arg2;
- (void)showCustomSubview:(id)arg0 delayTime:(double)arg1;
- (void)showCustomSubview:(id)arg0 delayTime:(double)arg1 priority:(unsigned long long)arg2;
- (void)showCustomSubview:(id)arg0;
- (void)updateConstraints;
- (void)hideImmediately;
- (BOOL)showingToast;

@end
