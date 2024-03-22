//
//     Generated by private class-dump
//

@class NSString, DitoStyle;

@interface DitoDecorationModel : NSObject {
    DitoStyle *_decorationStyle;
    NSString *_nodeTag;
    long long _zPositionTag;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _decorationViewFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } decorationViewFrame;
@property (retain, nonatomic) DitoStyle *decorationStyle;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) long long zPositionTag;

- (id)nodeTag;
- (void)setNodeTag:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decorationViewFrame;
- (void)setDecorationViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)decorationStyle;
- (void)setDecorationStyle:(id)arg0;
- (long long)zPositionTag;
- (void)setZPositionTag:(long long)arg0;
- (void).cxx_destruct;

@end