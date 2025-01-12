//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWEVideoTryWatchView : UIView <AWEVideoTryWatchViewProtocol> {
    BOOL _isVIPVideo;
    BOOL _hasHiddenPurchaseLabel;
    id /* block */ _onClickedBlock;
    UIView *_containerView;
    UIView *_leftContainerView;
    UILabel *_payLabel;
    UIView *_rightContainerView;
    UILabel *_tryWatchLabel;
    UIView *_verticalSeparateLine;
    UILabel *_purchaseLabel;
    UIView *_arrowImageViewContainer;
    UIImageView *_arrowImageView;
    long long _viewStyle;
    long long _updateViewStyle;
    double _startTime;
    double _endTime;
    long long _lastRemainTime;
    UIVisualEffectView *_effectView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UILabel *payLabel;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) UILabel *tryWatchLabel;
@property (retain, nonatomic) UIView *verticalSeparateLine;
@property (retain, nonatomic) UILabel *purchaseLabel;
@property (retain, nonatomic) UIView *arrowImageViewContainer;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL hasHiddenPurchaseLabel;
@property (nonatomic) long long viewStyle;
@property (nonatomic) long long updateViewStyle;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long lastRemainTime;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (copy, nonatomic) id /* block */ onClickedBlock;
@property (nonatomic) BOOL isVIPVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOnClickedBlock:(id /* block */)arg0;
- (id)leftContainerView;
- (id)rightContainerView;
- (void)updateCurrentTime:(double)arg0;
- (void)onButtonClicked;
- (id /* block */)onClickedBlock;
- (id)verticalSeparateLine;
- (void)setVerticalSeparateLine:(id)arg0;
- (void)setIsVIPVideo:(BOOL)arg0;
- (BOOL)isVIPVideo;
- (void)setLeftContainerView:(id)arg0;
- (id)initWithViewStyle:(long long)arg0 updateViewStyle:(long long)arg1;
- (void)updateStartTime:(double)arg0 endTime:(double)arg1;
- (void)updatePurchaseLabelText:(id)arg0;
- (void)showContainerView;
- (void)setRightTitle:(id)arg0 width:(double)arg1;
- (void)setArrowColor:(id)arg0;
- (void)setRightContainerView:(id)arg0;
- (void)setLastRemainTime:(long long)arg0;
- (id)payLabel;
- (id)attributedTextWithText:(id)arg0;
- (long long)lastRemainTime;
- (void)setPayLabel:(id)arg0;
- (void)purchaseComplete;
- (void)setUpdateViewStyle:(long long)arg0;
- (void)setHasHiddenPurchaseLabel:(BOOL)arg0;
- (void)configureUIForDefault;
- (void)configureUIForNoPayLabel;
- (void)configureUIForNoPurchaseLabel;
- (void)configureUIForOnlyCountDown;
- (void)makeConstraintWithViewStyle:(long long)arg0;
- (id)tryWatchLabel;
- (id)purchaseLabel;
- (id)arrowImageViewContainer;
- (long long)updateViewStyle;
- (void)updateRemainTime:(long long)arg0 viewStyle:(long long)arg1;
- (void)makeConstraintForDefaultStyle;
- (void)makeConstraintForNoPayLabel;
- (void)makeConstraintForNoPurchaseLabel;
- (void)makeConstraintForOnlyCountDown;
- (void)makeRightContainerConstraint;
- (void)updateViewNotHiddenPurchaseWithRemainTime:(long long)arg0;
- (void)updateViewShouldHiddenPurchaseWithRemainTime:(long long)arg0;
- (void)setWatchLabelRemainTime:(long long)arg0;
- (BOOL)hasHiddenPurchaseLabel;
- (void)setPurchaseLabelShouldHidden:(BOOL)arg0;
- (void)setTryWatchLabel:(id)arg0;
- (void)setPurchaseLabel:(id)arg0;
- (void)setArrowImageViewContainer:(id)arg0;
- (void)setStartTime:(double)arg0;
- (id)effectView;
- (void).cxx_destruct;
- (long long)viewStyle;
- (void)setContainerView:(id)arg0;
- (double)endTime;
- (void)setEffectView:(id)arg0;
- (double)startTime;
- (id)containerView;
- (void)setEndTime:(double)arg0;
- (void)reset;
- (void)setViewStyle:(long long)arg0;
- (void)setupUI;
- (void)setRightTitleColor:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
