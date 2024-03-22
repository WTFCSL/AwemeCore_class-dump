//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface TTAGetSMSCodeModel : TTADataRespModel {
    NSNumber *_retry_time;
    NSString *_mobile;
    NSString *_captcha;
    long long _error_code;
    NSString *_error_description;
    NSString *_dialog_tips;
    NSString *_sec_info;
}

@property (retain, nonatomic) NSNumber *retry_time;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *captcha;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *error_description;
@property (copy, nonatomic) NSString *dialog_tips;
@property (copy, nonatomic) NSString *sec_info;

+ (id)tta_modelCustomPropertyMapper;

- (id)sec_info;
- (void)setSec_info:(id)arg0;
- (id)captcha;
- (void)setCaptcha:(id)arg0;
- (id)error_description;
- (void)setError_description:(id)arg0;
- (id)retry_time;
- (void)setRetry_time:(id)arg0;
- (id)dialog_tips;
- (void)setDialog_tips:(id)arg0;
- (void).cxx_destruct;
- (long long)error_code;
- (void)setError_code:(long long)arg0;
- (id)mobile;
- (void)setMobile:(id)arg0;

@end
