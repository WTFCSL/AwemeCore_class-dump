//
//     Generated by private class-dump
//

@class NSString, DiamondBuyResult_IapFailExtraData;

@interface DiamondBuyResult_ResponseExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL iosShowRecharge;
@property (copy, nonatomic) NSString *bdturingVerify;
@property (nonatomic) BOOL iapFail;
@property (retain, nonatomic) DiamondBuyResult_IapFailExtraData *iapFailExtraData;
@property (nonatomic) BOOL hasIapFailExtraData;
@property (copy, nonatomic) NSString *twoFactoryAuthInfo;

+ (id)descriptor;

@end
