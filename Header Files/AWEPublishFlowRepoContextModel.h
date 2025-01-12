//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel, NSString, AWEPublishBaseTask;
@protocol AWEPublishEditServiceManagerProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishFlowRepoContextModel : MTLModel <MTLJSONSerializing> {
    BOOL _draftSaving;
    BOOL _appInBackground;
    BOOL _isPreUploadSuccessed;
    AWEPublishBaseTask *_task;
    AWEVideoPublishViewModel *_publishViewModel;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<AWEPublishEditServiceManagerProtocol> _editServiceManager;
    NSString *_totalFileSize;
    long long _mergeImageCount;
    long long _mergeVideoCount;
}

@property (weak, nonatomic) AWEPublishBaseTask *task;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (readonly, nonatomic) BOOL isSingleVideo;
@property (readonly, nonatomic) BOOL isSingleImageAsImageAlbumPublish;
@property (nonatomic) BOOL draftSaving;
@property (nonatomic) BOOL appInBackground;
@property (nonatomic) BOOL isPreUploadSuccessed;
@property (retain, nonatomic) NSString *totalFileSize;
@property (nonatomic) long long mergeImageCount;
@property (nonatomic) long long mergeVideoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (void)setTotalFileSize:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (id)editServiceManager;
- (void)setEditServiceManager:(id)arg0;
- (BOOL)isSuitableSingleTask;
- (BOOL)isSingleImageAsImageAlbumPublish;
- (BOOL)draftSaving;
- (void)setDraftSaving:(BOOL)arg0;
- (BOOL)isPreUploadSuccessed;
- (void)setIsPreUploadSuccessed:(BOOL)arg0;
- (BOOL)isSingleVideo;
- (BOOL)isSingleProject;
- (BOOL)isCanvansPhotoAndEnablePublishAsImageAlbum;
- (long long)mergeImageCount;
- (long long)mergeVideoCount;
- (BOOL)isCommonMerge;
- (BOOL)isBuildedSingleVideoMerge;
- (BOOL)isBuildedSingleImageMerge;
- (void)setMergeImageCount:(long long)arg0;
- (void)setMergeVideoCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (id)task;
- (BOOL)appInBackground;
- (void)setAppInBackground:(BOOL)arg0;
- (id)totalFileSize;

@end
