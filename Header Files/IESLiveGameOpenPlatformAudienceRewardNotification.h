//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameOpenPlatformAudienceRewardNotification : IESLiveGameOpenPlatformNotification {
    NSString *_timeText;
    id /* block */ _routeAction;
}

@property (readonly, nonatomic) long long rewardAmount;
@property (readonly, copy, nonatomic) NSString *rewardTitle;
@property (readonly, copy, nonatomic) NSString *timeText;
@property (copy, nonatomic) id /* block */ routeAction;

+ (Class)messageClass;
+ (id)name;

- (id)attachingDIContext;
- (long long)rewardAmount;
- (id)rewardTitle;
- (id /* block */)routeAction;
- (void)setRouteAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)name;
- (id)timeText;

@end
