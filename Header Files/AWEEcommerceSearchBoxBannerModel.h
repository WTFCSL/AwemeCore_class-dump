//
//     Generated by private class-dump
//

@class NSString, AWEEcommerceSearchBoxBannerContentModel, AWEEcommerceSearchBoxBannerSceneInfo;

@interface AWEEcommerceSearchBoxBannerModel : MTLModel <MTLJSONSerializing> {
    long long _bannerContentType;
    AWEEcommerceSearchBoxBannerContentModel *_imgContent;
    AWEEcommerceSearchBoxBannerContentModel *_imgTextContent;
    AWEEcommerceSearchBoxBannerSceneInfo *_sceneInfo;
}

@property (nonatomic) long long bannerContentType;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerContentModel *imgContent;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerContentModel *imgTextContent;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerSceneInfo *sceneInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imgContentJSONTransformer;
+ (id)imgTextContentJSONTransformer;
+ (id)sceneInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)sceneInfo;
- (void)setSceneInfo:(id)arg0;
- (long long)bannerContentType;
- (void)setBannerContentType:(long long)arg0;
- (id)imgContent;
- (void)setImgContent:(id)arg0;
- (id)imgTextContent;
- (void)setImgTextContent:(id)arg0;
- (void).cxx_destruct;
- (id)schema;

@end
