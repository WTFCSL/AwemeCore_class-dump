//
//     Generated by private class-dump
//

@class NSNumber;

@interface LiveCoreLayerInfo : NSObject {
    NSNumber *_layerID;
    long long _zOrder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layerRect;
}

@property (retain, nonatomic) NSNumber *layerID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layerRect;
@property (nonatomic) long long zOrder;

- (void)setLayerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithID:(id)arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 withZOrder:(long long)arg2;
- (void)updateLayerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerRect;
- (void).cxx_destruct;
- (void)setLayerID:(id)arg0;
- (long long)zOrder;
- (id)layerID;
- (void)setZOrder:(long long)arg0;

@end