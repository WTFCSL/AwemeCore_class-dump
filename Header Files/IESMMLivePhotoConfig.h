//
//     Generated by private class-dump
//

@class NSString;

@interface IESMMLivePhotoConfig : NSObject {
    BOOL _clearCacheAfterStop;
    double _cacheTime;
    NSString *_livephotoCachePath;
    double _recordRate;
}

@property (nonatomic) double cacheTime;
@property (nonatomic) BOOL clearCacheAfterStop;
@property (copy, nonatomic) NSString *livephotoCachePath;
@property (nonatomic) double recordRate;

- (double)cacheTime;
- (void)setCacheTime:(double)arg0;
- (BOOL)clearCacheAfterStop;
- (void)setClearCacheAfterStop:(BOOL)arg0;
- (id)livephotoCachePath;
- (void)setLivephotoCachePath:(id)arg0;
- (double)recordRate;
- (void)setRecordRate:(double)arg0;
- (id)init;
- (void).cxx_destruct;

@end
