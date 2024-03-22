//
//     Generated by private class-dump
//

@class UIView, AWETeenAlbumDataController, AWEMinorAlbum, NSString, AWETeenAlbumRecommendLoadingView, AWETeenAlbumRecommendNoDataView, UIPanGestureRecognizer, AWETeenAlbumRecommendCollectionView, UIVisualEffectView, AWETeenExtraParamModel, AWETeenAlbumRecommendNetErrorView;
@protocol AWETeenPanelPresentPortocol;

@interface AWETeenAlbumRecommendPanel : UIView <UIGestureRecognizerDelegate> {
    BOOL _didShowRecommendView;
    BOOL _isAnimating;
    id<AWETeenPanelPresentPortocol> _delegate;
    AWETeenAlbumDataController *_dataController;
    AWEMinorAlbum *_originAlbum;
    AWETeenExtraParamModel *_extra;
    UIView *_topBar;
    UIView *_containerView;
    UIView *_listContainView;
    UIVisualEffectView *_effectView;
    UIView *_gradientView;
    AWETeenAlbumRecommendCollectionView *_collectionView;
    UIPanGestureRecognizer *_panGesture;
    unsigned long long _panelState;
    AWETeenAlbumRecommendNoDataView *_noDataView;
    AWETeenAlbumRecommendNetErrorView *_netErrorView;
    AWETeenAlbumRecommendLoadingView *_loadingView;
}

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) AWEMinorAlbum *originAlbum;
@property (retain, nonatomic) AWETeenExtraParamModel *extra;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *listContainView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) AWETeenAlbumRecommendCollectionView *collectionView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) unsigned long long panelState;
@property (nonatomic) BOOL didShowRecommendView;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWETeenAlbumRecommendNoDataView *noDataView;
@property (retain, nonatomic) AWETeenAlbumRecommendNetErrorView *netErrorView;
@property (retain, nonatomic) AWETeenAlbumRecommendLoadingView *loadingView;
@property (weak, nonatomic) id<AWETeenPanelPresentPortocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)p_setupUI;
- (id)netErrorView;
- (void)setNetErrorView:(id)arg0;
- (void)p_dismiss;
- (void)p_setupBind;
- (void)setOriginAlbum:(id)arg0;
- (void)p_addGestureRecognizer;
- (void)setDidShowRecommendView:(BOOL)arg0;
- (void)setPanelState:(unsigned long long)arg0;
- (BOOL)didShowRecommendView;
- (unsigned long long)panelState;
- (void)p_presentToHalfScreenByGesture;
- (void)p_presentToNearFullScreenByGesture;
- (id)listContainView;
- (void)p_animationWithOffsety:(double)arg0;
- (void)p_dismissOrPresentByOffsety:(double)arg0 velocity:(double)arg1;
- (void)p_onSingleTap;
- (void)p_onPanGesture:(id)arg0;
- (id)originAlbum;
- (id)initWithDataController:(id)arg0 originAlbum:(id)arg1 extra:(id)arg2;
- (void)setListContainView:(id)arg0;
- (void)present;
- (BOOL)isAnimating;
- (id)effectView;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setGradientView:(id)arg0;
- (id)topBar;
- (void)setContainerView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)extra;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setEffectView:(id)arg0;
- (id)containerView;
- (void)setDelegate:(id)arg0;
- (id)gradientView;
- (void)setTopBar:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (id)noDataView;
- (void)setNoDataView:(id)arg0;

@end
