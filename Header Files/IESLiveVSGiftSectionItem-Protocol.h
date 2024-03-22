//
//     Generated by private class-dump
//

@class IESLiveVSGiftPanelDataSharing, IESLiveVSGiftPanelCommonReactionCenter;

@protocol IESLiveVSGiftSectionItem <NSObject, IESLiveVSGiftSectionItemDiffable, IESLiveVSGiftPanelActions>

@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (retain, nonatomic) Class cellClass;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;

- (id)dataSharing;
- (void)setDataSharing:(id)arg0;
- (id)reactionCenter;
- (id)initWithDataSharing:(id)arg0 withReactionCenter:(id)arg1;
- (void)setReactionCenter:(id)arg0;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setCellClass:(Class)arg0;

@end
