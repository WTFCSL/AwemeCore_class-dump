//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, UIButton;
@protocol AWEGoodsSlideCardViewDelegate;

@interface AWEFeedGoodsSlideCardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isFirstCallWillDisplayCell;
    id<AWEGoodsSlideCardViewDelegate> _delegate;
    long long _currentPage;
    UICollectionView *_slideCollectionView;
    NSArray *_goodsDataArray;
    double _lastContentOffset;
    unsigned long long _startIndex;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UICollectionView *slideCollectionView;
@property (retain, nonatomic) NSArray *goodsDataArray;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) BOOL isFirstCallWillDisplayCell;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<AWEGoodsSlideCardViewDelegate> delegate;
@property (nonatomic) long long currentPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick;
- (void)p_loadView;
- (void)setIsFirstCallWillDisplayCell:(BOOL)arg0;
- (id)slideCollectionView;
- (id)goodsDataArray;
- (void)setGoodsDataArray:(id)arg0;
- (BOOL)isFirstCallWillDisplayCell;
- (void)trackShowWithIndex:(long long)arg0;
- (void)updateSlideCardViewWithDataSource:(id)arg0 targetPromotionID:(id)arg1;
- (void)setSlideCollectionView:(id)arg0;
- (unsigned long long)startIndex;
- (void)setStartIndex:(unsigned long long)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setCurrentPage:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (long long)currentPage;
- (void)setDelegate:(id)arg0;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (long long)cardStyle;

@end