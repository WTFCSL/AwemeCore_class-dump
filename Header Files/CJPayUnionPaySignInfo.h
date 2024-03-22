//
//     Generated by private class-dump
//

@class NSString, CJPayMemberFaceVerifyInfoModel;

@interface CJPayUnionPaySignInfo : JSONModel {
    BOOL _isNeedVerifyLive;
    BOOL _isNeedAuthUnionPay;
    NSString *_additionalVerifyType;
    NSString *_actionPageType;
    NSString *_identityVerifyOrderNo;
    CJPayMemberFaceVerifyInfoModel *_faceVerifyInfoModel;
    NSString *_unionPaySignStatus;
    NSString *_displayIcon;
    NSString *_displayDesc;
    NSString *_voucherLabel;
}

@property (copy, nonatomic) NSString *additionalVerifyType;
@property (copy, nonatomic) NSString *actionPageType;
@property (copy, nonatomic) NSString *identityVerifyOrderNo;
@property (retain, nonatomic) CJPayMemberFaceVerifyInfoModel *faceVerifyInfoModel;
@property (copy, nonatomic) NSString *unionPaySignStatus;
@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *voucherLabel;
@property (nonatomic) BOOL isNeedVerifyLive;
@property (nonatomic) BOOL isNeedAuthUnionPay;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)displayDesc;
- (void)setDisplayDesc:(id)arg0;
- (id)identityVerifyOrderNo;
- (id)additionalVerifyType;
- (id)faceVerifyInfoModel;
- (void)setAdditionalVerifyType:(id)arg0;
- (void)setFaceVerifyInfoModel:(id)arg0;
- (id)voucherLabel;
- (void)setVoucherLabel:(id)arg0;
- (BOOL)isNeedAuthUnionPay;
- (id)actionPageType;
- (id)unionPaySignStatus;
- (BOOL)isNeedVerifyLive;
- (void)setActionPageType:(id)arg0;
- (void)setIdentityVerifyOrderNo:(id)arg0;
- (void)setUnionPaySignStatus:(id)arg0;
- (void)setIsNeedVerifyLive:(BOOL)arg0;
- (void)setIsNeedAuthUnionPay:(BOOL)arg0;
- (void).cxx_destruct;
- (id)displayIcon;
- (void)setDisplayIcon:(id)arg0;

@end