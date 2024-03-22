//
//     Generated by private class-dump
//

@class NSString, AWEOpenShareResp;

@interface AWEOpenSharePublishProvider : NSObject <AWEPublishTaskMessage> {
    BOOL _isJianyingRedPack;
    AWEOpenShareResp *_shareResp;
    id /* block */ _completionBlock;
}

@property (retain, nonatomic) AWEOpenShareResp *shareResp;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isJianyingRedPack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareProvider;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)shareWithShareResponse:(id)arg0 completionBlock:(id /* block */)arg1;
- (id)shareResp;
- (void)handleSaveAsDraft:(id)arg0;
- (void)setShareResp:(id)arg0;
- (void)shareRespInitRepoModel:(id)arg0;
- (void)addTitleWithApi:(id)arg0 shareResp:(id)arg1;
- (void)addQuickFlashStickerWithApi:(id)arg0 shareResp:(id)arg1 isCamera:(BOOL)arg2;
- (void)addPOIStickerWithApi:(id)arg0 shareResp:(id)arg1;
- (void)addHashTagStickerWithApi:(id)arg0 shareResp:(id)arg1;
- (void)addMentionStickerWithApi:(id)arg0 shareResp:(id)arg1;
- (void)addImageStickerWithApi:(id)arg0 shareResp:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addMusicWithApi:(id)arg0 shareResp:(id)arg1 isCamera:(BOOL)arg2;
- (void)handleBusinessTaskModel:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)addJianYinRedPackInfo:(id)arg0;
- (void)addOpenShareInfo:(id)arg0;
- (void)addAnchorWithApi:(id)arg0 shareResp:(id)arg1;
- (void)handler:(id)arg0 setExtensionModelWithShareResp:(id)arg1;
- (void)handleCancelEvent:(id)arg0;
- (void)handleBasicConfig:(id)arg0 withSticker:(id)arg1;
- (void)tryShowPopView:(id)arg0;
- (void)reportMonitorWithTask:(id)arg0 withPublishModel:(id)arg1 withResp:(id)arg2 error:(id)arg3;
- (BOOL)isJianyingRedPack;
- (BOOL)checkShouldShowPopView;
- (void)logShareSucceed:(BOOL)arg0 parameters:(id)arg1;
- (void)setIsJianyingRedPack:(BOOL)arg0;
- (id)redPackShootWays;
- (id)unmodifiablePublishParamsFromshareResp:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)handleEnd:(BOOL)arg0;

@end