//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMInterestGroupEnterGroupVerificationModel : NSObject {
    long long _verificationType;
    NSString *_verificationQuestion;
}

@property (nonatomic) long long verificationType;
@property (copy, nonatomic) NSString *verificationQuestion;

+ (BOOL)isValidVerificationType:(long long)arg0;
+ (id)verificationQuestionFromExt:(id)arg0;

- (id)verificationQuestion;
- (void)setVerificationQuestion:(id)arg0;
- (id)initWithApplyExt:(id)arg0 needAudit:(BOOL)arg1;
- (void).cxx_destruct;
- (long long)verificationType;
- (void)setVerificationType:(long long)arg0;

@end
