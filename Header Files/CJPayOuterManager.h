//
//     Generated by private class-dump
//

@class NSString, CJPayNavigationController, NSMutableDictionary;
@protocol CJPayAPIDelegate;

@interface CJPayOuterManager : NSObject <CJPayOuterModule> {
    BOOL _isPreRequestCreateOrderDoing;
    CJPayNavigationController *_byteNavVC;
    id<CJPayAPIDelegate> _apiDelegate;
    NSMutableDictionary *_preRequestCreateOrderCacheDict;
    NSMutableDictionary *_preRequestCreateOrderCompletionBlocksDict;
}

@property (weak, nonatomic) CJPayNavigationController *byteNavVC;
@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (retain, nonatomic) NSMutableDictionary *preRequestCreateOrderCacheDict;
@property (retain, nonatomic) NSMutableDictionary *preRequestCreateOrderCompletionBlocksDict;
@property (nonatomic) BOOL isPreRequestCreateOrderDoing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (id)apiDelegate;
- (void)setApiDelegate:(id)arg0;
- (void)i_openOuterDeskWithSchemaParams:(id)arg0 withDelegate:(id)arg1;
- (void)i_requestCreateOrderBeforeOpenBytePayDeskWith:(id)arg0 completion:(id /* block */)arg1;
- (void)setPreRequestCreateOrderCacheDict:(id)arg0;
- (void)setPreRequestCreateOrderCompletionBlocksDict:(id)arg0;
- (void)setIsPreRequestCreateOrderDoing:(BOOL)arg0;
- (id)preRequestCreateOrderCacheDict;
- (BOOL)isPreRequestCreateOrderDoing;
- (id)preRequestCreateOrderCompletionBlocksDict;
- (id)byteNavVC;
- (void)setByteNavVC:(id)arg0;
- (id)p_outerDyPayTrackData:(id)arg0;
- (void)p_presentVCFrom:(id)arg0 navVC:(id)arg1;
- (void)p_openOuterDeskWithSchemaParam:(id)arg0 withDelegate:(id)arg1;
- (void)p_dyPayCreateOrderRequestWith:(id)arg0 completion:(id /* block */)arg1;
- (void)p_createOrderByTokenRequestWith:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;

@end
