//
//     Generated by private class-dump
//

@class NSArray, IESECCoordinateLocation, NSString;

@interface IESECGradientInfo : MTLModel <MTLJSONSerializing> {
    NSArray *_colors;
    NSArray *_locations;
    IESECCoordinateLocation *_startPoint;
    IESECCoordinateLocation *_endPoint;
    IESECCoordinateLocation *_startPosition;
    IESECCoordinateLocation *_endPosition;
}

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (retain, nonatomic) IESECCoordinateLocation *startPoint;
@property (retain, nonatomic) IESECCoordinateLocation *endPoint;
@property (retain, nonatomic) IESECCoordinateLocation *startPosition;
@property (retain, nonatomic) IESECCoordinateLocation *endPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStartPoint:(id)arg0;
- (void)setLocations:(id)arg0;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (void)setEndPoint:(id)arg0;
- (id)endPoint;
- (id)colors;
- (id)locations;
- (id)startPoint;
- (id)endPosition;
- (id)startPosition;
- (void)setStartPosition:(id)arg0;
- (void)setEndPosition:(id)arg0;

@end