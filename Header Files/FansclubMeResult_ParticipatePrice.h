//
//     Generated by private class-dump
//

@class NSString;

@interface FansclubMeResult_ParticipatePrice : IESLivePBBaseMessage

@property (nonatomic) long long originalPrice;
@property (nonatomic) BOOL discount;
@property (nonatomic) long long discountPrice;
@property (copy, nonatomic) NSString *discountStartTime;
@property (copy, nonatomic) NSString *discountEndTime;
@property (copy, nonatomic) NSString *discountText;
@property (copy, nonatomic) NSString *participateText;

+ (id)descriptor;

@end
