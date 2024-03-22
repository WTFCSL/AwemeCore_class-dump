//
//     Generated by private class-dump
//

@class NSArray, UIView, NSMutableArray, UILabel;

@interface AWENewHotSpotAlbumTileLayoutController : UIViewController {
    id /* block */ _albumTappedWithIndex;
    long long _lastTapIndex;
    NSMutableArray *_imageViewsArray;
    NSArray *_albumImages;
    UIView *_moreOverlay;
    UILabel *_moreOverlayText;
}

@property (retain, nonatomic) NSMutableArray *imageViewsArray;
@property (retain, nonatomic) NSArray *albumImages;
@property (nonatomic) long long lastTapIndex;
@property (retain, nonatomic) UIView *moreOverlay;
@property (retain, nonatomic) UILabel *moreOverlayText;
@property (copy, nonatomic) id /* block */ albumTappedWithIndex;

- (id)albumImages;
- (void)setAlbumImages:(id)arg0;
- (id)moreOverlay;
- (id)moreOverlayText;
- (void)moreOverlayTapped;
- (id)imageViewsArray;
- (void)setLastTapIndex:(long long)arg0;
- (id /* block */)albumTappedWithIndex;
- (void)updateImageFrame;
- (void)updateMoreOverlay;
- (void)buildRightBottomShapeLayerForView:(id)arg0;
- (long long)lastTapIndex;
- (void)updateTapIndex:(long long)arg0;
- (id)currentTransitionView;
- (void)setAlbumTappedWithIndex:(id /* block */)arg0;
- (void)setImageViewsArray:(id)arg0;
- (void)setMoreOverlay:(id)arg0;
- (void)setMoreOverlayText:(id)arg0;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateCornerRadius;
- (void)updateWithModel:(id)arg0;

@end
