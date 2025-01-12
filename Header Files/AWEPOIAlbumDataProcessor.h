//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, AWEPOIAlbumSelectedStatus, NSMutableArray;

@interface AWEPOIAlbumDataProcessor : NSObject {
    BOOL _hideAlbumUploadButton;
    NSMutableDictionary *_categoryInfos;
    NSMutableArray *_tabInfos;
    AWEPOIAlbumSelectedStatus *_selectedStatus;
    long long _maxReportNumber;
    NSString *_photosReportSchema;
    NSString *_galleryHeaderLynxURL;
    NSString *_galleryBottomLynxURL;
    NSString *_bottomBarLynxURL;
    NSString *_bottomBarRawData;
    NSMutableDictionary *_tabIDs;
}

@property (retain, nonatomic) NSMutableDictionary *tabIDs;
@property (retain, nonatomic) NSMutableDictionary *categoryInfos;
@property (retain, nonatomic) NSMutableArray *tabInfos;
@property (retain, nonatomic) AWEPOIAlbumSelectedStatus *selectedStatus;
@property (nonatomic) long long maxReportNumber;
@property (copy, nonatomic) NSString *photosReportSchema;
@property (copy, nonatomic) NSString *galleryHeaderLynxURL;
@property (copy, nonatomic) NSString *galleryBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (nonatomic) BOOL hideAlbumUploadButton;

- (void)setTabInfos:(id)arg0;
- (void)loadMore:(long long)arg0 completion:(id /* block */)arg1;
- (id)bottomBarLynxURL;
- (void)setBottomBarLynxURL:(id)arg0;
- (id)bottomBarRawData;
- (void)setBottomBarRawData:(id)arg0;
- (id)categoryInfos;
- (id)tabIDs;
- (void)setTabIDs:(id)arg0;
- (void)setCategoryInfos:(id)arg0;
- (BOOL)albumHasBeenCache:(long long)arg0;
- (long long)tabNumbers;
- (id)getPhotoWith:(id)arg0 photoIndex:(long long)arg1;
- (long long)maxReportNumber;
- (void)setMaxReportNumber:(long long)arg0;
- (id)photosReportSchema;
- (void)setPhotosReportSchema:(id)arg0;
- (id)galleryHeaderLynxURL;
- (void)setGalleryHeaderLynxURL:(id)arg0;
- (id)galleryBottomLynxURL;
- (void)setGalleryBottomLynxURL:(id)arg0;
- (BOOL)hideAlbumUploadButton;
- (void)setHideAlbumUploadButton:(BOOL)arg0;
- (void)fetchDataWithPOIID:(id)arg0 backendType:(id)arg1 tabIndex:(long long)arg2 photoIndexOffset:(long long)arg3 completion:(id /* block */)arg4;
- (id)selectedStatus;
- (void)loadDataWithPOIID:(id)arg0 backendType:(id)arg1 completion:(id /* block */)arg2;
- (void)loadDataWithPOIID:(id)arg0 backendType:(id)arg1 tabIndex:(long long)arg2 completion:(id /* block */)arg3;
- (BOOL)deleteSelectedStatus:(id)arg0 photoIndex:(long long)arg1;
- (void)setSelectedStatus:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)tabInfos;

@end
