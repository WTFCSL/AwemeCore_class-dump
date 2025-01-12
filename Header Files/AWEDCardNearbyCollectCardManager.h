//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;
@protocol AWEDCardBaseManagerProtocol;

@interface AWEDCardNearbyCollectCardManager : NSObject <AWEDCardBizManagerProtocol> {
    BOOL _hasShownCard;
    BOOL _hasInsertedCard;
    id<AWEDCardBaseManagerProtocol> _delegate;
    AWEAwemeModel *_lastCollectionCard;
}

@property (retain, nonatomic) AWEAwemeModel *lastCollectionCard;
@property (nonatomic) BOOL hasShownCard;
@property (nonatomic) BOOL hasInsertedCard;
@property (weak, nonatomic) id<AWEDCardBaseManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDeleteDCard:(id)arg0;
- (void)willDisplayDCard:(id)arg0;
- (BOOL)checkIfCanInsertDCard:(id)arg0;
- (void)didInsertDCard:(id)arg0 targetIndex:(long long)arg1 totalFeedCount:(long long)arg2;
- (id)managerScene;
- (void)setLastCollectionCard:(id)arg0;
- (void)setHasInsertedCard:(BOOL)arg0;
- (void)setHasShownCard:(BOOL)arg0;
- (id)lastCollectionCard;
- (BOOL)hasShownCard;
- (BOOL)hasInsertedCard;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
