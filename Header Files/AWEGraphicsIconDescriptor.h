//
//     Generated by private class-dump
//

@class UIColor;

@interface AWEGraphicsIconDescriptor : AWEGraphicsLayerDescriptor {
    UIColor *_color;
    struct UIOffset { double horizontal; double vertical; } _offset;
}

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } offset;
@property (retain, nonatomic) UIColor *color;

- (id)color;
- (void).cxx_destruct;
- (void)setOffset:(struct UIOffset { double x0; double x1; })arg0;
- (struct UIOffset { double x0; double x1; })offset;
- (void)setColor:(id)arg0;

@end