//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSString, RACSignal, RACSubject;
@protocol ACCQuickSaveViewModelProtocol;

@interface ACCQuickSaveViewModel : ACCEditViewModel <ACCQuickSaveService> {
    BOOL _hasSavedToAlbum;
    BOOL _hasSavedToCloudAlbum;
    BOOL _hasSavedToDraftBox;
    id<ACCQuickSaveViewModelProtocol> _delegate;
    ACCCameraSubscription *_subscription;
    RACSubject *_didClickQuickSaveActionSubject;
}

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *didClickQuickSaveActionSubject;
@property (weak, nonatomic) id<ACCQuickSaveViewModelProtocol> delegate;
@property (readonly, nonatomic) RACSignal *didClickQuickSaveActionSignal;
@property (nonatomic) BOOL hasSavedToAlbum;
@property (nonatomic) BOOL hasSavedToCloudAlbum;
@property (nonatomic) BOOL hasSavedToDraftBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)multiProjects;
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
- (BOOL)saveAlbumToMultiPathEnable;
- (BOOL)ab_noBlock;
- (void)didClickQuickSaveAction;
- (BOOL)isImageAlbumAndEnableSaveAsVideo;
- (BOOL)ab_forceEnqueue;
- (id)didClickQuickSaveActionSubject;
- (BOOL)triggerFromSJB;
- (void)setDidClickQuickSaveActionSubject:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setSubscription:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end
