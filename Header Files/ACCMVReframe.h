//
//     Generated by private class-dump
//

@class NSString;

@interface ACCMVReframe : MTLModel <MTLJSONSerializing> {
    double _centerX;
    double _centerY;
    double _width;
    double _height;
    double _rotateAngle;
}

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double rotateAngle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setRotateAngle:(double)arg0;
- (double)rotateAngle;
- (double)height;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (double)centerX;
- (double)centerY;
- (void)setCenterX:(double)arg0;
- (void)setCenterY:(double)arg0;

@end