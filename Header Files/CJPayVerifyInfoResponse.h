//
//     Generated by private class-dump
//

@class NSString, CJPayFaceVerifyInfo;

@interface CJPayVerifyInfoResponse : CJPayBaseResponse {
    NSString *_verifyType;
    NSString *_jumpUrl;
    CJPayFaceVerifyInfo *_faceVerifyInfo;
}

@property (copy, nonatomic) NSString *verifyType;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)jumpUrl;
- (void)setJumpUrl:(id)arg0;
- (id)faceVerifyInfo;
- (void)setFaceVerifyInfo:(id)arg0;
- (void).cxx_destruct;
- (id)verifyType;
- (void)setVerifyType:(id)arg0;

@end
