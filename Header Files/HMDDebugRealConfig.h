//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray;

@interface HMDDebugRealConfig : NSObject {
    BOOL _isNeedWifi;
    double _fetchStartTime;
    double _fetchEndTime;
    NSArray *_uploadTypeArray;
    NSMutableArray *_uploadFileTypeArray;
    unsigned long long _limitCnt;
    NSArray *_andConditions;
    NSArray *_orConditions;
}

@property (nonatomic) double fetchStartTime;
@property (nonatomic) double fetchEndTime;
@property (retain, nonatomic) NSArray *uploadTypeArray;
@property (retain, nonatomic) NSMutableArray *uploadFileTypeArray;
@property (nonatomic) BOOL isNeedWifi;
@property (nonatomic) unsigned long long limitCnt;
@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) NSArray *orConditions;

- (BOOL)isNeedWifi;
- (double)fetchEndTime;
- (id)andConditions;
- (id)orConditions;
- (void)setAndConditions:(id)arg0;
- (unsigned long long)limitCnt;
- (void)setOrConditions:(id)arg0;
- (BOOL)checkIfAllowedDebugRealUploadWithType:(id)arg0;
- (void)defaultInitialize;
- (void)setupWithParams:(id)arg0;
- (void)setFetchEndTime:(double)arg0;
- (void)setUploadTypeArray:(id)arg0;
- (void)setIsNeedWifi:(BOOL)arg0;
- (void)setLimitCnt:(unsigned long long)arg0;
- (id)uploadTypeArray;
- (BOOL)checkIfNetworkAllowedDebugRealUpload;
- (id)uploadFileTypeArray;
- (void)setUploadFileTypeArray:(id)arg0;
- (double)fetchStartTime;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg0;
- (void)setFetchStartTime:(double)arg0;

@end