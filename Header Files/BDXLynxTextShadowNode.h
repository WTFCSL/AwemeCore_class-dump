//
//     Generated by private class-dump
//

@class YYTextLayout, NSString;

@interface BDXLynxTextShadowNode : BDXLynxVarietyTextShadowNode <LynxMeasureDelegate> {
    YYTextLayout *_layout;
}

@property (retain) YYTextLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__892;
+ (id)__lynx_prop_config__963;

- (void)adoptNativeLayoutNode:(long long)arg0;
- (struct CGSize { double x0; double x1; })measureNode:(id)arg0 withWidth:(double)arg1 widthMode:(long long)arg2 height:(double)arg3 heightMode:(long long)arg4;
- (id)getExtraBundle;
- (void)layoutDidStart;
- (BOOL)needsEventSet;
- (void)layoutDidUpdate;
- (void)dispatchLayoutEventWithLayout:(id)arg0 withTruncatedString:(id)arg1;
- (void)richTextType:(id)arg0 requestReset:(BOOL)arg1;
- (void)textIndent:(id)arg0 requestReset:(BOOL)arg1;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (id)layout;
- (BOOL)hasCustomLayout;

@end
