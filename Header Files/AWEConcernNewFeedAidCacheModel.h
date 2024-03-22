//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEConcernNewFeedAidCacheModel : NSObject <NSCoding> {
    double _expireTime;
    NSMutableArray *_cachedArray;
}

@property (nonatomic) double expireTime;
@property (retain, nonatomic) NSMutableArray *cachedArray;

- (void)resetWithArray:(id)arg0 expireTime:(double)arg1;
- (BOOL)containsAwemeID:(id)arg0;
- (void)removeAwemeID:(id)arg0;
- (BOOL)isValidWithLimitCount:(long long)arg0;
- (id)formattedAwemeIDs;
- (id)cachedArray;
- (void)setCachedArray:(id)arg0;
- (BOOL)isExpired;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)clear;
- (void)encodeWithCoder:(id)arg0;
- (double)expireTime;
- (void)setExpireTime:(double)arg0;

@end