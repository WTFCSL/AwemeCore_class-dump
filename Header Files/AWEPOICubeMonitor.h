//
//     Generated by private class-dump
//

@class AWEPOICubeModel, NSString, NSDictionary, NSSet, NSNumber;
@protocol AWEPOICubeMonitorDataSource;

@interface AWEPOICubeMonitor : NSObject {
    BOOL _isPreload;
    BOOL _isUsed;
    NSString *_bid;
    id<AWEPOICubeMonitorDataSource> _dataSource;
    NSSet *_teaWhiteList;
    double _startSchemaCost;
    double _updateSchemaCost;
    AWEPOICubeModel *_cubeModel;
    NSString *_cubeUrl;
    double _openTime;
    double _createEndTime;
    double _updateDataStartTime;
    long long _updateDataSize;
    long long _preloadType;
    NSDictionary *_timingInfo;
    NSDictionary *_updateTimingInfo;
    double _instanceCreateCost;
    NSNumber *_totalFcp;
    NSNumber *_firstUpdateDataTime;
    NSString *_sessionID;
}

@property (weak, nonatomic) AWEPOICubeModel *cubeModel;
@property (copy, nonatomic) NSString *cubeUrl;
@property (nonatomic) double openTime;
@property (nonatomic) double createEndTime;
@property (nonatomic) double updateDataStartTime;
@property (nonatomic) long long updateDataSize;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) long long preloadType;
@property (nonatomic) BOOL isUsed;
@property (copy, nonatomic) NSDictionary *timingInfo;
@property (copy, nonatomic) NSDictionary *updateTimingInfo;
@property (nonatomic) double instanceCreateCost;
@property (copy, nonatomic) NSNumber *totalFcp;
@property (copy, nonatomic) NSNumber *firstUpdateDataTime;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *bid;
@property (weak, nonatomic) id<AWEPOICubeMonitorDataSource> dataSource;
@property (copy, nonatomic) NSSet *teaWhiteList;
@property (nonatomic) double startSchemaCost;
@property (nonatomic) double updateSchemaCost;

- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg0;
- (void)setPreloadType:(long long)arg0;
- (void)setBid:(id)arg0;
- (id)bid;
- (double)openTime;
- (void)setOpenTime:(double)arg0;
- (id)threadStrategy;
- (void)setCubeModel:(id)arg0;
- (id)commonCategoryProps;
- (void)setInstanceCreateCost:(double)arg0;
- (void)trackEvent:(id)arg0 metric:(id)arg1 category:(id)arg2;
- (void)setCubeUrl:(id)arg0;
- (void)setUpdateDataStartTime:(double)arg0;
- (id)firstUpdateDataTime;
- (void)setFirstUpdateDataTime:(id)arg0;
- (double)updateDataStartTime;
- (id)totalFcpFromSetupInfo:(id)arg0;
- (void)setTotalFcp:(id)arg0;
- (void)setUpdateTimingInfo:(id)arg0;
- (double)instanceCreateCost;
- (double)getDurationFromLifeCycleDictionary:(id)arg0 startTime:(id)arg1 endTime:(id)arg2;
- (id)totalFcp;
- (id)fetchTotalFmp;
- (id)fetchTotalActualFmp;
- (id)fetchLastDrawEnd;
- (id)updateTimingInfo;
- (double)startSchemaCost;
- (double)updateSchemaCost;
- (id)cubeModel;
- (id)cubeUrl;
- (id)fetchSetupDrawEnd;
- (id)teaWhiteList;
- (void)startCreateInstance:(id)arg0 openTime:(double)arg1;
- (void)didCreateInstance:(long long)arg0 errorMsg:(id)arg1;
- (void)didFetchResource:(id)arg0 error:(id)arg1;
- (void)didLoadURL:(id)arg0 error:(id)arg1;
- (void)destroyWithLoadStatus:(id)arg0;
- (void)startUpdateCubeMode:(id)arg0;
- (void)didUpdateDataWithDataSize:(long long)arg0;
- (void)didUpdateGlobalProps:(id)arg0 duration:(double)arg1 fullUrl:(id)arg2;
- (void)recordSetupTimingInfo:(id)arg0;
- (void)recordUpdateTimingInfo:(id)arg0;
- (void)trackTimeLine:(id)arg0 loadStatus:(id)arg1;
- (void)setTeaWhiteList:(id)arg0;
- (void)setStartSchemaCost:(double)arg0;
- (void)setUpdateSchemaCost:(double)arg0;
- (double)createEndTime;
- (void)setCreateEndTime:(double)arg0;
- (long long)updateDataSize;
- (void)setUpdateDataSize:(long long)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (void)setIsUsed:(BOOL)arg0;
- (BOOL)isUsed;
- (id)timingInfo;
- (long long)preloadType;
- (void)setTimingInfo:(id)arg0;

@end