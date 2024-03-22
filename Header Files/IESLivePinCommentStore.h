//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, HTSLiveApi, NSMutableArray;
@protocol IESLiveRoomService, IESLivePinCommentReaction;

@interface IESLivePinCommentStore : NSObject <HTSLiveMessageSubscriber, HTSLiveRoomRemoteActions, IESLiveDataSyncDelegate, IESLivePinCommentNodeDelegate> {
    BOOL _isAnchor;
    BOOL _isGameingForAndroid;
    id<IESLiveRoomService> _roomModel;
    HTSEventContext *_trackContext;
    id<IESLivePinCommentReaction> _reaction;
    NSMutableArray *_nodes;
    NSMutableArray *_timeoutNodes;
    HTSLiveApi *_api;
}

@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSMutableArray *timeoutNodes;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isAnchor;
@property (weak, nonatomic) id<IESLivePinCommentReaction> reaction;
@property (nonatomic) BOOL isGameingForAndroid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)roomModel;
- (void)setIsAnchor:(BOOL)arg0;
- (void)setRoomModel:(id)arg0;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (void)handleHighlightContainerSyncData:(id)arg0;
- (id)initWithRoomModel:(id)arg0 diContext:(id)arg1;
- (void)updateNode:(id)arg0 withHighlightItem:(id)arg1;
- (BOOL)isDuplicateNode:(id)arg0 withOtherNode:(id)arg1;
- (BOOL)isValidPinNode:(id)arg0;
- (BOOL)isValidHighlightItem:(id)arg0;
- (id)timeoutNodes;
- (void)checkNodesDisplayDuration;
- (BOOL)isSupportPinMessage:(id)arg0;
- (BOOL)hasPinPrivilege:(unsigned long long)arg0;
- (id)abilityWithNodeType:(unsigned long long)arg0;
- (BOOL)isDuplicateNode:(id)arg0;
- (BOOL)isValidNode:(id)arg0;
- (void)pinCommentNode:(id)arg0 finish:(id /* block */)arg1;
- (void)unPinCommentNode:(id)arg0 finish:(id /* block */)arg1;
- (void)unPinAllCommentNodeWithFinish:(id /* block */)arg0;
- (void)pinCommentNodeDisplayTimeout:(id)arg0;
- (void)setIsGameingForAndroid:(BOOL)arg0;
- (void)handleReviewMessage:(id)arg0;
- (id)getNodeByNodeId:(long long)arg0;
- (void)removeTimeoutNodeId:(long long)arg0;
- (long long)getItemNodeId:(id)arg0;
- (void)trackAnchorReviewDurationWith:(id)arg0;
- (id)abilityWithItem:(id)arg0;
- (double)calculateDisplayDurationWithEndTime:(long long)arg0;
- (void)setupPinCommon:(id)arg0 forNode:(id)arg1;
- (void)removeCheckedNodes;
- (void)p_unPinAllCommentNode:(id)arg0 withFinish:(id /* block */)arg1;
- (BOOL)isEmptyNode:(id)arg0;
- (void)removeEmptyNodes;
- (void)setTimeoutNodes:(id)arg0;
- (BOOL)isGameingForAndroid;
- (void)removeNode:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)addNode:(id)arg0;
- (void)setup;
- (void)setNodes:(id)arg0;
- (id)nodes;
- (void)messageReceived:(id)arg0;
- (id)reaction;
- (id)api;
- (void)setReaction:(id)arg0;
- (void)setApi:(id)arg0;

@end