//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESLiveReturnBackCameraRouter;

@interface IESLiveReturnBackCameraFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction> {
    BOOL _isFinished;
    int _returnBackStyle;
    id<IESLiveReturnBackCameraRouter> _returnCameraRouter;
    UIView *_indicatorView;
}

@property (nonatomic) int returnBackStyle;
@property (retain, nonatomic) id<IESLiveReturnBackCameraRouter> returnCameraRouter;
@property (weak, nonatomic) UIView *indicatorView;
@property (nonatomic) BOOL isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)arg0;
- (void)handleOrientationChanged:(long long)arg0;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (void)onCameraDidChangeTo:(id)arg0 source:(long long)arg1;
- (void)hideComponent;
- (void)showComponent;
- (int)returnBackStyle;
- (void)setReturnBackStyle:(int)arg0;
- (void)layoutIndicatorView:(id)arg0;
- (void)renderIndicatorView;
- (id)returnCameraRouter;
- (void)setReturnCameraRouter:(id)arg0;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg0;
- (void)setIsFinished:(BOOL)arg0;

@end
