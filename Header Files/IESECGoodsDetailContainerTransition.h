//
//     Generated by private class-dump
//

@class IESECGoodsDetailHeader, NSString, UIView, UIViewController;
@protocol IESECGoodsDetailContentProtocol, IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailContainerTransition : NSObject <UINavigationControllerDelegate> {
    BOOL _isGesturePop;
    BOOL _isGestureReverse;
    UIViewController<IESECGoodsDetailContainerProtocol> *_currentContainerVC;
    UIViewController<IESECGoodsDetailContentProtocol> *_previousViewController;
    UIViewController<IESECGoodsDetailContentProtocol> *_nextViewController;
    IESECGoodsDetailHeader *_headerView;
    UIView *_contentViewOfTransition;
    double _contentHeight;
    id /* block */ _completionBlock;
    NSString *_animationType;
    struct CGPoint { double x; double y; } _panGestureStartPoint;
}

@property (nonatomic) BOOL isGesturePop;
@property (nonatomic) struct CGPoint { double x; double y; } panGestureStartPoint;
@property (nonatomic) BOOL isGestureReverse;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailContainerProtocol> *currentContainerVC;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailContentProtocol> *previousViewController;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailContentProtocol> *nextViewController;
@property (retain, nonatomic) IESECGoodsDetailHeader *headerView;
@property (retain, nonatomic) UIView *contentViewOfTransition;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *animationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChildViewController;
- (id)contentViewOfTransition;
- (void)popTransitionResultWithGesture:(id)arg0;
- (BOOL)isGesturePop;
- (void)setIsGesturePop:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })panGestureStartPoint;
- (void)setPanGestureStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)currentContainerVC;
- (void)pushTransition;
- (void)popTransition;
- (void)popTransitionWithGesture:(id)arg0;
- (void)setCurrentContainerVC:(id)arg0;
- (void)setContentViewOfTransition:(id)arg0;
- (BOOL)isGestureReverse;
- (void)setIsGestureReverse:(BOOL)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setAnimationType:(id)arg0;
- (void)setHeaderView:(id)arg0;
- (id)headerView;
- (id)animationType;
- (id)navigationController:(id)arg0 animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)setContentHeight:(double)arg0;
- (id)previousViewController;
- (id)nextViewController;
- (void)setPreviousViewController:(id)arg0;
- (void)setNextViewController:(id)arg0;

@end
