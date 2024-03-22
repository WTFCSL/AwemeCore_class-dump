//
//     Generated by private class-dump
//

@class NSNumber, AWEProfileUrgeControlModel;

@interface AWEUserFansPushModel : AWEBaseApiModel {
    long long _blockUrgeSetting;
    long long _urgeUnreadCount;
    long long _userUrged;
    NSNumber *_latestAwemeTime;
    NSNumber *_latestLiveTime;
    AWEProfileUrgeControlModel *_urgeControlMap;
}

@property (nonatomic) long long blockUrgeSetting;
@property (nonatomic) long long urgeUnreadCount;
@property (nonatomic) long long userUrged;
@property (retain, nonatomic) NSNumber *latestAwemeTime;
@property (retain, nonatomic) NSNumber *latestLiveTime;
@property (retain, nonatomic) AWEProfileUrgeControlModel *urgeControlMap;

+ (id)urgeControlMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)latestLiveTime;
- (long long)blockUrgeSetting;
- (void)setBlockUrgeSetting:(long long)arg0;
- (long long)urgeUnreadCount;
- (long long)userUrged;
- (id)latestAwemeTime;
- (void)setLatestLiveTime:(id)arg0;
- (void)setUrgeUnreadCount:(long long)arg0;
- (void)setUserUrged:(long long)arg0;
- (void)setLatestAwemeTime:(id)arg0;
- (id)urgeControlMap;
- (void)setUrgeControlMap:(id)arg0;
- (void).cxx_destruct;

@end