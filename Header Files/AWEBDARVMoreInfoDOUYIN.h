//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBDARVMoreInfoDOUYIN : NSObject {
    BOOL _nextAdExist;
    NSString *_token;
    long long _glodCount;
    NSString *_goldCountUnit;
    NSString *_incentiveAdFrom;
    NSString *_reIncentiveAdFrom;
}

@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL nextAdExist;
@property (nonatomic) long long glodCount;
@property (copy, nonatomic) NSString *goldCountUnit;
@property (copy, nonatomic) NSString *incentiveAdFrom;
@property (copy, nonatomic) NSString *reIncentiveAdFrom;

- (id)initWithDic:(id)arg0;
- (BOOL)nextAdExist;
- (id)reIncentiveAdFrom;
- (id)incentiveAdFrom;
- (long long)glodCount;
- (id)goldCountUnit;
- (void)setNextAdExist:(BOOL)arg0;
- (void)setGlodCount:(long long)arg0;
- (void)setGoldCountUnit:(id)arg0;
- (void)setIncentiveAdFrom:(id)arg0;
- (void)setReIncentiveAdFrom:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;

@end
