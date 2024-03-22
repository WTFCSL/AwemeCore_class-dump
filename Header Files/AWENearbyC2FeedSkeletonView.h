//
//     Generated by private class-dump
//

@class UIView, AWENearbySkeletonView;

@interface AWENearbyC2FeedSkeletonView : UIView {
    AWENearbySkeletonView *_headImgHolder;
    UIView *_whiteBGView;
    AWENearbySkeletonView *_firstLineHolder;
    AWENearbySkeletonView *_secondLineHolder;
}

@property (retain, nonatomic) AWENearbySkeletonView *headImgHolder;
@property (retain, nonatomic) UIView *whiteBGView;
@property (retain, nonatomic) AWENearbySkeletonView *firstLineHolder;
@property (retain, nonatomic) AWENearbySkeletonView *secondLineHolder;

- (id)whiteBGView;
- (id)headImgHolder;
- (id)firstLineHolder;
- (id)secondLineHolder;
- (void)setHeadImgHolder:(id)arg0;
- (void)setWhiteBGView:(id)arg0;
- (void)setFirstLineHolder:(id)arg0;
- (void)setSecondLineHolder:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)setupUI;

@end