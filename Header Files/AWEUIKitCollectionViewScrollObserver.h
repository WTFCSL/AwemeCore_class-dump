//
//     Generated by private class-dump
//

@class UICollectionView;

@interface AWEUIKitCollectionViewScrollObserver : NSObject {
    BOOL _awe_hasObserved;
    UICollectionView *_awe_collectionView;
    id /* block */ _didScrollBlock;
}

@property (nonatomic) UICollectionView *awe_collectionView;
@property (nonatomic) BOOL awe_hasObserved;
@property (copy, nonatomic) id /* block */ didScrollBlock;

- (void)setAwe_collectionView:(id)arg0;
- (id)awe_collectionView;
- (void)setAwe_hasObserved:(BOOL)arg0;
- (id /* block */)didScrollBlock;
- (BOOL)awe_hasObserved;
- (void)setDidScrollBlock:(id /* block */)arg0;
- (id)initWithCollectionView:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end
