//
//     Generated by private class-dump
//

@class NSString;

@interface PaidLiveShareTicketBaseData_PriceInfo : IESLivePBBaseMessage

@property (nonatomic) int payType;
@property (nonatomic) long long price;
@property (nonatomic) int rightDuration;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long pos;
@property (copy, nonatomic) NSString *fullPrice;

+ (id)descriptor;

@end
