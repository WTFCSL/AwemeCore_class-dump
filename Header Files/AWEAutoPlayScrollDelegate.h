//
//     Generated by private class-dump
//

@class UIScrollView, NSString;
@protocol UIScrollViewDelegate, AWEAutoPlayContainer;

@interface AWEAutoPlayScrollDelegate : NSObject <UIScrollViewDelegate> {
    id<UIScrollViewDelegate> _scrollProxy;
    double _latestOffsetY;
    unsigned long long _direction;
    UIScrollView *_scrollView;
    double _latestTriggleOffsetY;
    id<AWEAutoPlayContainer> _container;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _playTriggleRect;
}

@property (nonatomic) double latestOffsetY;
@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double latestTriggleOffsetY;
@property (weak, nonatomic) id<AWEAutoPlayContainer> container;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollProxy;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playTriggleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scrollProxy;
- (void)setLatestOffsetY:(double)arg0;
- (double)latestOffsetY;
- (void)setPlayTriggleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)autoPlayVisibleVideoCellWithScrollView:(id)arg0 direction:(unsigned long long)arg1;
- (void)setLatestTriggleOffsetY:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playTriggleRect;
- (double)latestTriggleOffsetY;
- (void)setScrollProxy:(id)arg0;
- (id)container;
- (BOOL)conformsToProtocol:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setContainer:(id)arg0;
- (unsigned long long)direction;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (id)initWithContainer:(id)arg0;
- (id)scrollView;
- (void)setDirection:(unsigned long long)arg0;
- (void)autoPlay;

@end
