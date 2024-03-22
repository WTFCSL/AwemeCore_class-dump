//
//     Generated by private class-dump
//

@class UILabel, AWEPOICityDetailTagItem, UIView;

@interface AWEPOICityDetailTagItemView : UIView {
    AWEPOICityDetailTagItem *_tagItem;
    UILabel *_textLabel;
    UIView *_selectedView;
    id /* block */ _clickBlock;
}

@property (retain, nonatomic) AWEPOICityDetailTagItem *tagItem;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *selectedView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setSelectedView:(id)arg0;
- (void)setTagItem:(id)arg0;
- (void)buildSubviews;
- (void)fillData;
- (id)tagItem;
- (void)setupSelectedStyle:(BOOL)arg0;
- (id)initWithTagItem:(id)arg0 selectedView:(id)arg1 clickBlock:(id /* block */)arg2;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setTextLabel:(id)arg0;
- (id)selectedView;
- (void)tapAction:(id)arg0;

@end
