//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEMusicCardUrlModel : AWEBaseApiModel {
    NSString *_uri;
    NSArray *_urls;
    NSString *_templatePrefix;
}

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) NSString *templatePrefix;

+ (id)JSONKeyPathsByPropertyKey;

- (id)templatePrefix;
- (void)setTemplatePrefix:(id)arg0;
- (id)urls;
- (void).cxx_destruct;
- (void)setUrls:(id)arg0;
- (void)setUri:(id)arg0;
- (id)uri;

@end
