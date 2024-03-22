//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol ACCStickerServiceProtocol, IESServiceProvider, ACCImageAlbumCropDomainService, ACCEditServiceProtocol;

@interface ACCImageAlbumCropFeatureServiceImpl : ACCImageAlbumFeatureService <ACCImageAlbumCropFeatureServiceProtocol> {
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCImageAlbumCropDomainService> _cropImage;
}

@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<ACCImageAlbumCropDomainService> cropImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (id)dependences;
- (id)currentImageEditOriginalImage;
- (BOOL)canDirectJumpToCropView;
- (void)removeCurrentEditsWhenBeginCrop;
- (void)stopAutoPlayeForCrop;
- (void)startAutoPlayeForCrop;
- (void)confirmCrop:(id)arg0 forData:(id)arg1 atIndex:(long long)arg2 reloadPlayerItem:(BOOL)arg3;
- (id)cropImage;
- (void)p_removeTemplate;
- (void)setCropImage:(id)arg0;
- (void).cxx_destruct;

@end
