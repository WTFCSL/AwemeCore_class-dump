//
//     Generated by private class-dump
//

@class NSString;

@interface TTABindEmaileModel : TTADataRespModel {
    NSString *_captcha;
    NSString *_error_description;
    long long _error_code;
    NSString *_email;
}

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *email;

- (id)captcha;
- (void)setCaptcha:(id)arg0;
- (id)error_description;
- (void)setError_description:(id)arg0;
- (void).cxx_destruct;
- (id)email;
- (void)setEmail:(id)arg0;
- (long long)error_code;
- (void)setError_code:(long long)arg0;

@end
