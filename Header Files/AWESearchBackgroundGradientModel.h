//
//     Generated by private class-dump
//

@class UIColor;

@interface AWESearchBackgroundGradientModel : AWEBaseApiModel {
    UIColor *_startColor;
    UIColor *_centerColor;
    UIColor *_endColor;
    double _centerColorPosition;
    double _centerColorPXPosition;
    unsigned long long _gradientLayoutType;
}

@property (copy, nonatomic) UIColor *startColor;
@property (copy, nonatomic) UIColor *centerColor;
@property (copy, nonatomic) UIColor *endColor;
@property (nonatomic) double centerColorPosition;
@property (nonatomic) double centerColorPXPosition;
@property (nonatomic) unsigned long long gradientLayoutType;

+ (id)startColorJSONTransformer;
+ (id)centerColorJSONTransformer;
+ (id)endColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)centerColor;
- (double)centerColorPXPosition;
- (double)centerColorPosition;
- (unsigned long long)gradientLayoutType;
- (void)setCenterColorPosition:(double)arg0;
- (void)setCenterColorPXPosition:(double)arg0;
- (void)setGradientLayoutType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setStartColor:(id)arg0;
- (void)setEndColor:(id)arg0;
- (id)startColor;
- (id)endColor;
- (void)setCenterColor:(id)arg0;

@end
