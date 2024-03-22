//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSURL, AWEECPostShareInfoResponse;
@protocol AWESimplifyAIVideoClipManager, ACCMusicModelProtocol;

@interface AWEECHalfPostDataController : NSObject {
    NSDictionary *_postParams;
    id<ACCMusicModelProtocol> _musicInfo;
    NSURL *_previewFileURL;
    NSDictionary *_commentsInfo;
    NSArray *_commentsArray;
    NSDictionary *_postInfo;
    id<AWESimplifyAIVideoClipManager> _aiVideoClipManager;
    AWEECPostShareInfoResponse *_shareInfo;
}

@property (retain, nonatomic) id<AWESimplifyAIVideoClipManager> aiVideoClipManager;
@property (retain, nonatomic) AWEECPostShareInfoResponse *shareInfo;
@property (retain, nonatomic) NSDictionary *postParams;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicInfo;
@property (retain, nonatomic) NSURL *previewFileURL;
@property (retain, nonatomic) NSDictionary *commentsInfo;
@property (copy, nonatomic) NSArray *commentsArray;
@property (retain, nonatomic) NSDictionary *postInfo;

+ (void)directCommentAndPostWithDataController:(id)arg0 isSilentPost:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)editVCCommentAndPostWithDataController:(id)arg0 publishModel:(id)arg1 editService:(id)arg2 completion:(id /* block */)arg3;

- (id)musicInfo;
- (void)setMusicInfo:(id)arg0;
- (id)commentsArray;
- (void)setCommentsArray:(id)arg0;
- (id)commentsInfo;
- (id)previewFileURL;
- (void)startVideoPublishWithPublishModel:(id)arg0 editService:(id)arg1 isQuickStoryPublish:(BOOL)arg2 isNewVideoPublish:(BOOL)arg3 videoURL:(id)arg4;
- (id)postParams;
- (id)postInfo;
- (unsigned long long)getVideoStyleWithVideoPath:(id)arg0 imagePathArray:(id)arg1;
- (void)setCommentsInfo:(id)arg0;
- (void)setPostInfo:(id)arg0;
- (void)setPreviewFileURL:(id)arg0;
- (void)setAiVideoClipManager:(id)arg0;
- (id)aiVideoClipManager;
- (void)commitPostAndCommentInfoWithPublishModel:(id)arg0 editService:(id)arg1 videoStyle:(unsigned long long)arg2 isNewVideoPublish:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)postPreviewPathWithCompletion:(id /* block */)arg0 isSilentPost:(BOOL)arg1;
- (void)fetchAnchorInfoWithCompletion:(id /* block */)arg0;
- (void)setPostParams:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;

@end
