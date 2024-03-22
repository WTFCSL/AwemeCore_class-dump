//
//     Generated by private class-dump
//

@class NSString;

@interface BDPClientAIDetectionCacheObject : NSObject <BDPClientAIDetectionCacheProtocol> {
    id _detectionObject;
    NSString *_detectionId;
    double _detectionInvalidTime;
    double _pathInvalidTime;
    long long _detectionType;
}

@property (retain, nonatomic) id detectionObject;
@property (copy, nonatomic) NSString *detectionId;
@property (nonatomic) double detectionInvalidTime;
@property (nonatomic) double pathInvalidTime;
@property (nonatomic) long long detectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCacheObject:(id)arg0 cacheId:(id)arg1 cacheInvalidTime:(double)arg2 pathInvalidTime:(double)arg3 cacheDetectionType:(long long)arg4;
- (double)cacheInvalidTime;
- (id)detectionObject;
- (double)pathInvalidTime;
- (long long)cacheDetectionType;
- (void)setDetectionObject:(id)arg0;
- (id)detectionId;
- (void)setDetectionId:(id)arg0;
- (double)detectionInvalidTime;
- (void)setDetectionInvalidTime:(double)arg0;
- (void)setPathInvalidTime:(double)arg0;
- (void).cxx_destruct;
- (id)cacheId;
- (long long)detectionType;
- (void)setDetectionType:(long long)arg0;
- (id)cacheObject;

@end
