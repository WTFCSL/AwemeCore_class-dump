//
//     Generated by private class-dump
//

@protocol DVEMultipleTrackCollectionViewDelegate;

@interface DVEMultipleTrackCollectionView : UICollectionView {
    id<DVEMultipleTrackCollectionViewDelegate> _trackDelegate;
}

@property (weak, nonatomic) id<DVEMultipleTrackCollectionViewDelegate> trackDelegate;

- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;

@end