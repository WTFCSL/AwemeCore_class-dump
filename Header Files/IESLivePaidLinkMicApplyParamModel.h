//
//     Generated by private class-dump
//

@class NSNumber, NSString, IESLivePaidLinkMicApplyPaidLinkmicDiscountInfoModel;

@interface IESLivePaidLinkMicApplyParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *mode;
@property (retain, nonatomic) NSNumber *position;
@property (nonatomic) BOOL afterFollow;
@property (copy, nonatomic) NSString *sourcePage;
@property (retain, nonatomic) NSNumber *applySource;
@property (copy, nonatomic) NSString *clickSource;
@property (retain, nonatomic) NSNumber *paidCount;
@property (retain, nonatomic) NSNumber *limitTime;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) BOOL anonymous;
@property (retain, nonatomic) NSNumber *currentMode;
@property (nonatomic) BOOL useMemberBenefits;
@property (retain, nonatomic) NSNumber *memberDiscountAmount;
@property (retain, nonatomic) IESLivePaidLinkMicApplyPaidLinkmicDiscountInfoModel *paidLinkmicDiscountInfo;

+ (id)modelCustomPropertyMapper;

@end
