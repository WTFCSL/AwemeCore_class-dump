//
//     Generated by private class-dump
//

@class RACSignal;

@protocol ACCQuickSaveService <NSObject>

@property (readonly, nonatomic) RACSignal *didClickQuickSaveActionSignal;
@property (nonatomic) BOOL hasSavedToAlbum;
@property (nonatomic) BOOL hasSavedToCloudAlbum;
@property (nonatomic) BOOL hasSavedToDraftBox;

- (void)notifywillTriggerQuickSaveAction;
- (BOOL)shouldReplaceSaveDraftWithSaveInBegForStay;
- (BOOL)shouldDisableQuickSave;
- (BOOL)isImageAlbumAndDisableSaveImageAlbum;
- (BOOL)canSaveAsVideo;
- (long long)editQuickSaveStyleType;
- (void)quickSaveToAlbumActionWithFromPageType:(unsigned long long)arg0 loadingButton:(id)arg1;
- (void)quickSaveDraftActionWithFromPageType:(unsigned long long)arg0;
- (void)publishPrivateActionWithFromPageType:(unsigned long long)arg0;
- (void)publishStoryActionWithFromPageType:(unsigned long long)arg0;
- (void)gotoPublishCoverPageWithFromPageType:(unsigned long long)arg0;
- (void)normalPublishCoverPageWithFromPageType:(unsigned long long)arg0;
- (id)didClickQuickSaveActionSignal;
- (BOOL)hasSavedToAlbum;
- (void)setHasSavedToAlbum:(BOOL)arg0;
- (BOOL)hasSavedToCloudAlbum;
- (void)setHasSavedToCloudAlbum:(BOOL)arg0;
- (BOOL)hasSavedToDraftBox;
- (void)setHasSavedToDraftBox:(BOOL)arg0;
- (void)addSubscriber:(id)arg0;

@end