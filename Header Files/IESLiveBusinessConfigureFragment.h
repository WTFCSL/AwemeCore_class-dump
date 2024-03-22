//
//     Generated by private class-dump
//

@class NSString, IESLiveBusinessConfigureStore;

@interface IESLiveBusinessConfigureFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAutoRotateAction> {
    IESLiveBusinessConfigureStore *_store;
}

@property (retain, nonatomic) IESLiveBusinessConfigureStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)willAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)didAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)handleBusinessConfigure:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (void)messageReceived:(id)arg0;

@end