//
//     Generated by private class-dump
//

@class CachalotCollectionViewConfig;
@protocol CachalotCollectionViewLayoutDelegate;

@interface CachalotCollectionView : UICollectionView {
    CachalotCollectionViewConfig *_config;
    id<CachalotCollectionViewLayoutDelegate> _layoutDelegate;
}

@property (retain, nonatomic) CachalotCollectionViewConfig *config;
@property (weak, nonatomic) id<CachalotCollectionViewLayoutDelegate> layoutDelegate;

- (id)initWithConfig:(id)arg0 layout:(id)arg1;
- (void)setLayoutDelegate:(id)arg0;
- (id)layoutDelegate;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1;
- (id)config;
- (void)layoutSubviews;

@end