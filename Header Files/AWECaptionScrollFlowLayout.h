//
//     Generated by private class-dump
//

@protocol AWECaptionScrollFlowLayoutDelegate;

@interface AWECaptionScrollFlowLayout : UICollectionViewFlowLayout {
    id<AWECaptionScrollFlowLayoutDelegate> _delegate;
}

@property (weak, nonatomic) id<AWECaptionScrollFlowLayoutDelegate> delegate;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })arg1;

@end
