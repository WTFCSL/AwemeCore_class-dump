//
//     Generated by private class-dump
//

@class IESECLiveLayoutProxyView, IESECLiveGoodsListTab, UIView;

@interface IESECLiveGoodsListBodyView : UIView {
    BOOL _isShowingTab;
    BOOL _isShowingBanner;
    UIView *_bannerSnapshotView;
    IESECLiveLayoutProxyView *_tabViewContainer;
    UIView *_blankSpaceView;
    IESECLiveLayoutProxyView *_bannerViewContainer;
    IESECLiveLayoutProxyView *_goodsListCollectionViewContainer;
    IESECLiveGoodsListTab *_tabView;
}

@property (retain, nonatomic) IESECLiveLayoutProxyView *tabViewContainer;
@property (retain, nonatomic) UIView *blankSpaceView;
@property (retain, nonatomic) IESECLiveLayoutProxyView *bannerViewContainer;
@property (retain, nonatomic) IESECLiveLayoutProxyView *goodsListCollectionViewContainer;
@property (weak, nonatomic) IESECLiveGoodsListTab *tabView;
@property (readonly, nonatomic) BOOL isShowingTab;
@property (readonly, nonatomic) BOOL isShowingBanner;
@property (retain, nonatomic) UIView *bannerSnapshotView;

- (void)setTabView:(id)arg0;
- (void)hideTab;
- (void)showTab;
- (BOOL)isShowingTab;
- (id)bannerViewContainer;
- (id)blankSpaceView;
- (id)tabViewContainer;
- (id)goodsListCollectionViewContainer;
- (void)addTabView:(id)arg0;
- (void)addGoodsListCollectionView:(id)arg0;
- (void)updateBlankViewConstraintsIfNeeded;
- (void)addTabView:(id)arg0 goodsListCollectionView:(id)arg1 bannerView:(id)arg2;
- (BOOL)isShowingBanner;
- (id)bannerSnapshotView;
- (void)setBannerSnapshotView:(id)arg0;
- (void)setTabViewContainer:(id)arg0;
- (void)setBlankSpaceView:(id)arg0;
- (void)setBannerViewContainer:(id)arg0;
- (void)setGoodsListCollectionViewContainer:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (void)hideBanner;
- (void)addBannerView:(id)arg0;
- (void)showBanner;
- (id)tabView;

@end
