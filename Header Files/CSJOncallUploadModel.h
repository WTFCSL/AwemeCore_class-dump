//
//     Generated by private class-dump
//

@class NSString;

@interface CSJOncallUploadModel : CSJBasicModel {
    BOOL _enable;
    NSString *_upload_api;
    NSString *_alert_text;
}

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *upload_api;
@property (copy, nonatomic) NSString *alert_text;

- (id)alert_text;
- (id)upload_api;
- (void)setUpload_api:(id)arg0;
- (void)setAlert_text:(id)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)setEnable:(BOOL)arg0;

@end