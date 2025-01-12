//
//     Generated by private class-dump
//

@class NSMutableArray, UIView;

@interface IESLiveEmoticonTabBar : UIView {
    id /* block */ _didSelectTabWithPageItem;
    UIView *_backgroundView;
    NSMutableArray *_itemViews;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) id /* block */ didSelectTabWithPageItem;

- (void)setDidSelectTabWithPageItem:(id /* block */)arg0;
- (void)loadWithPageItems:(id)arg0;
- (void)locatePageItem:(id)arg0;
- (id)createTabItemViewWithPageItem:(id)arg0;
- (void)selectTab:(id)arg0;
- (id /* block */)didSelectTabWithPageItem;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setupViews;
- (id)itemViews;
- (void)setItemViews:(id)arg0;

@end
