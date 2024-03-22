//
//     Generated by private class-dump
//

@class NSString;

@interface BDPNativeGameBlankDetectionResultModel : NSObject {
    BOOL _isBlank;
    BOOL _isAbnormalRender;
    long long _snapshotDuration;
    long long _blankDetectionDuration;
    long long _totalDuration;
    NSString *_partialStoreID;
    long long _abnormalRenderDetectionDuration;
}

@property (nonatomic) BOOL isBlank;
@property (nonatomic) BOOL isAbnormalRender;
@property (nonatomic) long long snapshotDuration;
@property (nonatomic) long long blankDetectionDuration;
@property (nonatomic) long long totalDuration;
@property (copy, nonatomic) NSString *partialStoreID;
@property (nonatomic) long long abnormalRenderDetectionDuration;

- (BOOL)isAbnormalRender;
- (void)setIsAbnormalRender:(BOOL)arg0;
- (long long)snapshotDuration;
- (void)setSnapshotDuration:(long long)arg0;
- (long long)blankDetectionDuration;
- (void)setBlankDetectionDuration:(long long)arg0;
- (long long)abnormalRenderDetectionDuration;
- (void)setAbnormalRenderDetectionDuration:(long long)arg0;
- (id)partialStoreID;
- (void)setPartialStoreID:(id)arg0;
- (long long)totalDuration;
- (void).cxx_destruct;
- (void)setIsBlank:(BOOL)arg0;
- (BOOL)isBlank;
- (void)setTotalDuration:(long long)arg0;

@end