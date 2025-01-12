//
//     Generated by private class-dump
//

@class NSString, AWEFeedPlayableMaskPictureInfoModel, UICollectionView, UILabel;

@interface AWEFeedPlayableMaskPictureInfoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id /* block */ _pictureDidClick;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    AWEFeedPlayableMaskPictureInfoModel *_pictureInfo;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEFeedPlayableMaskPictureInfoModel *pictureInfo;
@property (copy, nonatomic) id /* block */ pictureDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)constraintSubviews;
- (BOOL)canHandleGestureInCell:(id)arg0;
- (void)setPictureInfo:(id)arg0;
- (id)pictureInfo;
- (id /* block */)pictureDidClick;
- (void)setPictureDidClick:(id /* block */)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (double)viewHeight;

@end
