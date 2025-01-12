//
//     Generated by private class-dump
//

@class AWEStickerApplyHandlerContainer;

@protocol AWEStickerApplyHandlerProtocol <NSObject>

@property (weak, nonatomic) AWEStickerApplyHandlerContainer *container;

- (id)container;
- (void)setContainer:(id)arg0;

@optional

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)handlerDidBecomeActive;
- (void)camera:(id)arg0 didApplySticker:(id)arg1 success:(BOOL)arg2;
- (void)camera:(id)arg0 didRecvMessage:(id)arg1;
- (void)camera:(id)arg0 willApplySticker:(id)arg1;
- (void)camera:(id)arg0 willApplySticker:(id)arg1 propSource:(long long)arg2;
- (void)didChangeLayoutManager:(id)arg0;
- (void)didSelectNewSticker:(id)arg0 oldSticker:(id)arg1;
- (void)camera:(id)arg0 didTakeAction:(long long)arg1 error:(id)arg2 data:(id)arg3;

@end
