//
//     Generated by private class-dump
//

@class NSString, NSDictionary, LynxUIOwner, LynxShadowNodeStyle;
@protocol LynxShadowNodeDelegate;

@interface LynxShadowNode : LynxLayoutNode {
    BOOL _needsDisplay;
    id<LynxShadowNodeDelegate> _delegate;
    BOOL _isDestroy;
    BOOL _ignoreFocus;
    BOOL _enableTouchPseudoPropagation;
    int _eventThrough;
    long long _sign;
    NSString *_tagName;
    LynxUIOwner *_uiOwner;
    LynxShadowNodeStyle *_shadowNodeStyle;
    NSDictionary *_eventSet;
}

@property (readonly, nonatomic) long long sign;
@property (readonly, nonatomic) NSString *tagName;
@property (readonly, weak, nonatomic) LynxUIOwner *uiOwner;
@property (readonly, nonatomic) LynxShadowNodeStyle *shadowNodeStyle;
@property (readonly, nonatomic) BOOL isDestroy;
@property (readonly, nonatomic) BOOL needsEventSet;
@property (readonly, nonatomic) BOOL ignoreFocus;
@property (readonly, nonatomic) BOOL enableTouchPseudoPropagation;
@property (readonly, nonatomic) int eventThrough;
@property (retain, nonatomic) NSDictionary *eventSet;

+ (id)__lynx_props_group_config__200;
+ (id)__lynx_prop_config__851;
+ (id)__lynx_prop_config__922;
+ (id)__lynx_prop_config__1093;

- (id)eventSet;
- (long long)sign;
- (BOOL)ignoreFocus;
- (int)eventThrough;
- (BOOL)enableTouchPseudoPropagation;
- (void)setIgnoreFocus:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setEnableTouchPseudoPropagation:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setEventThrough:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)setEventSet:(id)arg0;
- (id)getExtraBundle;
- (id)uiOwner;
- (id)initWithSign:(long long)arg0 tagName:(id)arg1;
- (void)setUIOperation:(id)arg0;
- (id)shadowNodeStyle;
- (BOOL)supportInlineView;
- (void)setVerticalAlignOnShadowNode:(BOOL)arg0 value:(id)arg1;
- (BOOL)needsEventSet;
- (void)setVerticalAlign:(id)arg0 requestReset:(BOOL)arg1;
- (void)internalSetNeedsLayoutForce;
- (id)findNonVirtualNode;
- (void)postExtraDataToUI:(id)arg0;
- (void)postFrameToUI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isDestroy;
- (id)init;
- (void).cxx_destruct;
- (void)setNeedsLayout;
- (BOOL)isVirtual;
- (void)destroy;
- (void)setDelegate:(id)arg0;
- (id)tagName;

@end
