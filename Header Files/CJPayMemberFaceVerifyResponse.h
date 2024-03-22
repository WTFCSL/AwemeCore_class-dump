//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayMemberFaceVerifyResponse : CJPayBaseResponse {
    NSString *_faceRecognitionType;
    NSString *_faceContent;
    NSString *_nameMask;
    NSString *_token;
}

@property (copy, nonatomic) NSString *faceRecognitionType;
@property (copy, nonatomic) NSString *faceContent;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *token;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)nameMask;
- (void)setNameMask:(id)arg0;
- (unsigned long long)obtainFaceVerificationResult;
- (id)faceContent;
- (void)setFaceContent:(id)arg0;
- (id)faceRecognitionType;
- (void)setFaceRecognitionType:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;

@end
