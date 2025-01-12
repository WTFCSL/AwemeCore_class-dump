//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol AWEFeedShareReflowCardAndVideoManagerProtocol;

@interface AWEFeedUserRecommendBigCardController : AWEFeedFetchInsertBaseCardController <AWEFeedShareReflowCardAndVideoDelegate> {
    NSObject<AWEFeedShareReflowCardAndVideoManagerProtocol> *_shareReflowManager;
    NSMutableDictionary *_processModels;
}

@property (retain, nonatomic) NSObject<AWEFeedShareReflowCardAndVideoManagerProtocol> *shareReflowManager;
@property (retain, nonatomic) NSMutableDictionary *processModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareReflowManager;
- (void)cardWillDisplay:(id)arg0 withAweme:(id)arg1;
- (BOOL)shouldCancelInsertCard:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 willInsertForRowAtIndexPath:(id)arg3;
- (id)trackParamsWithBusinessInfo:(id)arg0;
- (void)setShareReflowManager:(id)arg0;
- (void)setProcessModels:(id)arg0;
- (void)clickShareReflowAlertOpenButton:(id)arg0;
- (void)finishRequestAwemeItemInDetailVC:(id)arg0;
- (void)videoDisappear:(id)arg0;
- (void)showShareReflowAlert:(id)arg0;
- (id)processModels;
- (void)fetchShareReflowCard:(id)arg0;
- (void)fetchShareReflowCardAndVideo:(id)arg0;
- (void)trackShareCardFilter:(id)arg0;
- (void)insertShareReflowCardToListIfNeeded:(id)arg0 delta:(long long)arg1 completion:(id /* block */)arg2;
- (void)insertShareReflowVideo:(id)arg0 completion:(id /* block */)arg1;
- (id)transferInfoModelToUserModel:(id)arg0;
- (void)trackTokenFindReturnWithAwemeID:(id)arg0 enterMethod:(id)arg1;
- (BOOL)isVideoBelongToShareReflow:(id)arg0;
- (id)transferInfoModelToAwemeList:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;

@end
