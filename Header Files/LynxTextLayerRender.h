//
//     Generated by private class-dump
//

@class NSString, LynxTextRenderer;

@interface LynxTextLayerRender : NSObject <CALayerDelegate> {
    LynxTextRenderer *_textRenderer;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _border;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _padding;
}

@property (weak, nonatomic) LynxTextRenderer *textRenderer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } border;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTextRenderer:(id)arg0;
- (id)textRenderer;
- (void)setPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (void)drawLayer:(id)arg0 inContext:(struct CGContext { } *)arg1;
- (void)setBorder:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })border;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;

@end