//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveStreamPlayerLayoutContentFrame : MTLModel <MTLJSONSerializing> {
    double _x;
    double _y;
    double _w;
    double _h;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)h;
- (double)w;
- (void)setW:(double)arg0;
- (void)setY:(double)arg0;
- (double)y;
- (void)setH:(double)arg0;
- (double)x;
- (void)setX:(double)arg0;

@end
