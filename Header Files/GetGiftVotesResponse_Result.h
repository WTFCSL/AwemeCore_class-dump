//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface GetGiftVotesResponse_Result : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long count;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *name;

+ (id)descriptor;

@end
