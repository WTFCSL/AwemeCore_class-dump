//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface HTSLiveGiftVoteMessage_Result : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long count;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long giftId;

+ (id)descriptor;

@end