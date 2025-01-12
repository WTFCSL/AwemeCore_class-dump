//
//     Generated by private class-dump
//

@class BDXLynxPageViewPro, NSMutableArray, NSString;

@interface BDXLynxFoldViewPro : LynxUI <BDXFoldViewProDelegate, BDXLynxFoldHeaderViewProDelegate, BDXLynxPageViewProDelegate> {
    BOOL _hasDataChanged;
    BOOL _hasReported;
    BOOL _allowVerticalBounce;
    BOOL _scrollBarEnable;
    BOOL _pageRefresh;
    BOOL _scrollEnable;
    int _gestureDirection;
    NSMutableArray *_foldItems;
    BDXLynxPageViewPro *_lynxPage;
    double _granularity;
    double _preHeaderOffsetPercent;
}

@property (retain, nonatomic) NSMutableArray *foldItems;
@property (nonatomic) BOOL hasDataChanged;
@property (retain, nonatomic) BDXLynxPageViewPro *lynxPage;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL allowVerticalBounce;
@property (nonatomic) double granularity;
@property (nonatomic) double preHeaderOffsetPercent;
@property (nonatomic) BOOL scrollBarEnable;
@property (nonatomic) BOOL pageRefresh;
@property (nonatomic) BOOL scrollEnable;
@property (nonatomic) int gestureDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__4111;
+ (id)__lynx_prop_config__4532;
+ (id)__lynx_prop_config__4573;
+ (id)__lynx_prop_config__4614;
+ (id)__lynx_prop_config__4655;
+ (id)__lynx_prop_config__4726;
+ (id)__lynx_prop_config__4777;

- (void)layoutDidFinished;
- (void)removeChild:(id)arg0 atIndex:(long long)arg1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1 onUIWithCustomLayout:(id)arg2;
- (void)setScrollEnable:(BOOL)arg0;
- (BOOL)scrollEnable;
- (void)setGestureDirection:(int)arg0;
- (void)lynxFoldHeaderLayoutIfNeeded:(id)arg0;
- (void)allowVerticalBounce:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)granularity:(double)arg0 requestReset:(BOOL)arg1;
- (void)scrollBarEnable:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)refreshMode:(id)arg0 requestReset:(BOOL)arg1;
- (void)scrollEnable:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setFoldExpanded:(id)arg0 withResult:(id /* block */)arg1;
- (unsigned long long)foldViewHeaderViewHeight;
- (id)foldView:(id)arg0 initListAtIndex:(long long)arg1;
- (void)foldView:(id)arg0 mainTableViewDidScroll:(id)arg1;
- (void)foldView:(id)arg0 listScrollViewDidScroll:(id)arg1;
- (void)setLynxPage:(id)arg0;
- (id)lynxPage;
- (void)mainTableViewOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)headerOffsetting:(id)arg0;
- (void)lynxPageViewLayoutIfNeeded;
- (void)setFoldExpanded:(BOOL)arg0;
- (void)gestureDirection:(int)arg0 requestReset:(BOOL)arg1;
- (id)foldItems;
- (void)setFoldItems:(id)arg0;
- (BOOL)hasDataChanged;
- (void)setHasDataChanged:(BOOL)arg0;
- (BOOL)allowVerticalBounce;
- (void)setAllowVerticalBounce:(BOOL)arg0;
- (double)preHeaderOffsetPercent;
- (void)setPreHeaderOffsetPercent:(double)arg0;
- (BOOL)scrollBarEnable;
- (void)setScrollBarEnable:(BOOL)arg0;
- (BOOL)pageRefresh;
- (void)setPageRefresh:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setGranularity:(double)arg0;
- (double)granularity;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (int)gestureDirection;
- (void)insertChild:(id)arg0 atIndex:(long long)arg1;
- (id)createView;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg0;

@end
