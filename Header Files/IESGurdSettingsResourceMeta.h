//
//     Generated by private class-dump
//

@class NSDictionary, IESGurdSettingsResourceBaseConfig, NSArray;

@interface IESGurdSettingsResourceMeta : NSObject {
    IESGurdSettingsResourceBaseConfig *_appConfig;
    NSDictionary *_accessKeyMetaDictionary;
}

@property (copy, nonatomic) NSDictionary *accessKeyMetaDictionary;
@property (retain, nonatomic) IESGurdSettingsResourceBaseConfig *appConfig;
@property (readonly, copy, nonatomic) NSArray *allAccessKeys;

+ (id)metaWithDictionary:(id)arg0;

- (void)setAppConfig:(id)arg0;
- (id)allAccessKeys;
- (void)setAccessKeyMetaDictionary:(id)arg0;
- (id)accessKeyMetaDictionary;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg0;
- (id)appConfig;

@end
