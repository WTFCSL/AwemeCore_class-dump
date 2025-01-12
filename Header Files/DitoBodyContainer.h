//
//     Generated by private class-dump
//

@class UIScrollView, NSString, DitoPageContext;
@protocol UIGestureRecognizerDelegate;

@interface DitoBodyContainer : UICollectionView <UIGestureRecognizerDelegate> {
    DitoPageContext *_context;
    id<UIGestureRecognizerDelegate> _panGestureDelegate;
    double _minBodyContentHeight;
    UIScrollView *_nestedScrollView;
}

@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> panGestureDelegate;
@property (nonatomic) double minBodyContentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindStateAndAction;
- (id)nestedScrollView;
- (void)setNestedScrollView:(id)arg0;
- (id)panGestureDelegate;
- (double)minBodyContentHeight;
- (void)setMinBodyContentHeight:(double)arg0;
- (void)setPanGestureDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)context;

@end
