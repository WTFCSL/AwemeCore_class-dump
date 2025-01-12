//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray, NSString;
@protocol AnnieXCardModelProtocol;

@interface AnnieXPreserveDataManager : NSObject <AWEUserMessage, AnnieXPreserveDataManagerProtocol, AnnieXCardModelDelegateProtocol> {
    BOOL _isBroadcastingStatusChange;
    BOOL _shouldOverridePreserveData;
    NSDictionary *_innerPreservedData;
    id<AnnieXCardModelProtocol> _cardModel;
    NSMutableArray *_identifiers;
}

@property (copy) NSDictionary *innerPreservedData;
@property (weak, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (nonatomic) BOOL isBroadcastingStatusChange;
@property (nonatomic) BOOL shouldOverridePreserveData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDictionary *preserveData;

+ (BOOL)enableCommentDiggFunction;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)preserveData;
- (void)setPreserveData:(id)arg0;
- (void)updateCardModel:(id)arg0;
- (id)innerPreservedData;
- (void)setInnerPreservedData:(id)arg0;
- (void)__updateFollowPreserveDataWithUser:(id)arg0 status:(long long)arg1;
- (void)setIsBroadcastingStatusChange:(BOOL)arg0;
- (BOOL)isBroadcastingStatusChange;
- (void)updatePreserveDataWithStatusType:(unsigned long long)arg0 statusContext:(id)arg1;
- (void)__updateDiggPreserveDataWithAwemeID:(id)arg0 type:(long long)arg1;
- (void)commentLikeActionNotification:(id)arg0;
- (void)__updateCommentDiggPreserveDataWithAwemeID:(id)arg0 cid:(id)arg1 userDigged:(BOOL)arg2 diggCount:(id)arg3;
- (id)__preserveKeyWithType:(unsigned long long)arg0;
- (id)__preserveIDWithType:(unsigned long long)arg0;
- (void)__observePreserveDataChangedWithType:(unsigned long long)arg0 newValue:(id)arg1 currentData:(id)arg2;
- (BOOL)shouldOverridePreserveData;
- (void)preserveDataDidUpdateWithType:(unsigned long long)arg0 oldValue:(id)arg1 newValue:(id)arg2 currentData:(id)arg3 isUpdate:(BOOL)arg4;
- (void)__broadcastStatusUpdate:(id)arg0;
- (void)__addObserverForFollowStatusWithOperation:(id)arg0;
- (void)__addObserverForDiggStatusWithOperation:(id)arg0;
- (void)__addObserverForCommentDiggStatusWithOperation:(id)arg0;
- (void)__onAwemeDiggNotification:(id)arg0;
- (void)setShouldOverridePreserveData:(BOOL)arg0;
- (void)preserveDataDidChangeByFront:(id)arg0;
- (id)init;
- (id)identifiers;
- (void).cxx_destruct;
- (void)setIdentifiers:(id)arg0;
- (void)dealloc;

@end
