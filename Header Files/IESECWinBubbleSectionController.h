//
//     Generated by private class-dump
//

@class IESECServiceProxy, IESECWinBubbleObject, FBKVOController, IESECWinContext;
@protocol IESECWinLynxCardService, IESECWinBubbleService, IESECWinSplitService;

@interface IESECWinBubbleSectionController : IGListSectionController {
    BOOL _extraSchemaOpened;
    BOOL _bubblePageShowed;
    IESECWinContext *_context;
    IESECWinBubbleObject *_object;
    FBKVOController *_KVOController;
    IESECServiceProxy<IESECWinBubbleService> *_bubbleService;
    IESECServiceProxy<IESECWinLynxCardService> *_lynxCardService;
    IESECServiceProxy<IESECWinSplitService> *_splitService;
}

@property (nonatomic) BOOL extraSchemaOpened;
@property (nonatomic) BOOL bubblePageShowed;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECWinBubbleObject *object;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBubbleService> *bubbleService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;

- (id)KVOController;
- (void)setKVOController:(id)arg0;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (void)showGuidePopover;
- (id)splitService;
- (void)setSplitService:(id)arg0;
- (id)bubbleService;
- (id)lynxCardService;
- (void)clickBubbleWithIndex:(long long)arg0;
- (void)showBubbleWithIndex:(long long)arg0;
- (id)getBubbleCellWithIndex:(long long)arg0;
- (unsigned long long)getGuidePopoverDirectionWithBubbleIndex:(long long)arg0;
- (BOOL)extraSchemaOpened;
- (void)setExtraSchemaOpened:(BOOL)arg0;
- (BOOL)bubblePageShowed;
- (void)setBubblePageShowed:(BOOL)arg0;
- (void)setBubbleService:(id)arg0;
- (void)setLynxCardService:(id)arg0;
- (long long)numberOfItems;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)object;
- (id)context;
- (void)setObject:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
