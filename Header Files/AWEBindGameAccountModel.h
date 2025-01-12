//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBindGameAccountModel : AWEBaseApiModel {
    long long _platformId;
    NSString *_platformName;
    NSString *_originalUserName;
    NSString *_desensitiveUserName;
}

@property (nonatomic) long long platformId;
@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *originalUserName;
@property (copy, nonatomic) NSString *desensitiveUserName;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPlatformId:(long long)arg0;
- (id)desensitiveUserName;
- (id)originalUserName;
- (void)setOriginalUserName:(id)arg0;
- (void)setDesensitiveUserName:(id)arg0;
- (void).cxx_destruct;
- (id)platformName;
- (long long)platformId;
- (void)setPlatformName:(id)arg0;

@end
