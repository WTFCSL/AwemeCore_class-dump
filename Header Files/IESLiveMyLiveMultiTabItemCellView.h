//
//     Generated by private class-dump
//

@class UILabel;

@interface IESLiveMyLiveMultiTabItemCellView : UICollectionViewCell {
    id _tabItem;
    UILabel *_title;
}

@property (retain, nonatomic) id tabItem;
@property (retain, nonatomic) UILabel *title;

- (id)tabItem;
- (void)setTabItem:(id)arg0;
- (void)updateWithTabItem:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (void)setSelected:(BOOL)arg0;
- (void)setTitle:(id)arg0;
- (void)setupViews;

@end