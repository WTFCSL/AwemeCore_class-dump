//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, NSDate;

@interface AWEProfilePostJustWatchedView : UIView <AWEProfileJustWatchedViewProtocol> {
    BOOL _pointingUp;
    BOOL _hasTrackedPosition;
    BOOL _hasLocateRequest;
    BOOL _hasTrackedAnchorShown;
    id /* block */ _tapActionBlock;
    unsigned long long _status;
    NSDate *_clickedStartDate;
    NSDate *_positionStartDate;
    NSString *_previousPage;
    UIView *_bgView;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIImageView *_loadingImageView;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL pointingUp;
@property (nonatomic) BOOL hasTrackedPosition;
@property (nonatomic) BOOL hasLocateRequest;
@property (retain, nonatomic) NSDate *clickedStartDate;
@property (retain, nonatomic) NSDate *positionStartDate;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL hasTrackedAnchorShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (id /* block */)tapActionBlock;
- (void)setTapActionBlock:(id /* block */)arg0;
- (id)loadingAnimation;
- (void)resetAnimationIfNeeded;
- (void)setPointingUpAnimated:(BOOL)arg0 animated:(BOOL)arg1;
- (BOOL)hasTrackedPosition;
- (void)setPositionStartDate:(id)arg0;
- (void)setHasLocateRequest:(BOOL)arg0;
- (id)paramsOfTrackPositionDuration;
- (void)setClickedStartDate:(id)arg0;
- (void)setHasTrackedAnchorShown:(BOOL)arg0;
- (void)updateJustWatchedViewTitle:(id)arg0;
- (BOOL)hasTrackedAnchorShown;
- (double)animationOffset;
- (id)positionStartDate;
- (id)clickedStartDate;
- (void)setHasTrackedPosition:(BOOL)arg0;
- (BOOL)hasLocateRequest;
- (void)setPointingUp:(BOOL)arg0;
- (BOOL)pointingUp;
- (void)stopLoading;
- (void)dismiss;
- (void)applicationWillEnterForeground:(id)arg0;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (void)startLoading;
- (unsigned long long)status;
- (void)show;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStatus:(unsigned long long)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setupSubviews;
- (void)showAnimated:(BOOL)arg0;
- (void)handleTapGestureRecognizer:(id)arg0;

@end
