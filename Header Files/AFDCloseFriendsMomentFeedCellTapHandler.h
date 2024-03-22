//
//     Generated by private class-dump
//

@class AFDCloseFriendsMomentContext, UITapGestureRecognizer, NSString, AFDCloseFriendsMomentModel, UIView, NSObject, AFDCloseFriendsMomentFeedBaseCell;
@protocol ACFWaterFallTapGestureDelegate;

@interface AFDCloseFriendsMomentFeedCellTapHandler : NSObject <UIGestureRecognizerDelegate> {
    BOOL _tapEnable;
    AFDCloseFriendsMomentModel *_currentMomentModel;
    AFDCloseFriendsMomentContext *_context;
    UIView *_displayView;
    NSObject<ACFWaterFallTapGestureDelegate> *_waterFallDelegate;
    UITapGestureRecognizer *_singleTap;
    UITapGestureRecognizer *_doubleTap;
    AFDCloseFriendsMomentFeedBaseCell *_view;
    double _lastClickTimestamp;
    UIView *_actualView;
}

@property (weak, nonatomic) AFDCloseFriendsMomentFeedBaseCell *view;
@property (nonatomic) double lastClickTimestamp;
@property (weak, nonatomic) UIView *actualView;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *currentMomentModel;
@property (weak, nonatomic) AFDCloseFriendsMomentContext *context;
@property (nonatomic) BOOL tapEnable;
@property (weak, nonatomic) UIView *displayView;
@property (weak, nonatomic) NSObject<ACFWaterFallTapGestureDelegate> *waterFallDelegate;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentMomentModel;
- (void)setCurrentMomentModel:(id)arg0;
- (void)playDiggAnimationInView:(id)arg0 location:(struct CGPoint { double x0; double x1; })arg1 image:(id)arg2;
- (void)playDiggAnimationInView:(id)arg0 location:(struct CGPoint { double x0; double x1; })arg1;
- (void)setSingleTap:(id)arg0;
- (void)setDoubleTap:(id)arg0;
- (void)setDisplayView:(id)arg0;
- (id)displayView;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:(double)arg0;
- (void)onViewSingleClicked:(id)arg0;
- (void)onViewClicked:(id)arg0;
- (void)setTapEnable:(BOOL)arg0;
- (void)onViewDoubleClicked:(id)arg0;
- (id)scrollToCameraWithShootSource:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 scale:(double)arg1;
- (id)initWithActualView:(id)arg0;
- (void)onViewSingleClickedMosaic:(id)arg0;
- (BOOL)tapEnable;
- (id)waterFallDelegate;
- (void)setWaterFallDelegate:(id)arg0;
- (id)initWithView:(id)arg0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)setContext:(id)arg0;
- (id)model;
- (id)actualView;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)setView:(id)arg0;
- (id)context;
- (void)setActualView:(id)arg0;
- (id)view;
- (id)singleTap;
- (id)doubleTap;

@end