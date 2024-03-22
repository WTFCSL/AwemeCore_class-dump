//
//     Generated by private class-dump
//

@class NSString, AWEAnchorCustomTitleViewController, BDPUniqueID, BDPVideoPublishModel;

@interface AWEPluginVideoPublishCustomImpl : NSObject <BDPVideoPublishDelegate, AWEPublishTaskMessage, AWEIronManShareTaskMessage, AWEStudioPublishPathMessage> {
    BOOL _isUploadingUserInfo;
    id /* block */ _completion;
    NSString *_stickerID;
    BDPVideoPublishModel *_model;
    BDPUniqueID *_uniqueID;
    AWEAnchorCustomTitleViewController *_customizedTitleController;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *stickerID;
@property (nonatomic) BOOL isUploadingUserInfo;
@property (retain, nonatomic) BDPVideoPublishModel *model;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) AWEAnchorCustomTitleViewController *customizedTitleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (id)stickerID;
- (void)setStickerID:(id)arg0;
- (void)ironManVideoPublishResult:(BOOL)arg0;
- (void)publishFinishWithType:(unsigned long long)arg0;
- (void)shareTaskDone;
- (void)createCutSameMVTemplateWithTemplateId:(id)arg0 withModel:(id)arg1 withInfo:(id)arg2 appID:(id)arg3 didComplete:(id /* block */)arg4;
- (void)createVideoWithModel:(id)arg0 withInfo:(id)arg1 appID:(id)arg2;
- (void)setCustomizedTitleController:(id)arg0;
- (id)customizedTitleController;
- (void)startVideoWithStickerID:(id)arg0 model:(id)arg1 info:(id)arg2 appID:(id)arg3;
- (BOOL)needHandleMessage;
- (BOOL)isUploadingUserInfo;
- (void)setIsUploadingUserInfo:(BOOL)arg0;
- (void)bdp_anchorCustomizeTitleWithResultModel:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)bdp_checkAbilityEnable;
- (void)login:(id)arg0 completion:(id /* block */)arg1;
- (void)videoSceneDidStart:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)getVideoTypeString:(id)arg0;
- (void)bdp_videoSceneWithModel:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)bdp_videoMountWithModel:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)bdp_getVideoSceneBlockList;
- (void)setModel:(id)arg0;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setCompletion:(id /* block */)arg0;
- (void)setUniqueID:(id)arg0;
- (id)model;
- (void)dealloc;

@end