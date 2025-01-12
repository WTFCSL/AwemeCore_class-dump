//
//     Generated by private class-dump
//

@class NSArray, LolaDrawContext, CAShapeLayer;

@interface LolaCanvasView : UIView {
    CAShapeLayer *_shapeLayer;
    NSArray *_currentDrawCommands;
    LolaDrawContext *_drawContext;
}

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSArray *currentDrawCommands;
@property (retain, nonatomic) LolaDrawContext *drawContext;

- (void)updateCanvas:(id)arg0;
- (void)setCurrentDrawCommands:(id)arg0;
- (id)currentDrawCommands;
- (id)drawContext;
- (void)appendCanvas;
- (void)setDrawContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg0;

@end
