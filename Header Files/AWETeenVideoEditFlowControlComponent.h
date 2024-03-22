//
//     Generated by private class-dump
//

@class UIView, AWEPublishBaseTask, AWETeenVideoEditFlowControlViewModel, UIImage, NSString, UIImageView, UIButton, DUXLoadingToast, ACCAnimatedButton;
@protocol ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCPublishServiceSaveAlbumHandle, ACCEditServiceProtocol;

@interface AWETeenVideoEditFlowControlComponent : ACCFeatureComponent <ACCPublishServiceMessage, ACCPublishServiceSaveAlbumDelegate, AWETeenPublishTaskMessage> {
    BOOL _privatePublishEnable;
    BOOL _isInactive;
    BOOL _currentSaveTaskCompleted;
    BOOL _currentPublishTaskCompleted;
    ACCAnimatedButton *_backButton;
    ACCAnimatedButton *_saveButton;
    ACCAnimatedButton *_publishButton;
    AWETeenVideoEditFlowControlViewModel *_viewModel;
    id<ACCPublishServiceSaveAlbumHandle> _saveAlbumHandle;
    double _lastPlayTime;
    UIImageView *_placeholderImageView;
    UIImage *_firstRenderImage;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCStickerServiceProtocol> _stickerService;
    id<ACCEditTransitionServiceProtocol> _transitionService;
    UIView *_bottomContainerView;
    UIButton *_originSaveButton;
    DUXLoadingToast *_uploadLoadingView;
    DUXLoadingToast *_saveLoadingView;
    AWEPublishBaseTask *_currentPublishTask;
}

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) ACCAnimatedButton *saveButton;
@property (retain, nonatomic) ACCAnimatedButton *publishButton;
@property (retain, nonatomic) AWETeenVideoEditFlowControlViewModel *viewModel;
@property (retain, nonatomic) id<ACCPublishServiceSaveAlbumHandle> saveAlbumHandle;
@property (nonatomic) double lastPlayTime;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIImage *firstRenderImage;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (nonatomic) BOOL privatePublishEnable;
@property (nonatomic) BOOL isInactive;
@property (nonatomic) BOOL currentSaveTaskCompleted;
@property (nonatomic) BOOL currentPublishTaskCompleted;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIButton *originSaveButton;
@property (retain, nonatomic) DUXLoadingToast *uploadLoadingView;
@property (retain, nonatomic) DUXLoadingToast *saveLoadingView;
@property (retain, nonatomic) AWEPublishBaseTask *currentPublishTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)lastPlayTime;
- (void)setLastPlayTime:(double)arg0;
- (id)publishModel;
- (void)p_addNotifications;
- (void)saveButtonClicked;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)transitionService;
- (void)setTransitionService:(id)arg0;
- (id)editService;
- (void)loadComponentView;
- (id)serviceBinding;
- (void)setEditService:(id)arg0;
- (id)publishButton;
- (void)setPublishButton:(id)arg0;
- (void)setupBottomContainer;
- (id)trackerCommonParams;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (void)backClicked;
- (void)publishServiceTaskWillAppend:(id)arg0;
- (void)saveAlbumDidFinishWithError:(id)arg0 extra:(id)arg1;
- (void)didChangeProgress:(double)arg0;
- (id)currentPublishTask;
- (void)setCurrentPublishTask:(id)arg0;
- (void)hideProfilePreviewView;
- (void)aweTeenTask:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)aweTeenTask:(id)arg0 progressDidChangeWithInfo:(id)arg1;
- (void)aweTeenTask:(id)arg0 cancelWithResult:(BOOL)arg1;
- (id)saveAlbumHandle;
- (void)setSaveAlbumHandle:(id)arg0;
- (id)saveLoadingView;
- (id)propIdList;
- (BOOL)backToShoot;
- (void)p_showToast:(id)arg0 withIconName:(id)arg1;
- (void)p_didSaveAlbumSuccess;
- (void)setCurrentSaveTaskCompleted:(BOOL)arg0;
- (void)setSaveLoadingView:(id)arg0;
- (id)uploadLoadingView;
- (id)firstRenderImage;
- (void)p_didPublishPrivateSuccess:(id)arg0 awemeModel:(id)arg1;
- (void)p_publishFinishedSuccess;
- (void)setCurrentPublishTaskCompleted:(BOOL)arg0;
- (void)p_showLoadingAndSaveAlbum;
- (void)p_showPhotoLibraryPermissionAlert;
- (void)setFirstRenderImage:(id)arg0;
- (void)p_appDidBecomeActive;
- (void)p_appWillResignActive;
- (void)p_appDidEnterBackground;
- (BOOL)currentPublishTaskCompleted;
- (void)p_saveAlbum;
- (BOOL)privatePublishEnable;
- (id)originSaveButton;
- (void)publishButtonClicked;
- (void)jumpToPublishViewController;
- (void)updateSecurityFramesConfigIfNeeded;
- (void)p_enterPrivateWorkDetail:(id)arg0;
- (void)setPrivatePublishEnable:(BOOL)arg0;
- (BOOL)currentSaveTaskCompleted;
- (void)setOriginSaveButton:(id)arg0;
- (void)setUploadLoadingView:(id)arg0;
- (void).cxx_destruct;
- (id)containerViewController;
- (void)setIsInactive:(BOOL)arg0;
- (id)placeholderImageView;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setPlaceholderImageView:(id)arg0;
- (void)dealloc;
- (BOOL)isInactive;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)dismissHandler;
- (void)dismissViewController;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg0;

@end