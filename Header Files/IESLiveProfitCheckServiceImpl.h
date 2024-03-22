//
//     Generated by private class-dump
//

@class NSString, IESLiveGCDTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IESLiveProfitCheckServiceImpl : NSObject <IESLiveProfitCheckTaskDelegate, HTSLiveMessageSubscriber, IESLiveProfitCheckService> {
    NSMutableArray *_checkTasks;
    NSMutableArray *_inValidTasks;
    IESLiveGCDTimer *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *checkTasks;
@property (retain, nonatomic) NSMutableArray *inValidTasks;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leaveRoom;
- (void)giftViewShow:(id)arg0 withItems:(id)arg1;
- (void)giftTrayShow:(id)arg0 withTrayInfo:(id)arg1;
- (void)giftEffectShow:(id)arg0 withEffectInfo:(id)arg1;
- (void)giftOptionRightBuffOrDIYShowWithInfo:(id)arg0;
- (void)didRevenueInteractContributeListChanged:(id)arg0;
- (void)didRevenueInteractScoreChanged:(id)arg0;
- (void)openAssetShow:(id)arg0 withInfo:(id)arg1;
- (void)userEnterShow:(id)arg0 withInfo:(id)arg1;
- (void)userCardDrssShow:(id)arg0 withInfo:(id)arg1;
- (void)seqListborderShow:(id)arg0 withInfo:(id)arg1;
- (void)didGiveGiftWithResponse:(id)arg0;
- (void)enterRoom:(id)arg0;
- (void)createProfitCheckWithProfitCheckDatas:(id)arg0 extra:(id)arg1;
- (void)reportImWithMessage:(id)arg0;
- (void)reportProfitCheck:(unsigned long long)arg0 withUserId:(id)arg1 roomId:(id)arg2 data:(id)arg3;
- (void)reportTask:(id)arg0;
- (void)checkTasksIsValid;
- (void)reportConsumeRequest:(id)arg0;
- (void)createProfitCheckWithProfitCheckData:(id)arg0 extra:(id)arg1;
- (id)checkTasks;
- (void)fansClubTaskReceived:(id)arg0 withRoomId:(id)arg1 withFansClubInfo:(id)arg2;
- (void)payGradeTaskReceived:(id)arg0 withRoomId:(id)arg1 withPayGradeInfo:(id)arg2;
- (void)exhibitionTaskReceived:(id)arg0 withRoomId:(id)arg1 withExhibitionInfo:(id)arg2;
- (void)wishTaskReceived:(id)arg0 withRoomId:(id)arg1 withWishInfo:(id)arg2;
- (void)audienceRankListTaskReceived:(id)arg0 withRoomId:(id)arg1 withAudienceRankListInfo:(id)arg2;
- (void)linkmicContributeRankListTaskReceived:(id)arg0 withRoomId:(id)arg1 withLinkmicContributeRankListInfo:(id)arg2;
- (void)generalFrontEndTaskReceived:(id)arg0 withRoomId:(id)arg1 withTaskInfo:(id)arg2;
- (void)registerMessageProcesser;
- (BOOL)checkTaskIsValid:(id)arg0;
- (id)inValidTasks;
- (void)reportTrackWithEventName:(id)arg0 userId:(id)arg1 roomId:(id)arg2 anchorId:(id)arg3 traceId:(id)arg4 logId:(id)arg5 params:(id)arg6 index:(id)arg7;
- (void)clearInValidTasks;
- (void)setCheckTasks:(id)arg0;
- (void)setInValidTasks:(id)arg0;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;
- (void)messageReceived:(id)arg0;

@end