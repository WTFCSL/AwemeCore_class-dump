//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, AWEAwemeModel, NSString, NSMutableArray, YYLabel;

@interface AWEPlayInteractionVideoAbstractView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    id /* block */ _clickVideoAbstractBtnBlock;
    id /* block */ _scrollViewDidEndDraggingBlock;
    long long _selecteIndex;
    YYLabel *_contentLabel;
    double _labelHeight;
    double _labelWidth;
    UICollectionView *_collectionView;
    AWEAwemeModel *_model;
    NSMutableArray *_dataAttStrArray;
    NSArray *_dataArray;
    NSString *_path;
}

@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) double labelHeight;
@property (nonatomic) double labelWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableArray *dataAttStrArray;
@property (copy, nonatomic) NSArray *dataArray;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ clickVideoAbstractBtnBlock;
@property (copy, nonatomic) id /* block */ scrollViewDidEndDraggingBlock;
@property (nonatomic) long long selecteIndex;
@property (readonly, nonatomic) double offsetX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLabelHeight:(double)arg0;
- (double)labelHeight;
- (id)formattedJumpTimeForTime:(id)arg0;
- (long long)selecteIndex;
- (void)setSelecteIndex:(long long)arg0;
- (void)updateSectionBtnWithPlayTime:(double)arg0 completion:(id /* block */)arg1;
- (void)updateWithModel:(id)arg0 LabelWidth:(double)arg1 hasClicked:(BOOL)arg2;
- (void)setClickVideoAbstractBtnBlock:(id /* block */)arg0;
- (void)setScrollViewDidEndDraggingBlock:(id /* block */)arg0;
- (long long)showRows;
- (BOOL)isFirstCellStyle;
- (id)dataAttStrArray;
- (void)scrollToOffsetWith:(double)arg0 selectedIndex:(long long)arg1;
- (void)setDataAttStrArray:(id)arg0;
- (id)createAttributedStringWithString:(id)arg0 jumpTime:(id)arg1 isSection:(BOOL)arg2;
- (BOOL)isLongText:(id)arg0 width:(double)arg1;
- (id /* block */)clickVideoAbstractBtnBlock;
- (id /* block */)scrollViewDidEndDraggingBlock;
- (id)truncationTokenString;
- (void)setModel:(id)arg0;
- (void)setPath:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (id)path;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layoutSubviews;
- (id)dataArray;
- (double)cellWidth;
- (void)setupUI;
- (double)labelWidth;
- (void)setLabelWidth:(double)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setDataArray:(id)arg0;
- (double)getHeight;
- (double)offsetX;

@end
