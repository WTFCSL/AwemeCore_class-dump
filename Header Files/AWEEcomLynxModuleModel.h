//
//     Generated by private class-dump
//

@class NSString;

@interface AWEEcomLynxModuleModel : MTLModel <MTLJSONSerializing> {
    double _width;
    double _height;
    double _topMargin;
    double _bottomMargin;
    double _leftMargin;
    double _rightMargin;
    NSString *_alignmentMode;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (copy, nonatomic) NSString *alignmentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)rightMargin;
- (void).cxx_destruct;
- (double)topMargin;
- (double)height;
- (void)setLeftMargin:(double)arg0;
- (double)leftMargin;
- (void)setWidth:(double)arg0;
- (double)bottomMargin;
- (void)setHeight:(double)arg0;
- (double)width;
- (id)alignmentMode;
- (void)setAlignmentMode:(id)arg0;
- (void)setRightMargin:(double)arg0;
- (void)setTopMargin:(double)arg0;
- (void)setBottomMargin:(double)arg0;

@end