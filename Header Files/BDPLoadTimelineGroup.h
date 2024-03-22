//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, NSMutableArray;

@interface BDPLoadTimelineGroup : NSObject {
    int _groupIdx;
    BDPUniqueID *_uniqueId;
    NSMutableArray *_points;
    NSString *_uploadUrl;
    NSString *_lifeCycleId;
}

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSMutableArray *points;
@property (readonly, nonatomic) NSString *pointsJSON;
@property (nonatomic) int groupIdx;
@property (copy, nonatomic) NSString *uploadUrl;
@property (copy, nonatomic) NSString *lifeCycleId;

- (int)groupIdx;
- (void)setGroupIdx:(int)arg0;
- (id)pointsJSON;
- (void)setLifeCycleId:(id)arg0;
- (id)lifeCycleId;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)points;
- (void)setPoints:(id)arg0;
- (void)setUploadUrl:(id)arg0;
- (id)uploadUrl;

@end
