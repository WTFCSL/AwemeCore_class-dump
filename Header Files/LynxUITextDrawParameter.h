//
//     Generated by private class-dump
//

@class LynxTextRenderer;

@interface LynxUITextDrawParameter : NSObject {
    LynxTextRenderer *_renderer;
    struct CGPoint { double x; double y; } _overflowLayerOffset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _border;
}

@property (retain, nonatomic) LynxTextRenderer *renderer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } border;
@property (nonatomic) struct CGPoint { double x; double y; } overflowLayerOffset;

- (struct CGPoint { double x0; double x1; })overflowLayerOffset;
- (void)setOverflowLayerOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (void)setRenderer:(id)arg0;
- (void)setBorder:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })border;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (id)renderer;

@end
