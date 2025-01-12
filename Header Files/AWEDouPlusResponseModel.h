//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEDouPlusResponseModel : AWEBaseApiModel {
    BOOL _pass;
    BOOL _isAdExist;
    NSString *_host;
    NSString *_adID;
    NSString *_douPlusLinkUrl;
    NSString *_douPlusLiteLinkUrl;
    NSDictionary *_douPlusLogExtraDict;
}

@property (nonatomic) BOOL pass;
@property (nonatomic) BOOL isAdExist;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *douPlusLinkUrl;
@property (copy, nonatomic) NSString *douPlusLiteLinkUrl;
@property (copy, nonatomic) NSDictionary *douPlusLogExtraDict;

+ (id)JSONKeyPathsByPropertyKey;

- (id)adID;
- (void)setAdID:(id)arg0;
- (id)douPlusLiteLinkUrl;
- (id)douPlusLinkUrl;
- (id)douPlusLogExtraDict;
- (BOOL)isAdExist;
- (void)setIsAdExist:(BOOL)arg0;
- (void)setDouPlusLinkUrl:(id)arg0;
- (void)setDouPlusLiteLinkUrl:(id)arg0;
- (void)setDouPlusLogExtraDict:(id)arg0;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;
- (BOOL)pass;
- (void)setPass:(BOOL)arg0;

@end
