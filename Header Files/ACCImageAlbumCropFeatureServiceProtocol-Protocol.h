//
//     Generated by private class-dump
//

@protocol ACCImageAlbumCropFeatureServiceProtocol <NSObject, ACCImageAlbumFeatureServiceProtocol>

- (id)currentImageEditOriginalImage;
- (BOOL)canDirectJumpToCropView;
- (void)removeCurrentEditsWhenBeginCrop;
- (void)stopAutoPlayeForCrop;
- (void)startAutoPlayeForCrop;
- (void)confirmCrop:(id)arg0 forData:(id)arg1 atIndex:(long long)arg2 reloadPlayerItem:(BOOL)arg3;

@end