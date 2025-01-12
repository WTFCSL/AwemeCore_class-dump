//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLiveVideoGiftMaskContainerModel : MTLModel <MTLJSONSerializing> {
    BOOL _disableFlexX;
    BOOL _disableFlexY;
    NSArray *_anchorPointArray;
    NSArray *_flexPaddingArray;
    NSArray *_contentPaddingArray;
    NSArray *_rgbFrameArray;
    NSArray *_alphaFrameArray;
    long long _contentMode;
    long long _alignment;
    NSString *_fallbackLayer;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _flexPadding;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentPadding;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rgbFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alphaFrame;
}

@property (copy, nonatomic) NSArray *anchorPointArray;
@property (copy, nonatomic) NSArray *flexPaddingArray;
@property (copy, nonatomic) NSArray *contentPaddingArray;
@property (copy, nonatomic) NSArray *rgbFrameArray;
@property (copy, nonatomic) NSArray *alphaFrameArray;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *fallbackLayer;
@property (nonatomic) BOOL disableFlexX;
@property (nonatomic) BOOL disableFlexY;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } flexPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rgbFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alphaFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rgbFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaFrame;
- (id)anchorPointArray;
- (void)setAnchorPointArray:(id)arg0;
- (id)flexPaddingArray;
- (void)setFlexPaddingArray:(id)arg0;
- (id)contentPaddingArray;
- (void)setContentPaddingArray:(id)arg0;
- (id)rgbFrameArray;
- (void)setRgbFrameArray:(id)arg0;
- (id)alphaFrameArray;
- (void)setAlphaFrameArray:(id)arg0;
- (BOOL)disableFlexX;
- (void)setDisableFlexX:(BOOL)arg0;
- (BOOL)disableFlexY;
- (void)setDisableFlexY:(BOOL)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })flexPadding;
- (void)setFlexPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setRgbFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAlphaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setContentMode:(long long)arg0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void).cxx_destruct;
- (void)setAlignment:(long long)arg0;
- (long long)alignment;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentPadding;
- (void)setContentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (long long)contentMode;
- (id)fallbackLayer;
- (void)setFallbackLayer:(id)arg0;

@end
