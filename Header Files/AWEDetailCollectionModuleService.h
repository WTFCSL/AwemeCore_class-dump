//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDetailCollectionModuleService : HTSService <AWEDetailCollectionModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestTaskItemWithID:(id)arg0 completion:(id /* block */)arg1;
- (void)requestChallengeItemWithID:(id)arg0 isCommerce:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)newChallengeDetailDescView;
- (id)challengeListDataController;
- (id)showChallengeDetailHalfScreenOnVC:(id)arg0 challengeID:(id)arg1 challengeName:(id)arg2 isCommerce:(BOOL)arg3 completion:(id /* block */)arg4 dismissBlock:(id /* block */)arg5;
- (void)requestChallengeItemsWithIDArray:(id)arg0 completion:(id /* block */)arg1;
- (id)convertModelToString:(id)arg0;
- (id)musicListDataController;
- (id)stickerDataControllerWithId:(id)arg0;
- (id)mvDataControllerWithId:(id)arg0;
- (id)relatedTemplateDataControllerWithParam:(id)arg0;
- (void)requestHashTagItemWithName:(id)arg0 completion:(id /* block */)arg1;
- (Class)musicManagerClass;
- (void)trackEnteringStickerDetailIfNeededWithURLString:(id)arg0 info:(id)arg1;
- (void)trackOpeningCameraWithStickerIfNeededWithURLString:(id)arg0 info:(id)arg1;
- (BOOL)isURLStringLinkedToCamera:(id)arg0;
- (Class)musicDetailViewControllerClass;
- (Class)propDetailViewControllerClass;
- (id)detailCollectionStorage;
- (id)convertString:(id)arg0 toModelClass:(Class)arg1;
- (void)customTransitionWithInfo:(id)arg0;

@end
