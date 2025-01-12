//
//     Generated by private class-dump
//

@protocol ACCSideslipPropPickCollectionLayoutDelegate;

@interface ACCSideslipPropPickCollectionLayout : UICollectionViewFlowLayout {
    BOOL _enableSplitPreload;
    double _preLoadWidth;
    id<ACCSideslipPropPickCollectionLayoutDelegate> _delegate;
    long long _maxItemCountInDisplay;
    long long _leftPreloadCount;
    long long _rightPreloadCount;
    long long _preloadMaxCount;
    long long _itemCount;
}

@property (weak, nonatomic) id<ACCSideslipPropPickCollectionLayoutDelegate> delegate;
@property (nonatomic) long long maxItemCountInDisplay;
@property (nonatomic) BOOL enableSplitPreload;
@property (nonatomic) long long leftPreloadCount;
@property (nonatomic) long long rightPreloadCount;
@property (nonatomic) double preLoadWidth;
@property (nonatomic) long long preloadMaxCount;
@property (nonatomic) long long itemCount;

- (void)setPreLoadWidth:(double)arg0;
- (void)setEnableSplitPreload:(BOOL)arg0;
- (void)setLeftPreloadCount:(long long)arg0;
- (void)setRightPreloadCount:(long long)arg0;
- (void)setPreloadMaxCount:(long long)arg0;
- (long long)maxItemCountInDisplay;
- (void)setMaxItemCountInDisplay:(long long)arg0;
- (long long)itemCountWithWidth:(double)arg0;
- (long long)centerIndexWithContentOffsetX:(double)arg0;
- (void)postWillScrollToCenterIndex:(long long)arg0;
- (id)sencondaryIndexesWithCenterIndex:(long long)arg0;
- (BOOL)enableSplitPreload;
- (long long)leftPreloadCount;
- (long long)rightPreloadCount;
- (long long)preloadMaxCount;
- (double)p_widthWithItemCount:(long long)arg0;
- (double)contentOffsetXWithCenterIndex:(long long)arg0;
- (double)preLoadWidth;
- (long long)itemCount;
- (void)prepareLayout;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })arg1;
- (void)setItemCount:(long long)arg0;

@end
