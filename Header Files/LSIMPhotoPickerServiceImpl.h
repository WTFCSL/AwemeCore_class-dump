//
//     Generated by private class-dump
//

@class NSString, AWEPOIIMPhotoManager, AWEPOIIMAlbumManager, AWEIMAssetGalleryPickerCustomConfig;

@interface LSIMPhotoPickerServiceImpl : NSObject <LSIMPhotoPickerService> {
    AWEPOIIMAlbumManager *_albumManager;
    AWEPOIIMPhotoManager *_photoManager;
    AWEIMAssetGalleryPickerCustomConfig *_pickerCustomConfig;
}

@property (retain, nonatomic) AWEPOIIMAlbumManager *albumManager;
@property (retain, nonatomic) AWEPOIIMPhotoManager *photoManager;
@property (retain, nonatomic) AWEIMAssetGalleryPickerCustomConfig *pickerCustomConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)albumManager;
- (id)pickerCustomConfig;
- (id)photoManager;
- (void)setAlbumManager:(id)arg0;
- (void)setPickerCustomConfig:(id)arg0;
- (void)setPhotoManager:(id)arg0;
- (void)takePhotoWithCallback:(id /* block */)arg0;
- (void)selectPhotosWithCallback:(id /* block */)arg0;
- (void).cxx_destruct;

@end
