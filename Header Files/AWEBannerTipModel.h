//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBannerTipModel : AWEBaseApiModel {
    BOOL _hasClosed;
    long long _bannerType;
    NSString *_bannerText;
    long long _linkType;
    NSString *_linkURL;
    NSString *_linkText;
}

@property (nonatomic) long long bannerType;
@property (copy, nonatomic) NSString *bannerText;
@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) BOOL hasClosed;

+ (id)bannerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setLinkType:(long long)arg0;
- (long long)linkType;
- (void).cxx_destruct;
- (void)setHasClosed:(BOOL)arg0;
- (BOOL)hasClosed;
- (id)bannerText;
- (long long)bannerType;
- (void)setBannerType:(long long)arg0;
- (id)linkText;
- (id)linkURL;
- (void)setLinkText:(id)arg0;
- (void)setLinkURL:(id)arg0;
- (void)setBannerText:(id)arg0;

@end
