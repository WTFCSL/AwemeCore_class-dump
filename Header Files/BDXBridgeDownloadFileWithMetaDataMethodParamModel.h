//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeDownloadFileWithMetaDataMethodParamModel : BDXBridgeModel {
    NSString *_url;
    NSString *_extension;
    NSNumber *_needCommonParams;
    NSString *_saveToAlbum;
    NSString *_customAttr;
    NSDictionary *_header;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *extension;
@property (retain, nonatomic) NSNumber *needCommonParams;
@property (copy, nonatomic) NSString *saveToAlbum;
@property (copy, nonatomic) NSString *customAttr;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setNeedCommonParams:(id)arg0;
- (id)needCommonParams;
- (id)saveToAlbum;
- (void)setSaveToAlbum:(id)arg0;
- (id)customAttr;
- (void)setCustomAttr:(id)arg0;
- (void)setExtension:(id)arg0;
- (void).cxx_destruct;
- (id)extension;
- (void)setUrl:(id)arg0;
- (id)header;
- (void)setHeader:(id)arg0;
- (id)params;
- (id)url;
- (void)setParams:(id)arg0;

@end