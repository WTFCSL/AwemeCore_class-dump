//
//     Generated by private class-dump
//

@protocol AWEFeedDoubleColumnSectionControllerDelegate <NSObject>

@property (nonatomic) BOOL didSelectedItem;
@property (nonatomic) BOOL isTransiting;

- (void)didSelectAwemeModel:(id)arg0;
- (BOOL)isTransiting;
- (id)selectedCellWithIndex:(long long)arg0;
- (long long)maxVisibleIndex;
- (void)setIsTransiting:(BOOL)arg0;
- (BOOL)didSelectedItem;
- (void)setDidSelectedItem:(BOOL)arg0;

@optional

- (void)willDisplayCell:(id)arg0 index:(long long)arg1;
- (void)didEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (void)didSelectAwemeModel:(id)arg0 sectionIndex:(long long)arg1;

@end
