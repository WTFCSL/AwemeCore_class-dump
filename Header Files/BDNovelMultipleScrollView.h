//
//     Generated by private class-dump
//

@class NSMutableArray, UIView;
@protocol BDNovelMultipleScrollViewDelegate;

@interface BDNovelMultipleScrollView : UIScrollView {
    BOOL _disableAutoOffset;
    BOOL _forceDisableAutoOffset;
    UIView *_contentView;
    NSMutableArray *_subviewsInLayerOrderedArray;
}

@property (retain, nonatomic) NSMutableArray *subviewsInLayerOrderedArray;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<BDNovelMultipleScrollViewDelegate> delegate;
@property (nonatomic) BOOL disableAutoOffset;
@property (nonatomic) BOOL forceDisableAutoOffset;

+ (void)initialize;

- (void)willRemoveSubviewFromContainer:(id)arg0;
- (void)removeAllSubviewFromContentView;
- (void)setDisableAutoOffset:(BOOL)arg0;
- (id)subviewsInLayerOrderedArray;
- (void)addSubviewToContentView:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)didAddSubviewToContainer:(id)arg0 atIndex:(unsigned long long)arg1;
- (BOOL)disableAutoOffset;
- (BOOL)forceDisableAutoOffset;
- (void)autoAdapterOffset;
- (void)layoutSubViewsV2;
- (void)addSubviewToContentView:(id)arg0;
- (void)layoutSubviewsV1;
- (void)setForceDisableAutoOffset:(BOOL)arg0;
- (void)setSubviewsInLayerOrderedArray:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)setContentView:(id)arg0;

@end
