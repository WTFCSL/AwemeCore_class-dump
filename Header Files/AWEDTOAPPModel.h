//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEDTOAPPModel : MTLModel <MTLJSONSerializing> {
    NSString *_appId;
    NSString *_appUrl;
    NSString *_appTitle;
    NSString *_reserved_kw_description;
    NSString *_cardImage;
    NSString *_cardCode;
    NSDictionary *_extra;
    NSString *_aliasId;
    NSString *_videoSource;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appUrl;
@property (copy, nonatomic) NSString *appTitle;
@property (copy, nonatomic) NSString *reserved_kw_description;
@property (copy, nonatomic) NSString *cardImage;
@property (copy, nonatomic) NSString *cardCode;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *aliasId;
@property (copy, nonatomic) NSString *videoSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)appUrl;
- (void)setAppUrl:(id)arg0;
- (id)reserved_kw_description;
- (void)setReserved_kw_description:(id)arg0;
- (id)cardCode;
- (void)setCardCode:(id)arg0;
- (id)aliasId;
- (void)setAliasId:(id)arg0;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)appId;
- (id)cardImage;
- (void)setCardImage:(id)arg0;
- (id)videoSource;
- (void)setVideoSource:(id)arg0;
- (id)appTitle;
- (void)setAppTitle:(id)arg0;

@end
