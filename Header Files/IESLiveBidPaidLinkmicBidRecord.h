//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface IESLiveBidPaidLinkmicBidRecord : IESLivePBBaseMessage

@property (nonatomic) long long bidPrice;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveImage *userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) BOOL isStartPrice;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end
