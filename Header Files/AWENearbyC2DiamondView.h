//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWENearbyC2DiamondSkeletonView, UITapGestureRecognizer;
@protocol AWENearbyC2ContainerDiamondSectionProtocol;

@interface AWENearbyC2DiamondView : UIView <UIGestureRecognizerDelegate> {
    id<AWENearbyC2ContainerDiamondSectionProtocol> _child;
    UIViewController *_parentVC;
    double _skeletonHeight;
    AWENearbyC2DiamondSkeletonView *_skeletonView;
    UITapGestureRecognizer *_tap;
}

@property (retain, nonatomic) AWENearbyC2DiamondSkeletonView *skeletonView;
@property (nonatomic) double skeletonHeight;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (weak, nonatomic) id<AWENearbyC2ContainerDiamondSectionProtocol> child;
@property (weak, nonatomic) UIViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)skeletonView;
- (void)setSkeletonView:(id)arg0;
- (void)addChildVC;
- (double)skeletonHeight;
- (void)setSkeletonHeight:(double)arg0;
- (void)addSkeleton;
- (void)removeSkeleton;
- (void)emptyTap:(id)arg0;
- (void)setSkeletonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (void)config;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)child;
- (id)tap;
- (void)setTap:(id)arg0;
- (id)parentVC;
- (void)setParentVC:(id)arg0;
- (void)setChild:(id)arg0;

@end
