//
//     Generated by private class-dump
//

@class NSString, CAGradientLayer, UIView;

@interface AWENaviTabControl : TTKNaviTabControl <UIScrollViewDelegate> {
    BOOL _stopInternalHiglight;
    CAGradientLayer *_leftLayer;
    CAGradientLayer *_rightLayer;
    UIView *_seperator;
    long long _willSelectIndex;
}

@property (retain, nonatomic) CAGradientLayer *leftLayer;
@property (retain, nonatomic) CAGradientLayer *rightLayer;
@property (retain, nonatomic) UIView *seperator;
@property (nonatomic) long long willSelectIndex;
@property (nonatomic) BOOL stopInternalHiglight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftLayer;
- (id)rightLayer;
- (void)setLeftLayer:(id)arg0;
- (void)setRightLayer:(id)arg0;
- (void)selectItemAtIndex:(long long)arg0 animated:(BOOL)arg1;
- (id)seperator;
- (void)setStopInternalHiglight:(BOOL)arg0;
- (unsigned long long)p_indexOfOffset:(double)arg0;
- (long long)willSelectIndex;
- (void)setWillSelectIndex:(long long)arg0;
- (BOOL)stopInternalHiglight;
- (void)p_updateIndex:(id)arg0;
- (void)setSeperator:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg0;

@end
