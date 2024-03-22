//
//     Generated by private class-dump
//

@class NSObject, IESLiveGiftPriceLabelView;
@protocol OS_dispatch_semaphore;

@interface IESLiveGiftPriceLabelScrollView : UIView {
    id /* block */ _getGiftPriceBlock;
    IESLiveGiftPriceLabelView *_displayView;
    IESLiveGiftPriceLabelView *_disappearView;
    long long _selectedIndex;
    NSObject<OS_dispatch_semaphore> *_scrollViewSemaphore;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _leftFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _displayFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rightFrame;
}

@property (retain, nonatomic) IESLiveGiftPriceLabelView *displayView;
@property (retain, nonatomic) IESLiveGiftPriceLabelView *disappearView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightFrame;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *scrollViewSemaphore;
@property (copy, nonatomic) id /* block */ getGiftPriceBlock;

- (void)setDisplayView:(id)arg0;
- (id)displayView;
- (void)setLeftFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDisappearView:(id)arg0;
- (id)disappearView;
- (void)p_showAnimationWithSelectedIndex:(long long)arg0;
- (void)_cancelAllAnimations;
- (id)scrollViewSemaphore;
- (void)p_prepareAnimationWithIndex:(long long)arg0;
- (void)selectWithIndex:(long long)arg0 withAnimation:(BOOL)arg1;
- (void)setScrollViewSemaphore:(id)arg0;
- (void)p_showWithGiftPriceView:(id)arg0 index:(long long)arg1;
- (id)_obtainGiftPriceWithIndex:(long long)arg0;
- (id /* block */)getGiftPriceBlock;
- (void)setGetGiftPriceBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)selectedIndex;
- (void)setDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightFrame;
- (void)setupUI;

@end