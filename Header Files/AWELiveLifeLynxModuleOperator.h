//
//     Generated by private class-dump
//

@class NSString, AWELiveLifeLynxView;

@interface AWELiveLifeLynxModuleOperator : NSObject {
    id /* block */ _actionBtnClickedBlock;
    id /* block */ _cardClickedBlock;
    id /* block */ _lynxCloseLiveLifeShelf;
    id /* block */ _getViewFrameBlock;
    AWELiveLifeLynxView *_lynxModule;
    NSString *_processId;
    id /* block */ _processCompletion;
}

@property (retain, nonatomic) AWELiveLifeLynxView *lynxModule;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) id /* block */ processCompletion;
@property (copy, nonatomic) id /* block */ actionBtnClickedBlock;
@property (copy, nonatomic) id /* block */ cardClickedBlock;
@property (copy, nonatomic) id /* block */ lynxCloseLiveLifeShelf;
@property (copy, nonatomic) id /* block */ getViewFrameBlock;

- (void)setCardClickedBlock:(id /* block */)arg0;
- (void)sendClickEventWithParams:(id)arg0;
- (id /* block */)cardClickedBlock;
- (void)setupLynxModule;
- (void)setLynxModule:(id)arg0;
- (id)lynxModule;
- (id /* block */)processCompletion;
- (void)setProcessCompletion:(id /* block */)arg0;
- (id /* block */)actionBtnClickedBlock;
- (id /* block */)lynxCloseLiveLifeShelf;
- (id /* block */)getViewFrameBlock;
- (void)tryReload;
- (id)syncProcessCardList:(id)arg0 isFullList:(BOOL)arg1;
- (id)processMessage:(id)arg0 withCardData:(id)arg1;
- (void)setActionBtnClickedBlock:(id /* block */)arg0;
- (void)setLynxCloseLiveLifeShelf:(id /* block */)arg0;
- (void)setGetViewFrameBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setProcessId:(id)arg0;
- (BOOL)isReady;
- (id)processId;
- (void)dealloc;
- (id)moduleVersion;

@end
