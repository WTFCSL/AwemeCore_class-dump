//
//     Generated by private class-dump
//

@interface AWETeenIMInteractNotificationCountModel : AWEBaseApiModel {
    long long _group;
    long long _count;
    long long _latestTime;
    long long _interactiveShowType;
    long long _showType;
}

@property (nonatomic) long long group;
@property (nonatomic) long long count;
@property (nonatomic) long long latestTime;
@property (nonatomic) long long interactiveShowType;
@property (nonatomic) long long showType;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setLatestTime:(long long)arg0;
- (long long)latestTime;
- (long long)interactiveShowType;
- (void)setInteractiveShowType:(long long)arg0;
- (void)setCount:(long long)arg0;
- (long long)group;
- (long long)count;
- (void)setGroup:(long long)arg0;
- (long long)showType;
- (void)setShowType:(long long)arg0;

@end
