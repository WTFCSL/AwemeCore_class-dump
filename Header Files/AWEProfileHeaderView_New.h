//
//     Generated by private class-dump
//

@class NSString, AWEProfileHeaderViewModel, UICollectionView, AWEProfileHeaderTopCornerBGView, UIView, AWEProfileHeaderContext, AWEGradientView;
@protocol AWEProfileBannerProtocol, AWEProfileBannerContext;

@interface AWEProfileHeaderView_New : UIView <AWEProfileBannerDelegate, AWEProfileHeaderViewProtocol_New> {
    BOOL _haveChangeSubViewIndex;
    id<AWEProfileBannerContext> _bannerViewContext;
    UIView<AWEProfileBannerProtocol> *_bannerView;
    AWEGradientView *_userMoodView;
    AWEProfileHeaderViewModel *_viewModel;
    AWEProfileHeaderContext *_context;
    UICollectionView *_collectionView;
    UIView *_bgColorView;
    UIView *_topCornerMaskView;
    AWEProfileHeaderTopCornerBGView *_topCornerBGView;
    UIView *_headerContainerView;
}

@property (weak, nonatomic) AWEProfileHeaderViewModel *viewModel;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) UIView<AWEProfileBannerProtocol> *bannerView;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UIView *topCornerMaskView;
@property (retain, nonatomic) AWEProfileHeaderTopCornerBGView *topCornerBGView;
@property (nonatomic) BOOL haveChangeSubViewIndex;
@property (weak, nonatomic) UIView *headerContainerView;
@property (weak, nonatomic) id<AWEProfileBannerContext> bannerViewContext;
@property (retain, nonatomic) AWEGradientView *userMoodView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configWithViewModel:(id)arg0;
- (id)topCornerMaskView;
- (void)refreshAlphaForHeaderView:(double)arg0;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)collectionViewTopMargin;
- (double)introLabelTopOfHeaderView;
- (void)refreshBannerWithContentOffsetY:(double)arg0;
- (void)changeHeaderViewBGColor:(id)arg0;
- (id)headerCollectionView;
- (void)superViewBeginDraging;
- (void)superViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)superViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateBannerView:(id)arg0;
- (void)updateTopCornerBGView:(id)arg0;
- (BOOL)haveChangeSubViewIndex;
- (void)setHaveChangeSubViewIndex:(BOOL)arg0;
- (void)updateTopCornerMaskView;
- (id)topCornerBGView;
- (id)bannerViewContext;
- (double)p_bannerBottomOverlap;
- (void)p_layoutTopCornerBGView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 bannerViewContext:(id)arg1;
- (void)updateWithContext:(id)arg0 viewModel:(id)arg1;
- (void)p_updateTopCornerMaskView:(id)arg0 targetColor:(id)arg1;
- (void)setBannerViewContext:(id)arg0;
- (id)userMoodView;
- (void)setUserMoodView:(id)arg0;
- (void)setTopCornerMaskView:(id)arg0;
- (void)setTopCornerBGView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setContext:(id)arg0;
- (double)headerViewHeight;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)context;
- (id)viewModel;
- (void)layoutSubviews;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg0;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg0;
- (void)themeDidChange;
- (id)bannerView;
- (void)setBannerView:(id)arg0;
- (void)setBgColorView:(id)arg0;
- (id)bgColorView;

@end
