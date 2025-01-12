//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIServiceEntryModel : AWEBaseApiModel {
    unsigned long long _schemaType;
    NSString *_url;
    unsigned long long _platformSource;
    NSString *_platformName;
}

@property (nonatomic) unsigned long long schemaType;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long platformSource;
@property (copy, nonatomic) NSString *platformName;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchemaType:(unsigned long long)arg0;
- (unsigned long long)platformSource;
- (void)setPlatformSource:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)platformName;
- (id)url;
- (unsigned long long)schemaType;
- (void)setPlatformName:(id)arg0;

@end
