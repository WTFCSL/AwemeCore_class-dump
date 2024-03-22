//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWESearchAnchorItemView : UIView {
    BOOL _tooShortToDisplay;
    double _itemWidth;
    double _maxWidth;
    UILabel *_itemLabel;
    UIImageView *_frontIcon;
    UIImageView *_backIcon;
    id /* block */ _touchBeganBlock;
    id /* block */ _touchCancelledBlock;
}

@property (nonatomic) double itemWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL tooShortToDisplay;
@property (retain, nonatomic) UILabel *itemLabel;
@property (retain, nonatomic) UIImageView *frontIcon;
@property (retain, nonatomic) UIImageView *backIcon;
@property (copy, nonatomic) id /* block */ touchBeganBlock;
@property (copy, nonatomic) id /* block */ touchCancelledBlock;

- (void)updateUITheme;
- (void)setBackIcon:(id)arg0;
- (id)backIcon;
- (id)getFrontIconImageWithIsBGColorWhite:(BOOL)arg0;
- (void)setFrontIcon:(id)arg0;
- (void)setTooShortToDisplay:(BOOL)arg0;
- (id)getBackIconImageWithIsBGColorWhite:(BOOL)arg0;
- (id)frontIcon;
- (BOOL)enablePredictFetch;
- (id /* block */)touchBeganBlock;
- (id /* block */)touchCancelledBlock;
- (BOOL)tooShortToDisplay;
- (void)setTouchBeganBlock:(id /* block */)arg0;
- (void)setTouchCancelledBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)arg0;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (double)maxWidth;
- (void)setItemWidth:(double)arg0;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (double)itemWidth;
- (id)itemLabel;
- (void)setItemLabel:(id)arg0;
- (id)initWithModel:(id)arg0 maxWidth:(double)arg1;
- (void)updateWithModel:(id)arg0;

@end
