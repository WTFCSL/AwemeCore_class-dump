//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEProfileBannerBGCoverMaskView, AWEGradientView, BDImageView, NSMutableArray, UICollectionView, UIViewController;
@protocol AWEProfileBannerBGCoverViewDelegate;

@interface AWEProfileBannerBGCoverView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEProfileBannerBGCoverMaskViewDelegate, AWEPadUIAdaptionViewTransitionObserver> {
    BOOL _isFirstTimeConfig;
    id<AWEProfileBannerBGCoverViewDelegate> _delegate;
    UICollectionView *_collectionView;
    BDImageView *_imageView;
    UIView *_bannerMaskView;
    AWEProfileBannerBGCoverMaskView *_coverMaskView;
    AWEGradientView *_topStatusBarMaskView;
    NSArray *_bannerList;
    NSMutableArray *_infiniteBannerList;
    NSArray *_lightColorList;
    NSArray *_darkColorList;
    unsigned long long _currentIndex;
    BDImageView *_scaleImageView;
    NSMutableArray *_isCellImageReady;
    UIViewController *_rootViewController;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UIView *bannerMaskView;
@property (retain, nonatomic) AWEProfileBannerBGCoverMaskView *coverMaskView;
@property (retain, nonatomic) AWEGradientView *topStatusBarMaskView;
@property (copy, nonatomic) NSArray *bannerList;
@property (retain, nonatomic) NSMutableArray *infiniteBannerList;
@property (copy, nonatomic) NSArray *lightColorList;
@property (copy, nonatomic) NSArray *darkColorList;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) BDImageView *scaleImageView;
@property (retain, nonatomic) NSMutableArray *isCellImageReady;
@property (nonatomic) BOOL isFirstTimeConfig;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) id<AWEProfileBannerBGCoverViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (id)bannerList;
- (void)setBannerList:(id)arg0;
- (void)__setupUI;
- (void)setCoverMaskView:(id)arg0;
- (id)coverMaskView;
- (unsigned long long)showIndex;
- (void)configWithImage:(id)arg0;
- (id)infiniteBannerList;
- (void)setInfiniteBannerList:(id)arg0;
- (id)scaleImageView;
- (void)startScale;
- (void)stopScale;
- (void)setScaleImageView:(id)arg0;
- (BOOL)isInPersonalCenterPage;
- (void)handleMaskViewColorChange:(id)arg0;
- (void)configWithURLList:(id)arg0 lightColorList:(id)arg1 darkColorList:(id)arg2;
- (BOOL)isFirstTimeConfig;
- (void)setIsFirstTimeConfig:(BOOL)arg0;
- (BOOL)__isLightTheme;
- (void)setIsCellImageReady:(id)arg0;
- (id)isCellImageReady;
- (void)setLightColorList:(id)arg0;
- (void)setDarkColorList:(id)arg0;
- (void)__scrollToIndexPath:(id)arg0 animated:(BOOL)arg1;
- (unsigned long long)__indexPathToShowIndex:(id)arg0;
- (void)__updateMaskColorByCurrentIndex;
- (void)setBannerMaskView:(id)arg0;
- (id)bannerMaskView;
- (void)setTopStatusBarMaskView:(id)arg0;
- (id)topStatusBarMaskView;
- (id)lightColorList;
- (id)darkColorList;
- (void)configWithCoverList:(id)arg0;
- (void)configGradientViewInBannerCompressStyle;
- (void)hiddenCoverMaskView;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (unsigned long long)currentIndex;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)imageView;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(unsigned long long)arg0;
- (void)setImageView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
