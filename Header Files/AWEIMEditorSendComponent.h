//
//     Generated by private class-dump
//

@class AWEPublishIMVideoTask, NSString, AWEPublicIMPhotoAblumTask, UIView, NSObject, UIViewController;
@protocol ACCPublishServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol, ACCVideoEditFlowControlService, OS_dispatch_queue, AWEIMSyncStoryToFriendsListViewControllerProtocol, AWEIMEditorSendViewProtocol, AWEIMHalfScreenContainerVCProtocol;

@interface AWEIMEditorSendComponent : ACCFeatureComponent <AWEIMEditorSendViewDelegate, AWEIMSyncStoryToFriendsListViewControllerDelegate, AWEIMHalfScreenContainerVCDelegate, AWEPublishTaskMessage> {
    BOOL _isPublishingByModalView;
    BOOL _didObserveMergeNotification;
    AWEPublishIMVideoTask *_imVideoTask;
    AWEPublicIMPhotoAblumTask *_imPhotoTask;
    UIView<AWEIMEditorSendViewProtocol> *_editorSendView;
    id<ACCEditViewContainer> _viewContainer;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCEditServiceProtocol> _editService;
    id<ACCPublishServiceProtocol> _publishService;
    UIViewController<AWEIMHalfScreenContainerVCProtocol> *_syncStoryToFriendsHalScreenContainerfViewController;
    UIViewController<AWEIMSyncStoryToFriendsListViewControllerProtocol> *_syncStoryToFriendsViewController;
    NSObject<OS_dispatch_queue> *_sharedOperationQueue;
}

@property (retain, nonatomic) AWEPublishIMVideoTask *imVideoTask;
@property (retain, nonatomic) AWEPublicIMPhotoAblumTask *imPhotoTask;
@property (retain, nonatomic) UIView<AWEIMEditorSendViewProtocol> *editorSendView;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (weak, nonatomic) UIViewController<AWEIMHalfScreenContainerVCProtocol> *syncStoryToFriendsHalScreenContainerfViewController;
@property (retain, nonatomic) UIViewController<AWEIMSyncStoryToFriendsListViewControllerProtocol> *syncStoryToFriendsViewController;
@property (nonatomic) BOOL isPublishingByModalView;
@property (nonatomic) BOOL didObserveMergeNotification;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (void)task:(id)arg0 willAppendWithInfo:(id)arg1;
- (id)aAWEStudioGlobalConfig;
- (id)chatType;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (void)p_handleVideoRecordFinishedNty:(id)arg0;
- (void)setPublishService:(id)arg0;
- (id)publishService;
- (id)editService;
- (void)loadComponentView;
- (void)setEditService:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)halfScreenContainerVCWillDismiss:(id)arg0;
- (void)registShareResultCallback;
- (BOOL)didObserveMergeNotification;
- (void)setDidObserveMergeNotification:(BOOL)arg0;
- (void)publishQuickStory;
- (void)syncStoryToFriendsListViewController:(id)arg0 didSelectShareModel:(id)arg1;
- (void)syncStoryToFriendsListViewControllerDidClickSendToQuickStory:(id)arg0;
- (void)syncStoryToFriendsListViewControllerDidClickSendButton:(id)arg0 shouldSendToQuickStory:(BOOL)arg1 selectedList:(id)arg2;
- (void)syncStoryToFriendsListViewControllerDidClickMore:(id)arg0;
- (void)preparePublish;
- (void)enqueuePublishTask;
- (void)executeTaskV2;
- (void)executeTaskV2_photo;
- (id)imVideoTask;
- (id)imPhotoTask;
- (void)setImVideoTask:(id)arg0;
- (void)setImPhotoTask:(id)arg0;
- (id)p_inputImage;
- (void)p_checkFace:(id)arg0 withScene:(id)arg1 completion:(id /* block */)arg2;
- (void)showWatchOnceGuideBubbleIfNeeded;
- (void)showSyncToFriendsBubbleIfNeeded;
- (id)syncStoryToFriendsViewController;
- (BOOL)sendAsVideo;
- (void)setEditorSendView:(id)arg0;
- (id)editorSendView;
- (void)getProcessedPreviewImageWithCompeletion:(id /* block */)arg0;
- (void)publish_photo;
- (BOOL)isPublishingByModalView;
- (void)trackShareVideoByModalView;
- (id)normalPublishingTrackingParams;
- (void)makeIMPublishingTrackingWithParams:(id)arg0;
- (void)pulishLog;
- (void)enqueuePublishTask_photo;
- (void)showSyncStoryToFrendsListViewController;
- (void)trackSendGiftCompeleteClick;
- (void)p_backToShoot;
- (void)p_checkFaceForMixPhotoBeforeSubmitAndRunCustomSubmitActionIfPassed;
- (void)showEditView:(BOOL)arg0 animation:(BOOL)arg1;
- (void)setSyncStoryToFriendsHalScreenContainerfViewController:(id)arg0;
- (void)setIsPublishingByModalView:(BOOL)arg0;
- (id)syncStoryToFriendsHalScreenContainerfViewController;
- (void)didMergeVideo:(id)arg0;
- (void)postNotiWithFilePathIfNeeded:(id)arg0;
- (void)p_dismissEditAndShoot;
- (void)p_runCustomSubmitActionWithCheckedImage:(id)arg0 completion:(id /* block */)arg1;
- (void)p_asyncGetCurrentImageWithCompeletion:(id /* block */)arg0;
- (void)editorSendView:(id)arg0 didClickWithType:(unsigned long long)arg1;
- (void)didClickedSendButton;
- (id)buildPublishTask:(id)arg0 editService:(id)arg1;
- (void)setSyncStoryToFriendsViewController:(id)arg0;
- (void)performSendAction;
- (void).cxx_destruct;
- (void)dealloc;
- (void)publish;
- (id)sharedOperationQueue;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setupSendButton;

@end