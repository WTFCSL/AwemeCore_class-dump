//
//     Generated by private class-dump
//

@class NSString, UICollectionView, AWEAwemeModel, UICollectionViewFlowLayout;

@interface AWELandscapeChapterView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    AWEAwemeModel *_model;
    double _maxSpace;
}

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double maxSpace;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)__configSubviews;
- (double)__calculateMaxSpace;
- (void)setMaxSpace:(double)arg0;
- (struct CGSize { double x0; double x1; })__textRectWithChapterInfo:(id)arg0 font:(id)arg1;
- (double)maxSpace;
- (void)setModel:(id)arg0;
- (id)init;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionViewLayout;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (void)setCollectionView:(id)arg0;
- (void)setCollectionViewLayout:(id)arg0;

@end
