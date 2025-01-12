//
//     Generated by private class-dump
//

@class UIView;

@protocol AWEDCFeedCellElementProtocol <AWEDCFeedCellElementPlayControlProtocol, AWEDCFeedCellElementScrollDisplayProtocol>

+ (BOOL)canShowWithAwemeModel:(id)arg0 context:(id)arg1;
+ (double)heightWithCellWidth:(double)arg0 awemeModel:(id)arg1 context:(id)arg2;
+ (double)lastBottomMargin;
+ (long long)elementStyle;
+ (double)bottomMargin;

@property (readonly, nonatomic) UIView *elementView;
@property (readonly, nonatomic) BOOL hasAddedToContainer;

- (id)elementView;
- (void)configWithModel:(id)arg0 context:(id)arg1 cellWidth:(double)arg2;
- (void)configWithModel:(id)arg0 context:(id)arg1;
- (BOOL)hasAddedToContainer;
- (void)reset;

@optional

- (void)themeDidChange:(long long)arg0;

@end
