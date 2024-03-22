//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoUploadSpeedModel : MTLModel <MTLJSONSerializing> {
    BOOL _enableSpeed;
    BOOL _enableRoute;
    long long _routeMode;
    long long _routeWeight;
    long long _speedThreshold;
    long long _singleHostTotalTimeout;
    long long _fileSize;
    long long _retryCount;
    long long _cacheExpired;
}

@property (nonatomic) BOOL enableSpeed;
@property (nonatomic) BOOL enableRoute;
@property (nonatomic) long long routeMode;
@property (nonatomic) long long routeWeight;
@property (nonatomic) long long speedThreshold;
@property (nonatomic) long long singleHostTotalTimeout;
@property (nonatomic) long long fileSize;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long cacheExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableRoute;
- (void)setEnableRoute:(BOOL)arg0;
- (BOOL)enableSpeed;
- (long long)cacheExpired;
- (long long)routeWeight;
- (void)setEnableSpeed:(BOOL)arg0;
- (void)setRouteWeight:(long long)arg0;
- (long long)singleHostTotalTimeout;
- (void)setSingleHostTotalTimeout:(long long)arg0;
- (void)setCacheExpired:(long long)arg0;
- (void)setRetryCount:(long long)arg0;
- (long long)retryCount;
- (long long)fileSize;
- (void)setFileSize:(long long)arg0;
- (long long)speedThreshold;
- (void)setSpeedThreshold:(long long)arg0;
- (void)setRouteMode:(long long)arg0;
- (long long)routeMode;

@end
