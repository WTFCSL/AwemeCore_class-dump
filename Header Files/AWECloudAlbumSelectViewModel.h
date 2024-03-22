//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWECloudAlbumSelectPanelViewController;

@interface AWECloudAlbumSelectViewModel : AWEAlbumBaseViewModel <AWECloudAlbumTableViewControllerDelegateProtocol> {
    BOOL _nextBtnClicked;
    AWECloudAlbumSelectPanelViewController *_selectAlbumPanel;
    long long _availableStorage;
    NSMutableDictionary *_assetsCache;
}

@property (retain, nonatomic) AWECloudAlbumSelectPanelViewController *selectAlbumPanel;
@property (nonatomic) long long availableStorage;
@property (retain, nonatomic) NSMutableDictionary *assetsCache;
@property (nonatomic) BOOL nextBtnClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maxUploadVideoDuration;
+ (long long)maxUploadCount;
+ (void)trackAllowedUploadToPrivate:(BOOL)arg0 enterFrom:(id)arg1;
+ (double)maxStorage;
+ (void)setAuthorizationValue:(BOOL)arg0;
+ (void)createAndShowResourcePanelWith:(id)arg0 enterFrom:(id)arg1 withNotification:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)trackAlbumUsedStorage:(long long)arg0;
+ (id)customTransitionDelegate;
+ (void)createAndShowResourcePanelWith:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;

- (id)trackModel;
- (void)showPanel;
- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)arg0;
- (id)initWithInputData:(id)arg0;
- (BOOL)validAssetModelForVideo:(id)arg0;
- (void)dismissPanel:(id /* block */)arg0;
- (void)goToNextWithMultiSelect:(BOOL)arg0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:(id)arg0 withSelectAllMode:(BOOL)arg1;
- (BOOL)shouldSelectAlbumAsset:(id)arg0;
- (BOOL)needDisplayGreyModeWithAsset:(id)arg0;
- (void)trackSelectAllBtnWillbeClicked:(id)arg0;
- (BOOL)needStopSelectAllAssets:(id)arg0;
- (void)trackPreviewControllerDidLoadForAlbumAsset:(id)arg0;
- (void)trackSelectAsset:(id)arg0 fromPreview:(BOOL)arg1;
- (void)updateBottomNextButtonWithButton:(id)arg0 fromPreview:(BOOL)arg1;
- (BOOL)checkValidForAssetModel:(id)arg0;
- (void)p_nextForSelectVideoCompletionWithAssetArray:(id)arg0;
- (void)uploadAssets:(id)arg0 ToAlbum:(unsigned long long)arg1 isFirstUpload:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)setAvailableStorage:(long long)arg0;
- (BOOL)validForUploadCount;
- (void)trackUploadNotAllowed:(id)arg0 WithErrorCode:(id)arg1;
- (BOOL)validAssetModelSizeFor:(id)arg0;
- (BOOL)validTotalAssetsModelSizeFor:(id)arg0;
- (BOOL)validAssetModelForVideoWithoutNotify:(id)arg0;
- (BOOL)validTotalAssetsModelSizeWithoutNotifyFor:(id)arg0;
- (BOOL)validAssetModelSizeWithoutNotify:(id)arg0;
- (double)maxUploadMediaSize;
- (double)calculateAssetSize:(id)arg0;
- (double)maxAvailableStorageSpace;
- (id)assetsCache;
- (void)goToNextHandler;
- (BOOL)nextBtnClicked;
- (void)setNextBtnClicked:(BOOL)arg0;
- (void)setSelectAlbumPanel:(id)arg0;
- (id)selectAlbumPanel;
- (void)trackAddToAlbumClicked;
- (void)uploadSelectedAssetsInfoWith:(id)arg0;
- (void)deleteUploadFailedAlbum:(unsigned long long)arg0;
- (void)p_uploadAssets:(id)arg0 ToAlbum:(unsigned long long)arg1 isFirstUpload:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)trackUploadClicked;
- (id)transferAWEAssetModelToImportModel:(id)arg0;
- (BOOL)checkValidForAssetModelWithoutNotify:(id)arg0;
- (void)trackNextClicked;
- (void)setAssetsCache:(id)arg0;
- (void).cxx_destruct;
- (id)footerTitle;
- (long long)availableStorage;

@end