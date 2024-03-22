//
//     Generated by private class-dump
//

@class NSString;

@interface APCDTODownloadInfo : MTLModel <MTLJSONSerializing> {
    BOOL _isLocal;
    NSString *_url;
    NSString *_uriId;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *uriId;
@property (nonatomic) BOOL isLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)uriId;
- (void)setUriId:(id)arg0;
- (void)setIsLocal:(BOOL)arg0;
- (BOOL)isLocal;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end
