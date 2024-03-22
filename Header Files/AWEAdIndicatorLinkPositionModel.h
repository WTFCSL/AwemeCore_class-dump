//
//     Generated by private class-dump
//

@class NSNumber, AWEAdIndicatorLinkCoordinateModel, NSString;

@interface AWEAdIndicatorLinkPositionModel : MTLModel <MTLJSONSerializing> {
    AWEAdIndicatorLinkCoordinateModel *_coordinate;
    NSNumber *_timestampMS;
}

@property (retain, nonatomic) AWEAdIndicatorLinkCoordinateModel *coordinate;
@property (retain, nonatomic) NSNumber *timestampMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coordinateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)timestampMS;
- (void)setTimestampMS:(id)arg0;
- (void).cxx_destruct;
- (void)setCoordinate:(id)arg0;
- (id)coordinate;

@end