//
//     Generated by private class-dump
//

@protocol AWEHPTabJumpModelProtocol <NSObject>

- (id)initWithContext:(id)arg0;

@optional

- (void)tabJumpGuideShowWithModel:(id)arg0 withComponent:(id)arg1 withTrackParams:(id)arg2;
- (void)tabJumpGuideClickWithModel:(id)arg0 withComponent:(id)arg1 withTrackParams:(id)arg2;
- (BOOL)shouldLoadTabJumpGuide;
- (id)handleJumpInfoModelIfNeedWithModel:(id)arg0;
- (id)landingUrlWithModel:(id)arg0 withUrlString:(id)arg1 withComponent:(id)arg2;
- (void)landingUrlCompletion:(BOOL)arg0;

@end
