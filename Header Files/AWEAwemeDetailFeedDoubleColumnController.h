//
//     Generated by private class-dump
//

@class AWEFeedDoubleColumnDetailInerMaskView, UITapGestureRecognizer, UIView;

@interface AWEAwemeDetailFeedDoubleColumnController : AWEAwemeNewDetailBaseController {
    BOOL _isShowingHintView;
    BOOL _preventShow;
    UIView *_hintView;
    AWEFeedDoubleColumnDetailInerMaskView *_innerMaskView;
    UITapGestureRecognizer *_tap;
}

@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) AWEFeedDoubleColumnDetailInerMaskView *innerMaskView;
@property (nonatomic) BOOL isShowingHintView;
@property (nonatomic) BOOL preventShow;
@property (retain, nonatomic) UITapGestureRecognizer *tap;

- (void)playerWillStartNextLoop:(id)arg0;
- (void)setHintView:(id)arg0;
- (void)setMetricsInfo;
- (void)onScrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)showInnerHintView:(id)arg0;
- (id)innerMaskView;
- (void)hideInnerHintViewWithAnimated:(BOOL)arg0;
- (BOOL)isShowingHintView;
- (void)setIsShowingHintView:(BOOL)arg0;
- (void)setInnerMaskView:(id)arg0;
- (BOOL)preventShow;
- (void)setPreventShow:(BOOL)arg0;
- (BOOL)shouldShowInnerHintView;
- (void)setHintViewHasShow;
- (void)pureFirstCellInteractionVCWithEnter:(BOOL)arg0;
- (id)getCurrentInteractionVC;
- (id)getCurrentPlayer;
- (void).cxx_destruct;
- (void)tap:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)tap;
- (void)setTap:(id)arg0;
- (void)timerAction;
- (void)viewDidDisappear;
- (id)hintView;
- (void)viewWillDisappear;

@end
