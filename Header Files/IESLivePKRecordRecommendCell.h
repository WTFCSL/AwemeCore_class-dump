//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface IESLivePKRecordRecommendCell : UIView {
    BOOL _selected;
    BOOL _showBottomLine;
    UILabel *_textLabel;
    id /* block */ _actionBlock;
    UIView *_bottomLine;
}

@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showBottomLine;

- (BOOL)showBottomLine;
- (void)setShowBottomLine:(BOOL)arg0;
- (BOOL)selected;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg0;
- (id /* block */)actionBlock;
- (void)setTextLabel:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setupViews;
- (id)bottomLine;
- (void)setBottomLine:(id)arg0;
- (void)tapAction;

@end
