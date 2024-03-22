//
//     Generated by private class-dump
//

@class AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@protocol ACCPublishServiceProtocol <NSObject>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (nonatomic) BOOL shouldPreservePublishTitle;
@property (nonatomic) BOOL isPostPage;
@property (copy, nonatomic) id /* block */ modelConfiguration;

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
- (BOOL)shouldPreservePublishTitle;
- (void)publishNormalVideo:(BOOL)arg0;
- (void)cancelQuickShareWithCreationID:(id)arg0;
- (id)quickSharePreviousItemIDWithPreviousCreationID:(id)arg0;
- (id)createSaveAlbumHandleWithUpdateSourceModel:(id /* block */)arg0;
- (void)saveDraftWithFeedback:(BOOL)arg0;
- (void)saveOrignalDraft;
- (void)setModelConfiguration:(id /* block */)arg0;
- (id /* block */)modelConfiguration;

@end
