//
//     Generated by private class-dump
//

@class DitoGeneralContainerTagItem, UILabel, LOTAnimationView;

@interface DitoGeneralContainerTagItemView : UIView {
    DitoGeneralContainerTagItem *_tagItem;
    UILabel *_textLabel;
    LOTAnimationView *_unselectedLotView;
    LOTAnimationView *_selectedLotView;
    id /* block */ _clickBlock;
}

@property (retain, nonatomic) DitoGeneralContainerTagItem *tagItem;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) LOTAnimationView *unselectedLotView;
@property (retain, nonatomic) LOTAnimationView *selectedLotView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)setTagItem:(id)arg0;
- (void)buildSubviews;
- (void)fillData;
- (id)tagItem;
- (void)setupSelectedStyle:(BOOL)arg0;
- (id)createLotViewWithURLString:(id)arg0;
- (id)selectedLotView;
- (id)unselectedLotView;
- (id)initWithTagItem:(id)arg0 clickBlock:(id /* block */)arg1;
- (void)setUnselectedLotView:(id)arg0;
- (void)setSelectedLotView:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setTextLabel:(id)arg0;
- (void)tapAction:(id)arg0;

@end