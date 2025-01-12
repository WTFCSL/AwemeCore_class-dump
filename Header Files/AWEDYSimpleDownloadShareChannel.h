//
//     Generated by private class-dump
//

@interface AWEDYSimpleDownloadShareChannel : AWEDownloadShareChannel

- (void)requestPhotoLibraryPermission:(id /* block */)arg0;
- (void)receiveShareChannelEvent:(id)arg0 platform:(id)arg1 liveShareModel:(id)arg2 extraParams:(id)arg3;
- (BOOL)prepareToShare;
- (void)shareWithCompletion:(id /* block */)arg0;
- (BOOL)isShareItemEnabled;
- (BOOL)isNeedSimpleDownloadWithContext:(id)arg0;
- (void)gotoPhotoLibrarySetting;
- (id)getRoomModel;
- (void)beginSimpleDownloadImageWithCompletion:(id /* block */)arg0;
- (void)beginSimpleDownloadVideoWithCompletion:(id /* block */)arg0;
- (void)saveImageWithRoomModel:(id)arg0 completion:(id /* block */)arg1;
- (void)saveVideoWithRoomModel:(id)arg0 completion:(id /* block */)arg1;
- (void)prepareToShareWithCompletion:(id /* block */)arg0;
- (BOOL)isNeedDownloadImage;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end
