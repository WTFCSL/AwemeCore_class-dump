//
//     Generated by private class-dump
//

@class AWEAwemeModel, AWEIMDouyinRedPacketDataManager, AWEIMDouyinRedPacketInfoResponse, NSString, AWEIMDouyinRedPacketCoverModel, UIViewController, AWEIMDouyinRedPacketTransferManager, AWEIMDouyinRedPacketModel;
@protocol AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEIMVideoRedpacketManager : HTSService <AWEIMVideoRedpacketManager> {
    AWEIMDouyinRedPacketModel *_infoModel;
    NSString *_rpEnterFrom;
    NSString *_messageID;
    NSString *_conversationID;
    id<AWEAwemePlayInteractionPanelControllerProtocol> _panelController;
    AWEAwemeModel *_awemeModel;
    AWEIMDouyinRedPacketDataManager *_dataManager;
    AWEIMDouyinRedPacketTransferManager *_transferManager;
    AWEIMDouyinRedPacketInfoResponse *_infoResponse;
    AWEIMDouyinRedPacketCoverModel *_coverModel;
    UIViewController *_halfLynxVC;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (retain, nonatomic) AWEIMDouyinRedPacketTransferManager *transferManager;
@property (retain, nonatomic) AWEIMDouyinRedPacketInfoResponse *infoResponse;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverModel;
@property (retain, nonatomic) UIViewController *halfLynxVC;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *infoModel;
@property (copy, nonatomic) NSString *rpEnterFrom;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)infoModel;
- (void)setCoverModel:(id)arg0;
- (void)setInfoModel:(id)arg0;
- (id)coverModel;
- (id)p_buildCallbackModelWithInfo:(id)arg0;
- (BOOL)p_redPacketValidWithInfoResponse:(id)arg0;
- (BOOL)p_isRedPacketOpenedWithInfo:(id)arg0;
- (id)getButtonTitleIsOpened:(BOOL)arg0 info:(id)arg1 awemeModel:(id)arg2;
- (id)rpEnterFrom;
- (BOOL)p_openVideoHalfPanelVCWithCompletion:(id /* block */)arg0;
- (void)p_openRedPacketViewControllerInfoResponse:(id)arg0 coverModel:(id)arg1 completion:(id /* block */)arg2;
- (void)p_notifyIMOpenedVideoRedPacket;
- (id)p_trackStatusWithInfo:(id)arg0;
- (void)setHalfLynxVC:(id)arg0;
- (void)fetchRedPacketButtonShowStatusWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)openRedPacketCompletion:(id /* block */)arg0;
- (void)trackWithEvent:(id)arg0 info:(id)arg1 param:(id)arg2;
- (void)requestRedPacketBulletMsgWithVideoId:(id)arg0 orderNo:(id)arg1 imageIndex:(id)arg2 completion:(id /* block */)arg3;
- (void)setRpEnterFrom:(id)arg0;
- (id)transferManager;
- (void)setTransferManager:(id)arg0;
- (id)halfLynxVC;
- (id)dataManager;
- (id)messageID;
- (void)setPanelController:(id)arg0;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setDataManager:(id)arg0;
- (id)panelController;
- (void)setMessageID:(id)arg0;
- (void)setConversationID:(id)arg0;
- (void)setInfoResponse:(id)arg0;
- (id)infoResponse;

@end
