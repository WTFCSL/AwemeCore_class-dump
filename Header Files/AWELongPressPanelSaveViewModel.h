//
//     Generated by private class-dump
//

@interface AWELongPressPanelSaveViewModel : AWELongPressPanelBaseViewModel

+ (id)longPressPanelViewModel;

- (BOOL)needShow;
- (void)doDownloadTrackWithModel:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2;
- (void)p_doDownloadImageAlbumWithSelectedIndices:(id)arg0 model:(id)arg1 referString:(id)arg2 completion:(id /* block */)arg3;
- (id)albumImagePickerViewController;
- (void)downloadImageAlbum:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2 completion:(id /* block */)arg3;
- (void)showImageAlbumDownloadSouceChooseWithAWeme:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)shouldDownloadWithAwemeModel:(id)arg0;
- (void)downloadFromLongPress:(id)arg0 referString:(id)arg1 logExtraDict:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)configVM;
- (void)p_saveImageAlbumAsVideoWithAWeme:(id)arg0 completion:(id /* block */)arg1;

@end