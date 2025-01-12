//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, AWESearchAnchorModel;
@protocol AWESearchAnchorViewMultiCellBarItemViewProtocol;

@interface AWEPlayInteractionSearchAnchorViewMultiCellBarItemView : UIView {
    id<AWESearchAnchorViewMultiCellBarItemViewProtocol> _delegate;
    UITapGestureRecognizer *_tapRecognizer;
    AWESearchAnchorModel *_anchorModel;
    long long _index;
    double _totalWidth;
}

@property (weak, nonatomic) id<AWESearchAnchorViewMultiCellBarItemViewProtocol> delegate;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) AWESearchAnchorModel *anchorModel;
@property (nonatomic) long long index;
@property (nonatomic) double totalWidth;

+ (double)itemViewWidthWithAnchorModel:(id)arg0 maxWidth:(double)arg1 index:(long long)arg2;

- (void)configWithModel:(id)arg0;
- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (void)setTotalWidth:(double)arg0;
- (void)itemViewJumpAction;
- (id)initWithModel:(id)arg0 totalWidth:(double)arg1 index:(long long)arg2;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)tapRecognizer;
- (id)delegate;
- (long long)index;
- (void)setTapRecognizer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (double)totalWidth;

@end
