//
//     Generated by private class-dump
//

@class LynxUI;

@interface LynxBackgroundCapInsets : NSObject {
    LynxUI *_ui;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } capInsets;
@property (weak, nonatomic) LynxUI *ui;

- (double)toCapInsetValue:(id)arg0;
- (void).cxx_destruct;
- (id)ui;
- (id)initWithParams:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })capInsets;
- (void)reset;
- (void)setUi:(id)arg0;
- (void)setCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end