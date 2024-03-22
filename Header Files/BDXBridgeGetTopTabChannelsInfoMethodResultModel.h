//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface BDXBridgeGetTopTabChannelsInfoMethodResultModel : BDXBridgeModel {
    BOOL _isNearbyTabShow;
    BOOL _isNearbyDual;
    BOOL _isInSearch;
    NSString *_nearbyTabName;
    NSString *_currentSceneL1;
    NSNumber *_isGrouponTabVisible;
    NSNumber *_isGrouponSinglePageVisible;
    NSNumber *_popUpCanShow;
    NSArray *_channelsInfo;
}

@property (nonatomic) BOOL isNearbyTabShow;
@property (nonatomic) BOOL isNearbyDual;
@property (copy, nonatomic) NSString *nearbyTabName;
@property (copy, nonatomic) NSString *currentSceneL1;
@property (nonatomic) BOOL isInSearch;
@property (retain, nonatomic) NSNumber *isGrouponTabVisible;
@property (retain, nonatomic) NSNumber *isGrouponSinglePageVisible;
@property (retain, nonatomic) NSNumber *popUpCanShow;
@property (retain, nonatomic) NSArray *channelsInfo;

+ (id)channelsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isNearbyDual;
- (void)setIsInSearch:(BOOL)arg0;
- (BOOL)isInSearch;
- (id)nearbyTabName;
- (void)setNearbyTabName:(id)arg0;
- (void)setIsNearbyTabShow:(BOOL)arg0;
- (void)setChannelsInfo:(id)arg0;
- (void)setIsNearbyDual:(BOOL)arg0;
- (void)setCurrentSceneL1:(id)arg0;
- (void)setIsGrouponSinglePageVisible:(id)arg0;
- (void)setIsGrouponTabVisible:(id)arg0;
- (void)setPopUpCanShow:(id)arg0;
- (id)currentSceneL1;
- (BOOL)isNearbyTabShow;
- (id)isGrouponTabVisible;
- (id)isGrouponSinglePageVisible;
- (id)popUpCanShow;
- (id)channelsInfo;
- (void).cxx_destruct;

@end
