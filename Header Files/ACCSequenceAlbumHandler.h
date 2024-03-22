//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString, AWEEditAlbumImportConfig, CAKAlbumViewController, AWEVideoPublishViewModel, CAKModalTransitionDelegate;
@protocol ACCImageAlbumGalleryExportManagerProtocol;

@interface ACCSequenceAlbumHandler : NSObject <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate> {
    BOOL _isNextClicked;
    AWEVideoPublishViewModel *_workspace;
    id<ACCImageAlbumGalleryExportManagerProtocol> _exportMgr;
    unsigned long long _importFrom;
    id /* block */ _completion;
    NSArray *_projectsWithoutIdentifier;
    NSArray *_initialSelectedAssets;
    CAKAlbumViewController *_albumViewController;
    CAKModalTransitionDelegate *_transitionDelegate;
    NSNumber *_customMaxCount;
    AWEEditAlbumImportConfig *_importConfig;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *workspace;
@property (retain, nonatomic) id<ACCImageAlbumGalleryExportManagerProtocol> exportMgr;
@property (nonatomic) unsigned long long importFrom;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *projectsWithoutIdentifier;
@property (retain, nonatomic) NSArray *initialSelectedAssets;
@property (nonatomic) BOOL isNextClicked;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (copy, nonatomic) NSNumber *customMaxCount;
@property (retain, nonatomic) AWEEditAlbumImportConfig *importConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableLivePhoto;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (id)albumViewControllerConfigForFooter:(id)arg0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (void)albumViewController:(id)arg0 selectedAssetsViewDidDeleteAsset:(id)arg1 sourceType:(long long)arg2;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didSelectAlbumAsset:(id)arg1 sourceType:(long long)arg2;
- (void)albumViewController:(id)arg0 didClickNextButtonWithSourceType:(long long)arg1 fetchedAlbumAssets:(id)arg2;
- (void)albumViewController:(id)arg0 updateBottomNextButtonWithButton:(id)arg1 fromPreview:(BOOL)arg2;
- (void)albumViewController:(id)arg0 updateBottomTitleWithLabel:(id)arg1;
- (BOOL)albumViewController:(id)arg0 needDisplayGreyModeCellWithAsset:(id)arg1;
- (void)albumViewController:(id)arg0 previewControllerDidLoadForAlbumAsset:(id)arg1 bottomView:(id)arg2;
- (id)albumViewController;
- (void)setAlbumViewController:(id)arg0;
- (void)openAlbumWithWorkspace:(id)arg0 exportManager:(id)arg1 importFrom:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (BOOL)isAllLivePhotoAssets:(id)arg0;
- (BOOL)checkSlidesAssetsCountWithAsset:(id)arg0;
- (BOOL)checkSlidesDurationWhenSelectAsset:(id)arg0;
- (long long)iCloudCountWith:(id)arg0;
- (void)trackNextEvent:(id)arg0 isMultiSelect:(BOOL)arg1;
- (void)p_openAlbumViewController;
- (void)p_showPhotoLibraryPermissionRequestAlert;
- (id)p_initialSelectedAssetModelArray;
- (void)setImportFrom:(unsigned long long)arg0;
- (void)setExportMgr:(id)arg0;
- (void)setIsNextClicked:(BOOL)arg0;
- (void)setCustomMaxCount:(id)arg0;
- (id)p_obtainProjectsWithoutIdentifier;
- (void)setProjectsWithoutIdentifier:(id)arg0;
- (void)setInitialSelectedAssets:(id)arg0;
- (id)buildAlbumViewController;
- (id)importConfig;
- (id)customMaxCount;
- (id)initialSelectedAssets;
- (id)p_bottomViewTipsString;
- (id)projectsWithoutIdentifier;
- (long long)minimumCountWithAlbum:(id)arg0;
- (BOOL)isNextClicked;
- (unsigned long long)importFrom;
- (id)generateAssetsInArray:(id)arg0 notInArray:(id)arg1;
- (id)generateAssetItentifiersInArray:(id)arg0 notInArray:(id)arg1;
- (id)exportMgr;
- (id)albumImportConfig;
- (void)refreshAlbumControllerSelectedItemsWithWorkspace:(id)arg0;
- (void)setImportConfig:(id)arg0;
- (id)workspace;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setWorkspace:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;

@end