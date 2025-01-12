//
//     Generated by private class-dump
//

@class NSString;

@interface APCDTOArea : MTLModel <MTLJSONSerializing> {
    long long _type;
    double _centerX;
    double _centerY;
    double _width;
    double _height;
    long long _index;
    double _rotation;
    double _scale;
    double _startTime;
    double _endTime;
    NSString *_attr;
}

@property (nonatomic) long long type;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long index;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *attr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAttr:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setStartTime:(double)arg0;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (double)height;
- (long long)type;
- (double)scale;
- (double)endTime;
- (void)setType:(long long)arg0;
- (long long)index;
- (double)rotation;
- (double)startTime;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setEndTime:(double)arg0;
- (void)setScale:(double)arg0;
- (id)attr;
- (double)centerX;
- (double)centerY;
- (void)setCenterX:(double)arg0;
- (void)setCenterY:(double)arg0;

@end
