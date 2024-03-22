//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEActivityPendantDataModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _imageType;
    NSString *_staticExpandedURL;
    NSString *_staticFoldedURL;
    NSString *_lottiFileURL;
    NSString *_compressedLottieFileMD5;
    NSArray *_expandedPendantFrameList;
    NSArray *_foldedPendantFrameList;
    NSString *_routerURL;
}

@property (nonatomic) unsigned long long imageType;
@property (retain, nonatomic) NSString *staticExpandedURL;
@property (retain, nonatomic) NSString *staticFoldedURL;
@property (retain, nonatomic) NSString *lottiFileURL;
@property (retain, nonatomic) NSString *compressedLottieFileMD5;
@property (retain, nonatomic) NSArray *expandedPendantFrameList;
@property (retain, nonatomic) NSArray *foldedPendantFrameList;
@property (retain, nonatomic) NSString *routerURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)staticExpandedURL;
- (id)staticFoldedURL;
- (id)expandedPendantFrameList;
- (id)foldedPendantFrameList;
- (id)lottiFileURL;
- (id)routerURL;
- (void)setRouterURL:(id)arg0;
- (void)setStaticExpandedURL:(id)arg0;
- (void)setStaticFoldedURL:(id)arg0;
- (void)setLottiFileURL:(id)arg0;
- (id)compressedLottieFileMD5;
- (void)setCompressedLottieFileMD5:(id)arg0;
- (void)setExpandedPendantFrameList:(id)arg0;
- (void)setFoldedPendantFrameList:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)imageType;
- (void)setImageType:(unsigned long long)arg0;

@end
