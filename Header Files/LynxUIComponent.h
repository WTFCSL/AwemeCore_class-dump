//
//     Generated by private class-dump
//

@class NSString;
@protocol LynxUIComponentLayoutObserver;

@interface LynxUIComponent : LynxUIView {
    BOOL _frameDidSet;
    id<LynxUIComponentLayoutObserver> _layoutObserver;
    NSString *_itemKey;
}

@property (weak) id<LynxUIComponentLayoutObserver> layoutObserver;
@property (retain, nonatomic) NSString *itemKey;
@property (readonly, nonatomic) BOOL frameDidSet;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__281;

- (void)onNodeReady;
- (BOOL)frameDidSet;
- (void)setItemKey:(id)arg0;
- (void)setItemKey:(id)arg0 requestReset:(BOOL)arg1;
- (void)asyncListItemRenderFinished:(long long)arg0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutObserver;
- (void)setLayoutObserver:(id)arg0;
- (id)itemKey;

@end
