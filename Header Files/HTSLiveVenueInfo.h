//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveVenueInfo : IESLivePBBaseMessage

@property (nonatomic) int stage;
@property (nonatomic) long long targetTime;
@property (nonatomic) long long currentTime;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long pollingInterval;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long distributeTime;

+ (id)descriptor;

@end
