//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface IESLiveStickerFontConfigNew : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    NSNumber *_fontID;
    NSString *_downloadUrl;
    NSNumber *_status;
    NSString *_fontName;
}

@property (retain, nonatomic) NSNumber *fontID;
@property (copy, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *fontName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setFontID:(id)arg0;
- (id)fontID;
- (void).cxx_destruct;
- (id)status;
- (id)fontName;
- (void)setFontName:(id)arg0;
- (void)setStatus:(id)arg0;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg0;

@end
