//
//     Generated by private class-dump
//

@class NSArray, AWEGDAlbumCategoryInfoModel, NSString;

@interface AWEGDAlbumDataModel : AWEBaseApiModel {
    NSArray *_tabInfo;
    AWEGDAlbumCategoryInfoModel *_categoryInfo;
    NSString *_previewHeaderLynxURL;
    NSString *_previewBottomLynxURL;
    NSString *_bottomBarLynxURL;
    NSString *_headerBarLynxURL;
    NSString *_bottomBarRawData;
    NSString *_headerBarRawData;
}

@property (copy, nonatomic) NSArray *tabInfo;
@property (retain, nonatomic) AWEGDAlbumCategoryInfoModel *categoryInfo;
@property (copy, nonatomic) NSString *previewHeaderLynxURL;
@property (copy, nonatomic) NSString *previewBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *headerBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (copy, nonatomic) NSString *headerBarRawData;

+ (id)tabInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tabInfo;
- (void)setTabInfo:(id)arg0;
- (id)previewHeaderLynxURL;
- (void)setPreviewHeaderLynxURL:(id)arg0;
- (id)previewBottomLynxURL;
- (void)setPreviewBottomLynxURL:(id)arg0;
- (id)bottomBarLynxURL;
- (void)setBottomBarLynxURL:(id)arg0;
- (id)headerBarLynxURL;
- (void)setHeaderBarLynxURL:(id)arg0;
- (id)bottomBarRawData;
- (void)setBottomBarRawData:(id)arg0;
- (id)headerBarRawData;
- (void)setHeaderBarRawData:(id)arg0;
- (void).cxx_destruct;
- (id)categoryInfo;
- (void)setCategoryInfo:(id)arg0;

@end
