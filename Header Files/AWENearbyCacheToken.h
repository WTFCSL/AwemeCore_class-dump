//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyCacheToken : MTLModel <MTLJSONSerializing> {
    long long _hasPermissionInCache;
    NSString *_cityCodeInCache;
    NSString *_userIdInCache;
    NSString *_appVersion;
    long long _cacheStroeTimeStamp;
    long long _timeoutInterval;
}

@property (nonatomic) long long hasPermissionInCache;
@property (copy, nonatomic) NSString *cityCodeInCache;
@property (copy, nonatomic) NSString *userIdInCache;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long cacheStroeTimeStamp;
@property (nonatomic) long long timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithLocationPermission:(BOOL)arg0 cityCode:(id)arg1 userID:(id)arg2 storeTs:(long long)arg3;
- (long long)hasPermissionInCache;
- (void)setHasPermissionInCache:(long long)arg0;
- (id)cityCodeInCache;
- (void)setCityCodeInCache:(id)arg0;
- (id)userIdInCache;
- (void)setUserIdInCache:(id)arg0;
- (long long)cacheStroeTimeStamp;
- (void)setCacheStroeTimeStamp:(long long)arg0;
- (void)setTimeoutInterval:(long long)arg0;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)appVersion;
- (long long)timeoutInterval;

@end