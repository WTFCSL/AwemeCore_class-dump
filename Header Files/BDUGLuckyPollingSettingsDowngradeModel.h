//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDUGLuckyPollingSettingsDowngradeModel : BDUGLuckyJSONModel {
    long long _f2Downgrade;
    long long _feedDowngrade;
    long long _activityDowngrade;
    NSDictionary *_extra;
}

@property (nonatomic) long long f2Downgrade;
@property (nonatomic) long long feedDowngrade;
@property (nonatomic) long long activityDowngrade;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)keyMapper;

- (void)setExtra:(id)arg0;
- (long long)f2Downgrade;
- (void)setF2Downgrade:(long long)arg0;
- (long long)feedDowngrade;
- (void)setFeedDowngrade:(long long)arg0;
- (long long)activityDowngrade;
- (void)setActivityDowngrade:(long long)arg0;
- (void).cxx_destruct;
- (id)extra;

@end
