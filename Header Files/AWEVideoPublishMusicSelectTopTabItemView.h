//
//     Generated by private class-dump
//

@class AWEVideoPublishMusicSelectTopTabItemData, UILabel, UIView, UIButton;

@interface AWEVideoPublishMusicSelectTopTabItemView : UIView {
    double _titleLabelWidth;
    UILabel *_titleLable;
    UIView *_underLineView;
    id /* block */ _clickBlock;
    UIButton *_maskButton;
    AWEVideoPublishMusicSelectTopTabItemData *_itemData;
}

@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *underLineView;
@property (retain, nonatomic) AWEVideoPublishMusicSelectTopTabItemData *itemData;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)buttonClicked:(id)arg0;
- (void)setClickBlock:(id /* block */)arg0;
- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (id /* block */)clickBlock;
- (void)p_setupAccessibility;
- (void)setMaskButton:(id)arg0;
- (id)maskButton;
- (id)initWithItemData:(id)arg0;
- (id)underLineView;
- (void)setUnderLineView:(id)arg0;
- (void)refresh;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setupViews;
- (id)itemData;
- (void)setItemData:(id)arg0;

@end
