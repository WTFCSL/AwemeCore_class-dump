//
//     Generated by private class-dump
//

@class UIView, NSString, UICollectionViewFlowLayout, UIImageView, UIButton, NSMutableArray, UICollectionView, IESLiveChargeCustomViewModel;

@interface IESLiveChargeKeyBoardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    IESLiveChargeCustomViewModel *_viewModel;
    NSMutableArray *_recommendButton;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    UIView *_deleteView;
    UIButton *_chargeButton;
    UIButton *_zeroButton;
    UIImageView *_deleteImage;
}

@property (retain, nonatomic) IESLiveChargeCustomViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *recommendButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UIView *deleteView;
@property (retain, nonatomic) UIButton *chargeButton;
@property (retain, nonatomic) UIButton *zeroButton;
@property (retain, nonatomic) UIImageView *deleteImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deleteView;
- (void)setDeleteView:(id)arg0;
- (id)recommendButton;
- (void)setRecommendButton:(id)arg0;
- (void)updateButtonWithChargeModel:(id)arg0;
- (id)chargeButton;
- (id)zeroButton;
- (id)deleteImage;
- (void)tapRecommendButtonWithButton:(id)arg0;
- (void)tapDelete;
- (void)tapChargeButton;
- (void)tapZero;
- (void)setChargeButton:(id)arg0;
- (void)setZeroButton:(id)arg0;
- (void)setDeleteImage:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupUI;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;

@end
