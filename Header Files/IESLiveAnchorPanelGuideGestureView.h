//
//     Generated by private class-dump
//

@class UIView, HTSEventContext, IESLiveAnimatedImageView, NSNumber, UILabel;

@interface IESLiveAnchorPanelGuideGestureView : UIView {
    BOOL _isShowingGuideGesture;
    long long _type;
    NSNumber *_roomID;
    HTSEventContext *_trackContext;
    IESLiveAnimatedImageView *_swipeLeftGuideGestureView;
    IESLiveAnimatedImageView *_swipeRightGuideGestureView;
    UILabel *_guideGestureLabel;
    UIView *_maskView;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAnimatedImageView *swipeLeftGuideGestureView;
@property (retain, nonatomic) IESLiveAnimatedImageView *swipeRightGuideGestureView;
@property (retain, nonatomic) UILabel *guideGestureLabel;
@property (nonatomic) BOOL isShowingGuideGesture;
@property (retain, nonatomic) UIView *maskView;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)setupGuideGestureView;
- (id)guideGestureLabel;
- (void)layoutGestureView;
- (void)setIsShowingGuideGesture:(BOOL)arg0;
- (id)initWithRoomID:(id)arg0 trackContext:(id)arg1;
- (void)startGuideGestureWithType:(long long)arg0;
- (void)stopGuideGesture;
- (BOOL)isShowingGuideGesture;
- (void)setGuideGestureLabel:(id)arg0;
- (id)swipeRightGuideGestureView;
- (id)swipeLeftGuideGestureView;
- (void)setSwipeLeftGuideGestureView:(id)arg0;
- (void)setSwipeRightGuideGestureView:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)maskView;
- (void)setType:(long long)arg0;
- (void)setMaskView:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end