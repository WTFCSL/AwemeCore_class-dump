//
//     Generated by private class-dump
//

@class BDLiveCommerceFragment;

@interface AWEBDALiveFragment : IESLiveRoomComponent {
    BDLiveCommerceFragment *_targetFragment;
}

@property (retain, nonatomic) BDLiveCommerceFragment *targetFragment;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)targetFragment;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)setTargetFragment:(id)arg0;
- (void).cxx_destruct;

@end
