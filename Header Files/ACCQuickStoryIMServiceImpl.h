//
//     Generated by private class-dump
//

@class AWEPublishIMVideoTask, NSString, AWEVideoPublishViewModel, AWEResourceUploadParametersResponseModel, UIViewController;
@protocol ACCPublishServiceProtocol, ACCSequenceEditServiceProtocol, ACCQuickStoryIMServiceDelegate, AWEIMHalfScreenContainerVCProtocol, ACCEditViewContainer, AWEIMSyncStoryToFriendsListViewControllerProtocol, ACCEditServiceProtocol;

@interface ACCQuickStoryIMServiceImpl : NSObject <AWEIMSyncStoryToFriendsListViewControllerDelegate, AWEIMHalfScreenContainerVCDelegate, AWEPublishTaskMessage, ACCQuickStoryIMServiceProtocol> {
    BOOL shouldVideoSaveAsPhoto;
    BOOL _didObserveMergeNotification;
    id<ACCQuickStoryIMServiceDelegate> delegate;
    AWEResourceUploadParametersResponseModel *uploadParamsCache;
    UIViewController<AWEIMSyncStoryToFriendsListViewControllerProtocol> *_panel;
    UIViewController<AWEIMHalfScreenContainerVCProtocol> *_container;
    AWEVideoPublishViewModel *_repository;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCEditViewContainer> _viewContainer;
    AWEPublishIMVideoTask *_IMTask;
    id<ACCPublishServiceProtocol> _publishService;
}

@property (retain, nonatomic) UIViewController<AWEIMSyncStoryToFriendsListViewControllerProtocol> *panel;
@property (retain, nonatomic) UIViewController<AWEIMHalfScreenContainerVCProtocol> *container;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) AWEPublishIMVideoTask *IMTask;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (nonatomic) BOOL didObserveMergeNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCQuickStoryIMServiceDelegate> delegate;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (nonatomic) BOOL shouldVideoSaveAsPhoto;

- (void)task:(id)arg0 willAppendWithInfo:(id)arg1;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (BOOL)canGoNext;
- (void)setPublishService:(id)arg0;
- (id)publishService;
- (id)editService;
- (id)uploadParamsCache;
- (void)setEditService:(id)arg0;
- (id)p_trackParams;
- (void)halfScreenContainerVCWillDismiss:(id)arg0;
- (void)setIMTask:(id)arg0;
- (id)IMTask;
- (void)p_showEditView:(BOOL)arg0 animated:(BOOL)arg1;
- (void)registShareResultCallback;
- (void)p_trackShareWithModels:(id)arg0 createGroup:(BOOL)arg1;
- (void)p_publishThenSendIM;
- (void)p_sendIM;
- (BOOL)didObserveMergeNotification;
- (void)setDidObserveMergeNotification:(BOOL)arg0;
- (void)didMergeVideoNotification:(id)arg0;
- (void)didMergePhotoNotification:(id)arg0;
- (void)setUploadParamsCache:(id)arg0;
- (void)p_runIMTask;
- (void)p_getFirstImageWithCompletion:(id /* block */)arg0;
- (BOOL)shouldVideoSaveAsPhoto;
- (void)setShouldVideoSaveAsPhoto:(BOOL)arg0;
- (void)syncStoryToFriendsListViewController:(id)arg0 didSelectShareModel:(id)arg1;
- (void)syncStoryToFriendsListViewControllerDidClickSendToQuickStory:(id)arg0;
- (void)syncStoryToFriendsListViewControllerDidClickSendButton:(id)arg0 shouldSendToQuickStory:(BOOL)arg1 selectedList:(id)arg2;
- (void)syncStoryToFriendsListViewControllerDidClickMore:(id)arg0;
- (void)showPanelWithRepository:(id)arg0 editService:(id)arg1 sequenceEditService:(id)arg2 viewContainer:(id)arg3;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)delegate;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)panel;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setPanel:(id)arg0;

@end
