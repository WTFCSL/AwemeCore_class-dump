//
//     Generated by private class-dump
//

@class ACCImageAlbumEditTagsUploadImageHelper, NSString, AWEVideoPublishViewModel;
@protocol ACCStickerServiceProtocol, ACCEditServiceProtocol, IESServiceProvider;

@interface ACCImageAlbumTagsFeatureServiceImpl : ACCImageAlbumFeatureService <ACCImageAlbumTagsFeatureServiceProtocol> {
    id<ACCStickerServiceProtocol> _stickerService;
    ACCImageAlbumEditTagsUploadImageHelper *_uploadImageHelper;
}

@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCImageAlbumEditTagsUploadImageHelper *uploadImageHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)registStickerHandler:(id)arg0;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)uploadImageHelper;
- (void)setUploadImageHelper:(id)arg0;
- (id)stickerViewsWithTypeId:(id)arg0;
- (void)stopAutoPlayeForTag;
- (void)startAutoPlayeForTag;
- (void)uploadImageToCloudWithImagePath:(id)arg0 Block:(id /* block */)arg1;
- (void).cxx_destruct;

@end
