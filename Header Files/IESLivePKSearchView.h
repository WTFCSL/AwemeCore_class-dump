//
//     Generated by private class-dump
//

@class IESLivePKSearchViewConfig, UIImageView, UIVisualEffectView, UILabel;

@interface IESLivePKSearchView : UIView {
    BOOL _editing;
    id /* block */ _beginEditBlock;
    id /* block */ _clickHistoryBlock;
    UIImageView *_searchBackgroundView;
    UIImageView *_searchGuideImage;
    UILabel *_guidanceLabel;
    UIImageView *_historyHintImageView;
    UIVisualEffectView *_effectView;
    IESLivePKSearchViewConfig *_config;
}

@property (retain, nonatomic) UIImageView *searchBackgroundView;
@property (retain, nonatomic) UIImageView *searchGuideImage;
@property (retain, nonatomic) UILabel *guidanceLabel;
@property (retain, nonatomic) UIImageView *historyHintImageView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) IESLivePKSearchViewConfig *config;
@property (copy, nonatomic) id /* block */ beginEditBlock;
@property (copy, nonatomic) id /* block */ clickHistoryBlock;
@property (nonatomic) BOOL editing;

- (id /* block */)beginEditBlock;
- (void)setBeginEditBlock:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (id)guidanceLabel;
- (void)setGuidanceLabel:(id)arg0;
- (void)updateWithSearchModel:(id)arg0 isActivity:(BOOL)arg1;
- (void)showPKRecordVC;
- (void)setClickHistoryBlock:(id /* block */)arg0;
- (void)setSearchGuideImage:(id)arg0;
- (id)searchGuideImage;
- (id /* block */)clickHistoryBlock;
- (id)historyHintImageView;
- (void)setHistoryHintImageView:(id)arg0;
- (BOOL)editing;
- (void)setConfig:(id)arg0;
- (id)effectView;
- (void).cxx_destruct;
- (id)config;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setSearchBackgroundView:(id)arg0;
- (void)setEditing:(BOOL)arg0;
- (void)setEffectView:(id)arg0;
- (id)searchBackgroundView;
- (void)setupUI;

@end
