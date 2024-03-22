//
//     Generated by private class-dump
//

@class NSString, RACCommand, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftDefaultOperationItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveCollectionViewItemProtocol> {
    BOOL _enable;
    Class _cellClass;
    id<IESLiveGiftPanelReaction> _reaction;
    RACCommand *_loginActionCommand;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    struct CGSize { double width; double height; } _cellSize;
}

@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly, nonatomic) RACCommand *loginActionCommand;
@property (readonly, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoginWithLiveAuth;
- (id)giftPanelDataSharing;
- (id)initWithGiftPanelDataSharing:(id)arg0;
- (id)loginActionCommand;
- (BOOL)enable;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setEnable:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setCellSize:(struct CGSize { double x0; double x1; })arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;
- (void)setCellClass:(Class)arg0;

@end