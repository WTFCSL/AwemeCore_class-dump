//
//     Generated by private class-dump
//

@class UIView;

@protocol IESECWinFeedService <NSObject>

@property (weak, nonatomic) UIView *targetBubbleView;
@property (nonatomic) BOOL showFilterGuideBubble;

- (BOOL)hasSortCell;
- (long long)topCardsCount;
- (double)sortCellHeight;
- (void)setFilterGuideBubbleShowed:(id)arg0;
- (BOOL)getFilterGuideBubbleShouldShow:(id)arg0;
- (void)setProductCellHeight:(double)arg0 withCacheKey:(id)arg1;
- (double)getProductCellHeightWithCacheKey:(id)arg0;
- (void)clearCellHeight;
- (id)targetBubbleView;
- (void)setTargetBubbleView:(id)arg0;
- (BOOL)showFilterGuideBubble;
- (void)setShowFilterGuideBubble:(BOOL)arg0;

@end