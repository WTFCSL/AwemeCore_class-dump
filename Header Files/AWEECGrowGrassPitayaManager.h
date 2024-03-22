//
//     Generated by private class-dump
//

@class AWEJumpToMallBasicObject, NSMutableArray;

@interface AWEECGrowGrassPitayaManager : NSObject {
    AWEJumpToMallBasicObject *_basicInfo;
    NSMutableArray *_handlers;
}

@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) AWEJumpToMallBasicObject *basicInfo;

- (void)registerNotification;
- (void)registerPitayaMessageHandler;
- (id)basicInfo;
- (void)runPitayaWithBussinessName:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)getLeafProductsInfoWithProductIds:(id)arg0 completion:(id /* block */)arg1;
- (void)onCommentAddNotification:(id)arg0;
- (void)storeLastGrowGrassInfoWithType:(id)arg0 awemeID:(id)arg1;
- (void)storeCommentToPitaya:(id)arg0 isPurchaseIntention:(BOOL)arg1;
- (void)checkIsPurchaseComment:(id)arg0 completion:(id /* block */)arg1;
- (void)runPitayaTaskWithComment:(id)arg0;
- (BOOL)checkIsImageVideoWithModel:(id)arg0;
- (void)identifyImageGrowGrass;
- (void)setBasicInfo:(id)arg0;
- (void)setHandlers:(id)arg0;
- (id)handlers;
- (id)init;
- (void).cxx_destruct;
- (void)addHandler:(id)arg0;

@end