//
//     Generated by private class-dump
//

@class IESLiveMotionGuideStore;

@interface IESLiveMotionGuideFragment : IESLiveRoomComponent {
    IESLiveMotionGuideStore *_motionGuideCoordinator;
}

@property (retain, nonatomic) IESLiveMotionGuideStore *motionGuideCoordinator;

- (void)componentDidAppear;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)setMotionGuideCoordinator:(id)arg0;
- (id)motionGuideCoordinator;
- (void).cxx_destruct;

@end
