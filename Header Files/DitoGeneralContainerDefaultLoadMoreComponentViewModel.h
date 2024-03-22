//
//     Generated by private class-dump
//

@class NSString, DitoGeneralContainerDefaultLoadMoreComponentView;

@interface DitoGeneralContainerDefaultLoadMoreComponentViewModel : DitoComponentViewModel {
    BOOL _hasMore;
    BOOL _isHidden;
    BOOL _forceLight;
    BOOL _isNew;
    DitoGeneralContainerDefaultLoadMoreComponentView *_cell;
    NSString *_desc;
    unsigned long long _loadingStyle;
    NSString *_backgroundColor;
    double _verticalOffset;
    NSString *_targetNodeTag;
    NSString *_targetGroupTag;
    long long _remainCount;
    double _targetGroupHeight;
}

@property (copy, nonatomic) NSString *targetNodeTag;
@property (copy, nonatomic) NSString *targetGroupTag;
@property (nonatomic) long long remainCount;
@property (nonatomic) BOOL isNew;
@property (nonatomic) double targetGroupHeight;
@property (weak, nonatomic) DitoGeneralContainerDefaultLoadMoreComponentView *cell;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) unsigned long long loadingStyle;
@property (nonatomic) BOOL forceLight;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double verticalOffset;

- (void)setLoadingStyle:(unsigned long long)arg0;
- (unsigned long long)loadingStyle;
- (void)loadMore;
- (void)resetPreload;
- (BOOL)forceLight;
- (void)setForceLight:(BOOL)arg0;
- (void)updateNode:(id)arg0;
- (id)generalContext;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (void)didLoadPageModel:(id)arg0;
- (void)componentViewWillShow;
- (double)targetGroupContentHeight;
- (void)setTargetGroupTag:(id)arg0;
- (void)setRemainCount:(long long)arg0;
- (void)dispatchLoadMoreActionIfNeeded;
- (BOOL)targetGroupHeightHasChanged;
- (void)setTargetNodeTag:(id)arg0;
- (id)targetGroupTag;
- (long long)remainCount;
- (id)targetNodeTag;
- (void)updatePreload;
- (double)targetGroupHeight;
- (void)setTargetGroupHeight:(double)arg0;
- (void)parseData:(id)arg0;
- (id)desc;
- (void)setIsHidden:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setIsNew:(BOOL)arg0;
- (id)initWithNode:(id)arg0;
- (BOOL)isNew;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)backgroundColor;
- (BOOL)isHidden;
- (void)setDesc:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)cell;
- (double)verticalOffset;
- (void)setCell:(id)arg0;
- (void)setVerticalOffset:(double)arg0;

@end