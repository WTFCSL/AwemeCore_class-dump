//
//     Generated by private class-dump
//

@protocol RTVCollectionViewDelegate;

@interface RTVCollectionView : UICollectionView {
    id<RTVCollectionViewDelegate> _rtvDelegate;
}

@property (weak, nonatomic) id<RTVCollectionViewDelegate> rtvDelegate;

- (id)rtvDelegate;
- (void)setRtvDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;

@end