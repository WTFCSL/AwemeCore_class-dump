//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDCFeedPlaceholderPreloadPayload : NSObject {
    BOOL _cacheDistinguishUser;
    NSString *_businessID;
    long long _cacheCount;
}

@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) long long cacheCount;
@property (nonatomic) BOOL cacheDistinguishUser;

- (void)setCacheCount:(long long)arg0;
- (void)setCacheDistinguishUser:(BOOL)arg0;
- (long long)cacheCount;
- (BOOL)cacheDistinguishUser;
- (id)init;
- (void).cxx_destruct;
- (id)businessID;
- (void)setBusinessID:(id)arg0;

@end
