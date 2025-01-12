//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, BDPUniqueID, NSMutableArray;

@interface BDPPageTimelineGroup : NSObject {
    BDPUniqueID *_uniqueId;
    NSMutableArray *_points;
    NSMutableDictionary *_collectPoints;
    id /* block */ _routeEndParamBlk;
    NSString *_routeID;
    long long _appType;
    NSMutableArray *_uniqueEventRecord;
}

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSMutableDictionary *collectPoints;
@property (copy, nonatomic) id /* block */ routeEndParamBlk;
@property (copy, nonatomic) NSString *routeID;
@property (nonatomic) long long appType;
@property (retain, nonatomic) NSMutableArray *uniqueEventRecord;

- (void)setRouteEndParamBlk:(id /* block */)arg0;
- (id /* block */)routeEndParamBlk;
- (void)addPageTimelinePointWithName:(id)arg0 param:(id)arg1 common:(id)arg2 timestamp:(long long)arg3;
- (id)uniqueEventRecord;
- (id)collectPoints;
- (void)setCollectPoints:(id)arg0;
- (id)collectPointArray;
- (void)setUniqueEventRecord:(id)arg0;
- (long long)appType;
- (id)routeID;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)points;
- (void)setAppType:(long long)arg0;
- (void)setRouteID:(id)arg0;
- (void)setPoints:(id)arg0;

@end
