//
//     Generated by private class-dump
//

@class RACCommand;
@protocol IESLiveGiftPanelReaction;

@protocol IESLiveCollectionViewItemProtocol <NSObject>

@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;

- (id)initWithGiftPanelDataSharing:(id)arg0;
- (BOOL)enable;
- (Class)cellClass;
- (void)setEnable:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setCellSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCellClass:(Class)arg0;

@optional

- (void)updateFirstChargeBanner;
- (void)didGiftPanelCollectionVMsUpdate;
- (void)didGiftExtraInfoUpdate:(id)arg0;
- (id)reaction;
- (void)setReaction:(id)arg0;
- (void)didGiftPanelShow;
- (void)removeGiftGesture;
- (id)didSelectItemCommand;
- (void)setDidSelectItemCommand:(id)arg0;

@end