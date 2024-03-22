//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface BDXBridgeDcardUpdateStatsMethodParamModel : BDXBridgeModel {
    NSString *_scene;
    NSNumber *_isDislike;
    NSNumber *_isSkip;
    NSNumber *_lastSelectTimestamp;
    NSArray *_poiIDs;
}

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *isDislike;
@property (retain, nonatomic) NSNumber *isSkip;
@property (retain, nonatomic) NSNumber *lastSelectTimestamp;
@property (retain, nonatomic) NSArray *poiIDs;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)isSkip;
- (void)setIsSkip:(id)arg0;
- (void)setPoiIDs:(id)arg0;
- (void)setIsDislike:(id)arg0;
- (void)setLastSelectTimestamp:(id)arg0;
- (id)lastSelectTimestamp;
- (id)isDislike;
- (id)poiIDs;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;

@end
