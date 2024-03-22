//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBindSettingModel : AWEBaseApiModel {
    BOOL _forbidBind;
    unsigned long long _platform;
    NSString *_errorMsg;
}

@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL forbidBind;

+ (id)platformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (BOOL)forbidBind;
- (void)setForbidBind:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setPlatform:(unsigned long long)arg0;
- (unsigned long long)platform;

@end