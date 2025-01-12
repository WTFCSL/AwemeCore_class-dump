//
//     Generated by private class-dump
//

@class UIView, NSTimer, IESLiveRoomProfileTempInfoItem, NSString, UIImageView, IESLiveRoomProfileCarouselLabel, IESLiveRichTextLabel, NSMutableArray, UILabel, IESLiveRoomProfileInfoViewModel;

@interface IESLiveRoomProfileInfoView : UIView <CAAnimationDelegate> {
    BOOL _isShowExchangingAni;
    IESLiveRoomProfileTempInfoItem *_tempInfoItem;
    IESLiveRoomProfileCarouselLabel *_topLabel;
    IESLiveRoomProfileCarouselLabel *_bottomLabel;
    IESLiveRoomProfileInfoViewModel *_viewModel;
    UIImageView *_verifyImageView;
    UILabel *_buffAddFireLabel;
    UILabel *_buffFireCountLabel;
    IESLiveRichTextLabel *_messageTitleLabel;
    IESLiveRichTextLabel *_messageSubTitleLabel;
    UIView *_topContainer;
    UIView *_bottomContainer;
    NSMutableArray *_tempInfoItemArray;
    NSTimer *_scrollTimer;
    NSTimer *_toggleTimer;
    NSMutableArray *_labelArray;
    NSTimer *_diggTimer;
}

@property (retain, nonatomic) IESLiveRoomProfileInfoViewModel *viewModel;
@property (retain, nonatomic) IESLiveRoomProfileCarouselLabel *topLabel;
@property (retain, nonatomic) IESLiveRoomProfileCarouselLabel *bottomLabel;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) UILabel *buffAddFireLabel;
@property (retain, nonatomic) UILabel *buffFireCountLabel;
@property (retain, nonatomic) IESLiveRichTextLabel *messageTitleLabel;
@property (retain, nonatomic) IESLiveRichTextLabel *messageSubTitleLabel;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) IESLiveRoomProfileTempInfoItem *tempInfoItem;
@property (retain, nonatomic) NSMutableArray *tempInfoItemArray;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (retain, nonatomic) NSTimer *toggleTimer;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) NSTimer *diggTimer;
@property (nonatomic) BOOL isShowExchangingAni;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoViewWithViewModel:(id)arg0;

- (void)didSetAttachingDIContext;
- (void)clearAnimation;
- (void)setLabelArray:(id)arg0;
- (id)verifyImageView;
- (void)setVerifyImageView:(id)arg0;
- (void)setScrollTimer:(id)arg0;
- (id)scrollTimer;
- (id)topContainer;
- (void)setTopContainer:(id)arg0;
- (void)setDiggTimer:(id)arg0;
- (id)diggTimer;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })arg0 forView:(id)arg1;
- (void)showDoubleDiggAnimationWithMainText:(id)arg0 subText:(id)arg1 repeat:(BOOL)arg2;
- (void)requestToShowTempInfoViewWithItem:(id)arg0;
- (void)showExchangeTopAndBottomLabelAnimation;
- (void)destroyDiggTimer;
- (void)destroyScrollTimer;
- (void)destroyToggleTimer;
- (id)buffAddFireLabel;
- (id)buffFireCountLabel;
- (void)toggleMoneySplitLabelsWithAnimation;
- (id)messageSubTitleLabel;
- (void)showProfileMiddleViewToggleAnimationWithduration:(double)arg0 mainLabel:(BOOL)arg1 subLabel:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)toggleShowMessageMainLabel:(BOOL)arg0 subLabel:(BOOL)arg1;
- (void)setToggleTimer:(id)arg0;
- (void)setTempInfoItem:(id)arg0;
- (id)tempInfoItem;
- (void)resetLabelState;
- (id)tempInfoItemArray;
- (void)showTempInfoAnimationWithItem:(id)arg0;
- (void)switchPreLabel:(id)arg0 nextLabel:(id)arg1 alphaChange:(BOOL)arg2;
- (void)startTempInfoScroll;
- (void)continueScrollTempInfoWithItem:(id)arg0;
- (void)setIsShowExchangingAni:(BOOL)arg0;
- (void)setViewAnchorPoint:(struct CGPoint { double x0; double x1; })arg0 forView:(id)arg1;
- (id)transformScaleAnimation:(double)arg0 isInverse:(BOOL)arg1;
- (BOOL)isShowExchangingAni;
- (double)infoViewWidth;
- (void)showMoneySplitLabelsWithValue:(id)arg0;
- (void)showProfileMiddleViewAnimationWithMessage:(id)arg0 completion:(id /* block */)arg1;
- (void)removeExchangeTopAndBottomLabelAnimation;
- (void)setBuffAddFireLabel:(id)arg0;
- (void)setBuffFireCountLabel:(id)arg0;
- (void)setMessageSubTitleLabel:(id)arg0;
- (void)setTempInfoItemArray:(id)arg0;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)clearObserver;
- (id)viewModel;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)startAnimation;
- (void)addObserver;
- (id)accessibilityText;
- (void)setupViews;
- (id)topLabel;
- (void)setTopLabel:(id)arg0;
- (id)labelArray;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg0;
- (id)toggleTimer;
- (id)bottomContainer;
- (void)setBottomContainer:(id)arg0;
- (id)messageTitleLabel;
- (void)setMessageTitleLabel:(id)arg0;

@end
