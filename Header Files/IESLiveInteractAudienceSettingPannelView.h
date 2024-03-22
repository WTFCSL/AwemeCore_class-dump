//
//     Generated by private class-dump
//

@class UIScrollView, NSArray, UIView;

@interface IESLiveInteractAudienceSettingPannelView : UIView {
    BOOL _disableBackbBtn;
    long long _itemType;
    NSArray *_items;
    UIScrollView *_scrollView;
    UIView *_contentView;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL disableBackbBtn;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *items;

- (void)didClickBackBtn;
- (BOOL)disableBackbBtn;
- (id)buildSettingViewForItem:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 disableBackBtn:(BOOL)arg1;
- (void)renderItems:(id)arg0;
- (void)setDisableBackbBtn:(BOOL)arg0;
- (long long)itemType;
- (void)setScrollView:(id)arg0;
- (void)setItems:(id)arg0;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)contentView;
- (id)scrollView;
- (void)setContentView:(id)arg0;

@end
