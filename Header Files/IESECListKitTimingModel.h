//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitTimingModel : NSObject {
    NSString *_bizID;
    double _openTime;
    double _loadBundleStartTime;
    double _loadBundleEndTime;
    double _networkStartTime;
    double _networkEndTime;
    double _listLoadStartTime;
    double _listFirstLoadFinishTime;
    unsigned long long _currentIdx;
}

@property (copy, nonatomic) NSString *bizID;
@property (nonatomic) double openTime;
@property (nonatomic) double loadBundleStartTime;
@property (nonatomic) double loadBundleEndTime;
@property (nonatomic) double networkStartTime;
@property (nonatomic) double networkEndTime;
@property (nonatomic) double listLoadStartTime;
@property (nonatomic) double listFirstLoadFinishTime;
@property (nonatomic) unsigned long long currentIdx;

- (double)openTime;
- (void)setBizID:(id)arg0;
- (void)setOpenTime:(double)arg0;
- (void)setListLoadStartTime:(double)arg0;
- (void)setListFirstLoadFinishTime:(double)arg0;
- (double)loadBundleStartTime;
- (void)setLoadBundleStartTime:(double)arg0;
- (double)loadBundleEndTime;
- (void)setLoadBundleEndTime:(double)arg0;
- (double)networkStartTime;
- (void)setNetworkStartTime:(double)arg0;
- (double)networkEndTime;
- (void)setNetworkEndTime:(double)arg0;
- (double)listLoadStartTime;
- (double)listFirstLoadFinishTime;
- (unsigned long long)currentIdx;
- (void)setCurrentIdx:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)bizID;

@end
