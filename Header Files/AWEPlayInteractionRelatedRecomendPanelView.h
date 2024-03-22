//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, UIImageView, AWEPlayInteractionRelatedRecomendPanelHeaderView, UICollectionView, UIView, AWEPlayInteractionRelatedRecomendPanelModel;
@protocol AWEPlayInteractionRelatedRecomendPanelViewDelegate;

@interface AWEPlayInteractionRelatedRecomendPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<AWEPlayInteractionRelatedRecomendPanelViewDelegate> _delegate;
    UIImageView *_backgroundShadowImageView;
    AWEPlayInteractionRelatedRecomendPanelHeaderView *_headerView;
    UICollectionView *_collectionView;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientLayerContainerView;
    AWEPlayInteractionRelatedRecomendPanelModel *_model;
}

@property (retain, nonatomic) UIImageView *backgroundShadowImageView;
@property (retain, nonatomic) AWEPlayInteractionRelatedRecomendPanelHeaderView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *gradientLayerContainerView;
@property (retain, nonatomic) AWEPlayInteractionRelatedRecomendPanelModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionRelatedRecomendPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClick;
- (id)backgroundShadowImageView;
- (id)gradientLayerContainerView;
- (void)setBackgroundShadowImageView:(id)arg0;
- (void)setGradientLayerContainerView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)gradientLayer;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (void)setCollectionView:(id)arg0;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)setGradientLayer:(id)arg0;

@end
