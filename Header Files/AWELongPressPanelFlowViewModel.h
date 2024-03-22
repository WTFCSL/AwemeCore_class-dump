//
//     Generated by private class-dump
//

@class FlowCellModel;
@protocol AWEIMQuickReplyControllerHandlerPortocol, AWEIMShareModelProtocol;

@interface AWELongPressPanelFlowViewModel : AWELongPressPanelBaseViewModel {
    BOOL _didClick;
    FlowCellModel *_flowCellModel;
    id<AWEIMQuickReplyControllerHandlerPortocol> _quickReplyHandler;
    id<AWEIMShareModelProtocol> _shareModel;
}

@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> quickReplyHandler;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) FlowCellModel *flowCellModel;
@property (nonatomic) BOOL didClick;

+ (id)longPressPanelViewModel;

- (BOOL)didClick;
- (BOOL)needShow;
- (void)setDidClick:(BOOL)arg0;
- (void)setQuickReplyHandler:(id)arg0;
- (id)quickReplyHandler;
- (void)configVM;
- (id)flowCellModel;
- (void)setFlowCellModel:(id)arg0;
- (void)shareSuccessLetShareCountPlusOne;
- (void)showShareText;
- (void).cxx_destruct;
- (id)shareModel;
- (void)setShareModel:(id)arg0;

@end
