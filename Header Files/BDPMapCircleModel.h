//
//     Generated by private class-dump
//

@class BDPMapPointModel, UIColor;

@interface BDPMapCircleModel : BDPBasePluginModel {
    BDPMapPointModel *_point;
    double _radius;
    UIColor *_color;
    UIColor *_fillColor;
    double _strokeWidth;
}

@property (copy, nonatomic) BDPMapPointModel *point;
@property (nonatomic) double radius;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIColor *fillColor;
@property (nonatomic) double strokeWidth;

- (id)modelCustomWillTransformFromDictionary:(id)arg0;
- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (double)strokeWidth;
- (id)color;
- (id)init;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (void)setStrokeWidth:(double)arg0;
- (id)point;
- (double)radius;
- (id)fillColor;
- (void)setRadius:(double)arg0;
- (void)setColor:(id)arg0;
- (void)setPoint:(id)arg0;

@end