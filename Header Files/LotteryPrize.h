//
//     Generated by private class-dump
//

@class NSString;

@interface LotteryPrize : IESLivePBBaseMessage

@property (nonatomic) long long prizeId;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *prizeDescription;

+ (id)descriptor;

@end
