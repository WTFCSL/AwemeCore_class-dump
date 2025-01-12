//
//     Generated by private class-dump
//

@class UIView, NSString, CJPayLoadingStyleInfo, UIImageView, CJPayAccountInsuranceTipView, BDImageView, UILabel, CJPayWindow;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayDouyinStyleHalfLoadingItem : CJPayHalfLoadingItem <CJPayAdvanceLoadingProtocol> {
    BOOL _isCompactStyle;
    id<CJPayLoadingManagerProtocol> _delegate;
    UIImageView *_contextImageView;
    UIView *_contextContainerView;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
    CJPayWindow *_loadingWindow;
    BDImageView *_loadPreGifView;
    BDImageView *_loadCompleteGifView;
    UILabel *_titleLabel;
    CJPayLoadingStyleInfo *_loadingStyleInfo;
    double _loadingAddedContainerHeight;
}

@property (retain, nonatomic) UIImageView *contextImageView;
@property (retain, nonatomic) UIView *contextContainerView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayWindow *loadingWindow;
@property (retain, nonatomic) BDImageView *loadPreGifView;
@property (retain, nonatomic) BDImageView *loadCompleteGifView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (nonatomic) BOOL isCompactStyle;
@property (nonatomic) double loadingAddedContainerHeight;
@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (BOOL)cjNeedAnimation;
- (void)p_setupUI;
- (id)safeGuardTipView;
- (void)setSafeGuardTipView:(id)arg0;
- (void)startLoadingWithValidateTimer:(BOOL)arg0;
- (id)loadingStyleInfo;
- (void)setLoadingStyleInfo:(id)arg0;
- (void)p_preShowTimerTrigger;
- (void)setIsCompactStyle:(BOOL)arg0;
- (BOOL)isCompactStyle;
- (void)setLoadingAddedContainerHeight:(double)arg0;
- (id)contextContainerView;
- (id)loadPreGifView;
- (id)loadCompleteGifView;
- (void)p_updateContextView;
- (double)p_safeLogoMarginTopToNavBar;
- (double)loadingAddedContainerHeight;
- (id)contextImageView;
- (void)p_remakeLayout;
- (void)p_push;
- (id)loadingWindow;
- (id)repeatGifUrl;
- (void)setLoadingWindow:(id)arg0;
- (void)setContextImageView:(id)arg0;
- (void)setContextContainerView:(id)arg0;
- (void)setLoadPreGifView:(id)arg0;
- (void)setLoadCompleteGifView:(id)arg0;
- (void)stopLoading;
- (void)dismiss;
- (void).cxx_destruct;
- (void)startLoading;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)startAnimation;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)loadingTitle;

@end
