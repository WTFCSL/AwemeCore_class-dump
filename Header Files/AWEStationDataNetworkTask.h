//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStationDataNetworkTask : NSObject {
    BOOL _isOnAir;
    BOOL _isCancel;
    long long _count;
    long long _retryTime;
    NSString *_ironManId;
}

@property (nonatomic) long long count;
@property (nonatomic) long long retryTime;
@property (copy, nonatomic) NSString *ironManId;
@property (nonatomic) BOOL isOnAir;
@property (nonatomic) BOOL isCancel;

- (void)setIronManId:(id)arg0;
- (BOOL)isOnAir;
- (void)setIsOnAir:(BOOL)arg0;
- (id)ironManId;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg0;
- (long long)retryTime;
- (void)setRetryTime:(long long)arg0;

@end
