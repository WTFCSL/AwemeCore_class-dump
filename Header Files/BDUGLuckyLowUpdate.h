//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGLuckyLowUpdate : BDUGLuckyJSONModel {
    long long _minSupportVersion;
    NSString *_title;
    NSString *_content;
    NSString *_btnText;
}

@property (nonatomic) long long minSupportVersion;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *btnText;

+ (id)modelCustomPropertyMapper;

- (id)btnText;
- (void)setBtnText:(id)arg0;
- (long long)minSupportVersion;
- (void)setMinSupportVersion:(long long)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;

@end
