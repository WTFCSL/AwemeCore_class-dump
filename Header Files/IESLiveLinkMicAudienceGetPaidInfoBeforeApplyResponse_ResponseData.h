//
//     Generated by private class-dump
//

@class NSString, IESLivePaidLinkmicDiscountInfo, NSMutableArray, HTSLiveApplicationReasonContent;

@interface IESLiveLinkMicAudienceGetPaidInfoBeforeApplyResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long numOfLink;
@property (nonatomic) float avgGrade;
@property (nonatomic) long long paidCount;
@property (nonatomic) long long limitedTime;
@property (retain, nonatomic) NSMutableArray *paidTagsArray;
@property (readonly, nonatomic) unsigned long long paidTagsArray_Count;
@property (copy, nonatomic) NSString *paidDesc;
@property (nonatomic) BOOL useMemberBenefits;
@property (nonatomic) long long memberDiscountAmount;
@property (nonatomic) BOOL applicationReasonRequired;
@property (retain, nonatomic) HTSLiveApplicationReasonContent *applicationReasonContent;
@property (nonatomic) BOOL hasApplicationReasonContent;
@property (retain, nonatomic) IESLivePaidLinkmicDiscountInfo *discountInfo;
@property (nonatomic) BOOL hasDiscountInfo;

+ (id)descriptor;

@end
