//
//     Generated by private class-dump
//

@interface LVTextTemplateBoundingBox : NSObject {
    struct CGPoint { double x; double y; } _translation;
    struct CGSize { double width; double height; } _normalizSize;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } translation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } normalizSize;

- (struct CGSize { double x0; double x1; })normalizSize;
- (struct CGPoint { double x0; double x1; })translation;
- (id)initWithBoundingBox:(id)arg0;

@end
