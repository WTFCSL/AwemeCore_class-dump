//
//     Generated by private class-dump
//

@class AWEVideoPublishFlowService, NSString, AWEVideoPublishViewModel, AWEResourceUploadParametersResponseModel;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishFlowServiceWrapper : NSObject <ACCPublishServiceProtocol> {
    BOOL _shouldPreservePublishTitle;
    id /* block */ modelConfiguration;
    AWEVideoPublishFlowService *_service;
}

@property (retain, nonatomic) AWEVideoPublishFlowService *service;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (nonatomic) BOOL shouldPreservePublishTitle;
@property (nonatomic) BOOL isPostPage;
@property (copy, nonatomic) id /* block */ modelConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)saveToAlbum;
- (id)editService;
- (id)uploadParamsCache;
- (void)setEditService:(id)arg0;
- (void)setUploadParamsCache:(id)arg0;
- (void)setShouldPreservePublishTitle:(BOOL)arg0;
- (void)publishQuickStory;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)publishNormalVideo;
- (void)generateCoverAndSave:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setIsPostPage:(BOOL)arg0;
- (BOOL)isPostPage;
- (void)didDeleteWithError:(id)arg0 aweme:(id)arg1 enterFrom:(id)arg2 eventParams:(id)arg3;
- (BOOL)shouldPreservePublishTitle;
- (void)p_forkDoPublishForStory:(BOOL)arg0;
- (void)p_forkDoDraft;
- (void)publishNormalVideo:(BOOL)arg0;
- (void)p_configPublishModelForPublish;
- (void)cancelQuickShareWithCreationID:(id)arg0;
- (id)quickSharePreviousItemIDWithPreviousCreationID:(id)arg0;
- (id)createSaveAlbumHandleWithUpdateSourceModel:(id /* block */)arg0;
- (void)saveDraftWithFeedback:(BOOL)arg0;
- (void)saveOrignalDraft;
- (id)init;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)setModelConfiguration:(id /* block */)arg0;
- (id /* block */)modelConfiguration;
- (void)dealloc;
- (id)service;
- (void)finishFlow;

@end
