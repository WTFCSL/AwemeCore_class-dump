//
//     Generated by private class-dump
//

@class BDXPreserveDataManager, NSString, NSDictionary;

@interface BDXContainerBuilder : NSObject <AWEUserMessage, BDXPreserveDataDelegate, BDXContianerBuilderProtocol> {
    BOOL _isBroadcastingStatusChange;
    BDXPreserveDataManager *_preserveDataManager;
}

@property (retain, nonatomic) BDXPreserveDataManager *preserveDataManager;
@property (nonatomic) BOOL isBroadcastingStatusChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *preserveData;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (id)preserveDataManager;
- (id)preserveData;
- (void)setPreserveData:(id)arg0;
- (void)__updateFollowPreserveDataWithUser:(id)arg0 status:(long long)arg1;
- (void)setIsBroadcastingStatusChange:(BOOL)arg0;
- (BOOL)isBroadcastingStatusChange;
- (void)__updateDiggPreserveDataWithAwemeID:(id)arg0 type:(long long)arg1;
- (void)commentLikeActionNotification:(id)arg0;
- (void)__updateCommentDiggPreserveDataWithAwemeID:(id)arg0 cid:(id)arg1 userDigged:(BOOL)arg2 diggCount:(id)arg3;
- (void)preserveDataDidUpdateWithType:(unsigned long long)arg0 oldValue:(id)arg1 newValue:(id)arg2 currentData:(id)arg3 isUpdate:(BOOL)arg4;
- (void)__broadcastStatusUpdate:(id)arg0;
- (void)__addObserverForFollowStatusWithOperation:(id)arg0;
- (void)__addObserverForDiggStatusWithOperation:(id)arg0;
- (void)__addObserverForCommentDiggStatusWithOperation:(id)arg0;
- (void)__onAwemeDiggNotification:(id)arg0;
- (void)setShouldOverridePreserveData:(BOOL)arg0;
- (void)updateContainer:(id)arg0 getDataType:(unsigned long long)arg1;
- (void)__updatePreserveDataWithStatusType:(unsigned long long)arg0 statusContext:(id)arg1;
- (void)setPreserveDataManager:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)updateContainer:(id)arg0;
- (void)dealloc;

@end