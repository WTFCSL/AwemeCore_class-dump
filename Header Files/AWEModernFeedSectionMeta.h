//
//     Generated by private class-dump
//

@interface AWEModernFeedSectionMeta : NSObject <NSCopying> {
    BOOL _showAccessoryCell;
    BOOL _hideCell;
    BOOL _showCellHeaderView;
    BOOL _showCellFooterView;
    double _concreteCellWidth;
    double _concreteCellHeight;
    double _accessoryCellHeight;
    double _mainCellHeight;
    double _attachmentCellHeight;
}

@property (nonatomic) double concreteCellWidth;
@property (nonatomic) double concreteCellHeight;
@property (nonatomic) double accessoryCellHeight;
@property (nonatomic) BOOL showAccessoryCell;
@property (nonatomic) BOOL hideCell;
@property (nonatomic) BOOL showCellHeaderView;
@property (nonatomic) BOOL showCellFooterView;
@property (nonatomic) double mainCellHeight;
@property (nonatomic) double attachmentCellHeight;

- (double)concreteCellHeight;
- (double)accessoryCellHeight;
- (void)setAccessoryCellHeight:(double)arg0;
- (void)setShowAccessoryCell:(BOOL)arg0;
- (void)setHideCell:(BOOL)arg0;
- (void)setConcreteCellWidth:(double)arg0;
- (double)concreteCellWidth;
- (void)setConcreteCellHeight:(double)arg0;
- (void)setMainCellHeight:(double)arg0;
- (void)setAttachmentCellHeight:(double)arg0;
- (BOOL)hideCell;
- (BOOL)showAccessoryCell;
- (double)mainCellHeight;
- (double)attachmentCellHeight;
- (BOOL)showCellHeaderView;
- (void)setShowCellHeaderView:(BOOL)arg0;
- (BOOL)showCellFooterView;
- (void)setShowCellFooterView:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
