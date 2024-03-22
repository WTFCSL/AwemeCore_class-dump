//
//     Generated by private class-dump
//

@class IESLiveInteractionLocalPreviewCapture, NSArray, IESLiveMultiKTVSingModeAPI, NSString, IESLiveMultiKTVStore, UIView, UILabel;
@protocol IESLiveMultiKTVSingModeSwitch;

@interface IESLiveMultiKTVSingModePickerView : UIView <UIImagePickerControllerDelegate, UINavigationControllerDelegate, IESLiveInteractionLocalPreviewCaptureDelegate, HTSLiveMessageSubscriber, IESLiveKTVActions> {
    IESLiveMultiKTVStore *_multiKTVStore;
    NSArray *_cardViews;
    UIView *_avatarCardContainerView;
    UILabel *_avatarAudioStatusLabel;
    long long _selectedModeIdentifier;
    id<IESLiveMultiKTVSingModeSwitch> _singModeSwitch;
    IESLiveMultiKTVSingModeAPI *_api;
    IESLiveInteractionLocalPreviewCapture *_previewCapture;
}

@property (weak, nonatomic) IESLiveMultiKTVStore *multiKTVStore;
@property (copy, nonatomic) NSArray *cardViews;
@property (retain, nonatomic) UIView *avatarCardContainerView;
@property (retain, nonatomic) UILabel *avatarAudioStatusLabel;
@property (nonatomic) long long selectedModeIdentifier;
@property (retain, nonatomic) id<IESLiveMultiKTVSingModeSwitch> singModeSwitch;
@property (retain, nonatomic) IESLiveMultiKTVSingModeAPI *api;
@property (retain, nonatomic) IESLiveInteractionLocalPreviewCapture *previewCapture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cardViews;
- (void)setCardViews:(id)arg0;
- (void)p_setupViews;
- (void)p_confirm;
- (void)p_setupBindings;
- (void)willStartPlayMusicWithMusicID:(id)arg0 afterTime:(long long)arg1;
- (void)p_trackEvent:(id)arg0 extraParams:(id)arg1;
- (void)avatarSnapshotUpdated:(id)arg0;
- (void)didAvatarAuditStatusChanged:(long long)arg0;
- (id)singModeSwitch;
- (void)setSingModeSwitch:(id)arg0;
- (id)previewCapture;
- (void)p_showPopupView:(id)arg0 typed:(long long)arg1;
- (id)p_createPreviewCaptureOnce;
- (void)setPreviewCapture:(id)arg0;
- (id)multiKTVStore;
- (void)setSelectedModeIdentifier:(long long)arg0;
- (void)p_showVideoPreview;
- (void)p_dismissAllSingModePopupView;
- (id)avatarAudioStatusLabel;
- (void)p_updateUI:(id)arg0 asAuditStatusChanged:(long long)arg1;
- (id)avatarCardContainerView;
- (void)p_updateAvatarCardContainerView:(id)arg0 newImage:(id)arg1;
- (id)p_scaledImage:(id)arg0 scaleFactor:(double)arg1;
- (void)setAvatarAudioStatusLabel:(id)arg0;
- (long long)selectedModeIdentifier;
- (id)initWithStore:(id)arg0 diContext:(id)arg1;
- (BOOL)p_isVideoModeEnabled;
- (void)setMultiKTVStore:(id)arg0;
- (void)setAvatarCardContainerView:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
