//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEGDAlbumDataProcessor : NSObject {
    NSMutableDictionary *_categoryInfos;
    NSMutableArray *_tabInfos;
    NSString *_previewHeaderLynxURL;
    NSString *_previewBottomLynxURL;
    NSString *_bottomBarLynxURL;
    NSString *_headerBarLynxURL;
    NSString *_bottomBarRawData;
    NSString *_headerBarRawData;
    NSMutableDictionary *_tabIDs;
    NSMutableDictionary *_tabNextPageIndexes;
    NSString *_poiID;
    NSString *_productID;
    NSString *_backendType;
}

@property (retain, nonatomic) NSMutableDictionary *tabIDs;
@property (retain, nonatomic) NSMutableDictionary *tabNextPageIndexes;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *backendType;
@property (retain, nonatomic) NSMutableDictionary *categoryInfos;
@property (retain, nonatomic) NSMutableArray *tabInfos;
@property (copy, nonatomic) NSString *previewHeaderLynxURL;
@property (copy, nonatomic) NSString *previewBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *headerBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (copy, nonatomic) NSString *headerBarRawData;

- (id)poiID;
- (void)setPoiID:(id)arg0;
- (void)setTabInfos:(id)arg0;
- (void)setBackendType:(id)arg0;
- (id)backendType;
- (void)loadMore:(long long)arg0 completion:(id /* block */)arg1;
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
- (id)initWithProductID:(id)arg0 poiID:(id)arg1 backendType:(id)arg2;
- (id)tabNextPageIndexes;
- (id)categoryInfos;
- (id)tabIDs;
- (void)setTabIDs:(id)arg0;
- (void)setTabNextPageIndexes:(id)arg0;
- (void)setCategoryInfos:(id)arg0;
- (void)fetchDataWithTabIndex:(long long)arg0 photoIndexOffset:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)albumHasBeenCache:(long long)arg0;
- (void)updatePOIID:(id)arg0;
- (void)loadDataWithTabIndex:(long long)arg0 completion:(id /* block */)arg1;
- (long long)tabNumbers;
- (id)getPhotoWith:(id)arg0 photoIndex:(long long)arg1;
- (id)productID;
- (id)init;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (void)cleanCache;
- (id)tabInfos;
- (void)loadDataWithCompletion:(id /* block */)arg0;

@end