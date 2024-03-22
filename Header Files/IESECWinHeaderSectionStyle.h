//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinHeaderSectionStyle : MTLModel <MTLJSONSerializing> {
    double _marginTop;
    double _marginLeft;
    double _marginBottom;
    double _marginRight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edge;
}

@property (nonatomic) double marginTop;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginRight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edge;
- (void)setEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)marginTop;
- (void)setMarginTop:(double)arg0;
- (id)initWithEdge:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)marginRight;
- (void)setMarginRight:(double)arg0;
- (double)marginBottom;
- (void)setMarginBottom:(double)arg0;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg0;

@end