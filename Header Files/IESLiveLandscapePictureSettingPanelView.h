//
//     Generated by private class-dump
//

@class HTSLiveGradientBackgroundView, IESLiveLandscapePictureSettingStore, UICollectionView, NSString;

@interface IESLiveLandscapePictureSettingPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id /* block */ _pictureFitTypeChanged;
    HTSLiveGradientBackgroundView *_gradientView;
    UICollectionView *_collectionView;
    IESLiveLandscapePictureSettingStore *_store;
}

@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveLandscapePictureSettingStore *store;
@property (copy, nonatomic) id /* block */ pictureFitTypeChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 store:(id)arg1;
- (void)setPictureFitTypeChanged:(id /* block */)arg0;
- (id /* block */)pictureFitTypeChanged;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)store;
- (void)setGradientView:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setStore:(id)arg0;
- (id)gradientView;
- (void)setupUI;

@end