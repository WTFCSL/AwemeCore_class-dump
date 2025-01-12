//
//     Generated by private class-dump
//

@class NSString, DitoPageContext;

@interface AWEPOIDetailStayTimeTracker : NSObject {
    DitoPageContext *_context;
    NSString *_poiDeviceSamecity;
    NSString *_poiID;
    NSString *_poiBackendType;
    long long _stayTime;
    NSString *_groupID;
    NSString *_poiEnterID;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (nonatomic) long long stayTime;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *poiEnterID;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) DitoPageContext *context;
@property (retain, nonatomic) NSString *poiDeviceSamecity;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)poiID;
- (id)poiBackendType;
- (void)setPoiBackendType:(id)arg0;
- (void)setPoiID:(id)arg0;
- (void)setStayTime:(long long)arg0;
- (long long)stayTime;
- (id)poiDeviceSamecity;
- (id)poiEnterID;
- (void)setPoiEnterID:(id)arg0;
- (void)setPoiDeviceSamecity:(id)arg0;
- (void)didFetchPOIDetailResponse:(id)arg0;
- (void)startTrackerForKey:(id)arg0;
- (void)stopTrackerForKey:(id)arg0;
- (void)leavePOIDetailPage;
- (id)initWithPOIConstData:(id)arg0 context:(id)arg1;
- (void)p_trackTotalStayTime;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
