//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayMemberFaceVerifyInfoModel : JSONModel {
    BOOL _needLiveDetection;
    NSString *_verifyType;
    NSString *_faceContent;
    NSString *_agreementUrl;
    NSString *_agreementDesc;
    NSString *_nameMask;
    NSString *_uid;
    NSString *_smchId;
}

@property (copy, nonatomic) NSString *verifyType;
@property (copy, nonatomic) NSString *faceContent;
@property (copy, nonatomic) NSString *agreementUrl;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *smchId;
@property (nonatomic) BOOL needLiveDetection;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)nameMask;
- (void)setNameMask:(id)arg0;
- (BOOL)needLiveDetection;
- (id)agreementUrl;
- (void)setAgreementUrl:(id)arg0;
- (id)smchId;
- (void)setSmchId:(id)arg0;
- (id)agreementDesc;
- (void)setAgreementDesc:(id)arg0;
- (id)faceContent;
- (void)setFaceContent:(id)arg0;
- (id)getFaceVerifyInfoModel;
- (void)setNeedLiveDetection:(BOOL)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (void).cxx_destruct;
- (id)verifyType;
- (void)setVerifyType:(id)arg0;

@end