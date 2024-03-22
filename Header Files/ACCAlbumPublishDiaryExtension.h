//
//     Generated by private class-dump
//

@class NSString, CAKAlbumAssetModel, CAKAlbumViewController, ACCButton, ACCAlbumInputData;

@interface ACCAlbumPublishDiaryExtension : ACCAlbumExtension {
    CAKAlbumAssetModel *_currentPlayingAssetInPreview;
    ACCButton *_publishDiaryBtn;
    ACCButton *_publishDiaryBtnForPreview;
    CAKAlbumViewController *_albumController;
    ACCAlbumInputData *_inputData;
    NSString *_convertTaskId;
    NSString *_storyPublishTitle;
    long long _imageNumber;
    long long _videoNumber;
}

@property (retain, nonatomic) ACCButton *publishDiaryBtn;
@property (retain, nonatomic) ACCButton *publishDiaryBtnForPreview;
@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) NSString *convertTaskId;
@property (copy, nonatomic) NSString *storyPublishTitle;
@property (nonatomic) long long imageNumber;
@property (nonatomic) long long videoNumber;
@property (retain, nonatomic) CAKAlbumAssetModel *currentPlayingAssetInPreview;

- (void)albumViewControllerEndPreview:(id)arg0;
- (void)albumDidSelectAssetes:(id)arg0 targetAsset:(id)arg1;
- (void)albumDidLoadBottomView:(id)arg0;
- (void)setCurrentPlayingAssetInPreview:(id)arg0;
- (void)albumDidLoadPreviewControllerBottomView:(id)arg0 previewAsset:(id)arg1;
- (void)albumDidDeleteAssetFromBottomView:(id)arg0;
- (void)previewControllerScrollViewDidEndDeceleratingWithAlbumAsset:(id)arg0;
- (id)currentPlayingAssetInPreview;
- (void)albumDidLoadExtension:(id)arg0 albumViewController:(id)arg1;
- (void)setAlbumController:(id)arg0;
- (id)albumController;
- (id)publishDiaryBtn;
- (void)changeStoryBtnTitleIfNeed:(id)arg0;
- (id)publishDiaryBtnForPreview;
- (void)changeStoryBtnTitleBySelectArrayIfNeed:(id)arg0;
- (void)publishDiaryClicked;
- (id)storyPublishTitle;
- (void)setImageNumber:(long long)arg0;
- (void)setVideoNumber:(long long)arg0;
- (long long)videoNumber;
- (long long)imageNumber;
- (void)publishWithPhotos:(id)arg0;
- (void)publishWithVideos:(id)arg0;
- (void)publishWithMix:(id)arg0;
- (void)downloadAssets:(id)arg0 completion:(id /* block */)arg1;
- (long long)musicStrategy;
- (void)publishWithSilence:(id)arg0;
- (void)convertAssetModelsToValidAssetModels:(id)arg0 completion:(id /* block */)arg1;
- (void)configTrackInfo:(id)arg0;
- (void)setConvertTaskId:(id)arg0;
- (id)convertTaskId;
- (void)setPublishDiaryBtn:(id)arg0;
- (void)setPublishDiaryBtnForPreview:(id)arg0;
- (void)setStoryPublishTitle:(id)arg0;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end