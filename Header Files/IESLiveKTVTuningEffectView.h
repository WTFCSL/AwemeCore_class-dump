//
//     Generated by private class-dump
//

@class IESLiveKTVTuningEffectViewModel, NSString, UICollectionView;

@interface IESLiveKTVTuningEffectView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    IESLiveKTVTuningEffectViewModel *_viewModel;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) IESLiveKTVTuningEffectViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupConstraints;

@end
