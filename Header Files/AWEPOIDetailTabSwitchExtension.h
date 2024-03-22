//
//     Generated by private class-dump
//

@class DitoActionContext, NSMutableDictionary, DitoPageContext, NSString, NSNumber, DitoSwitchNodeActionOperation;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailTabSwitchExtension : NSObject <DitoExtensionProtocol> {
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    NSMutableDictionary *_listOffSetCache;
    DitoSwitchNodeActionOperation *_switchTagOperation;
    NSNumber *_targetOffsetY;
    DitoActionContext *_selectActionContext;
}

@property (retain, nonatomic) NSMutableDictionary *listOffSetCache;
@property (retain, nonatomic) DitoSwitchNodeActionOperation *switchTagOperation;
@property (retain, nonatomic) NSNumber *targetOffsetY;
@property (retain, nonatomic) DitoActionContext *selectActionContext;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoadingMore;
- (void)bindStateAndAction;
- (void)componentViewDidCompleteShow:(id)arg0;
- (void)initializeExtension;
- (id)switchTagOperation;
- (void)setSwitchTagOperation:(id)arg0;
- (void)setListOffSetCache:(id)arg0;
- (void)setSelectActionContext:(id)arg0;
- (void)handleSwitchContext:(id)arg0;
- (void)retryLoadTabData;
- (void)publishEventWithName:(id)arg0 eventAttachedParams:(id)arg1;
- (void)tabSelectList:(id)arg0 event:(id)arg1 isSticked:(BOOL)arg2 stickOffsetY:(double)arg3 nodeTag:(id)arg4;
- (id)selectActionContext;
- (id)cacheKeyWithTabId:(id)arg0;
- (void)cacheScrollState:(id)arg0 isSticked:(BOOL)arg1;
- (void)scrollListViewToOffset:(id)arg0 isSticked:(BOOL)arg1 stickOffsetY:(double)arg2 nodeTag:(id)arg3;
- (id)listOffSetCache;
- (void)setTargetOffsetY:(id)arg0;
- (id)targetOffsetY;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;

@end