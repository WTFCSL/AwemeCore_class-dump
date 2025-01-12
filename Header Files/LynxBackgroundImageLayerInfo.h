//
//     Generated by private class-dump
//

@class LynxBackgroundPosition, LynxBackgroundSize, LynxBackgroundDrawable;

@interface LynxBackgroundImageLayerInfo : NSObject {
    LynxBackgroundDrawable *_item;
    unsigned long long _backgroundOrigin;
    unsigned long long _repeatXType;
    unsigned long long _repeatYType;
    LynxBackgroundSize *_backgroundSizeX;
    LynxBackgroundSize *_backgroundSizeY;
    LynxBackgroundPosition *_backgroundPosX;
    LynxBackgroundPosition *_backgroundPosY;
    long long _backgroundClip;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _paintingRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clipRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _borderRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _paddingRect;
    struct { struct CGSize { double width; double height; } topLeft; struct CGSize { double width; double height; } topRight; struct CGSize { double width; double height; } bottomLeft; struct CGSize { double width; double height; } bottomRight; } _cornerInsets;
}

@property (retain) LynxBackgroundDrawable *item;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paintingRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clipRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } borderRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paddingRect;
@property (nonatomic) unsigned long long backgroundOrigin;
@property (nonatomic) unsigned long long repeatXType;
@property (nonatomic) unsigned long long repeatYType;
@property (retain) LynxBackgroundSize *backgroundSizeX;
@property (retain) LynxBackgroundSize *backgroundSizeY;
@property (retain) LynxBackgroundPosition *backgroundPosX;
@property (retain) LynxBackgroundPosition *backgroundPosY;
@property (nonatomic) long long backgroundClip;
@property (nonatomic) struct { struct CGSize { double width; double height; } topLeft; struct CGSize { double width; double height; } topRight; struct CGSize { double width; double height; } bottomLeft; struct CGSize { double width; double height; } bottomRight; } cornerInsets;

- (unsigned long long)backgroundOrigin;
- (unsigned long long)repeatXType;
- (unsigned long long)repeatYType;
- (id)backgroundPosX;
- (id)backgroundPosY;
- (id)backgroundSizeX;
- (id)backgroundSizeY;
- (long long)backgroundClip;
- (struct CGPath { } *)createClipPath;
- (void)flushPropsToDrawable;
- (BOOL)prepareGradientLayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paintingRect;
- (void)setPaintingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddingRect;
- (void)setPaddingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBackgroundOrigin:(unsigned long long)arg0;
- (void)setRepeatXType:(unsigned long long)arg0;
- (void)setRepeatYType:(unsigned long long)arg0;
- (void)setBackgroundSizeX:(id)arg0;
- (void)setBackgroundSizeY:(id)arg0;
- (void)setBackgroundPosX:(id)arg0;
- (void)setBackgroundPosY:(id)arg0;
- (void)setBackgroundClip:(long long)arg0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })cornerInsets;
- (void)setCornerInsets:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (id)item;
- (void)setClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)drawInContext:(struct CGContext { } *)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setItem:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderRect;

@end
