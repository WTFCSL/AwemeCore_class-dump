//
//     Generated by private class-dump
//

@class UICollectionView;

@interface IESECCollectionAwemeCellPlayerContext : NSObject {
    UICollectionView *_collectionView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameLimit;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameLimit;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameLimit;
- (void)setFrameLimit:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;

@end