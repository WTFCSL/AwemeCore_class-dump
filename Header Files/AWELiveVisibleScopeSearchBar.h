//
//     Generated by private class-dump
//

@class UIImageView, UITextField, UIButton;

@interface AWELiveVisibleScopeSearchBar : UIView {
    UITextField *_textField;
    UIButton *_clearBtn;
    id /* block */ _clearSearchViewBlock;
    UIImageView *_searchIconImageView;
}

@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearBtn;
@property (copy, nonatomic) id /* block */ clearSearchViewBlock;

- (void)clearButtonClicked:(id)arg0;
- (void)setupViewFrame;
- (id)clearBtn;
- (void)clearSearchView;
- (void)setClearBtn:(id)arg0;
- (id /* block */)clearSearchViewBlock;
- (void)setClearSearchViewBlock:(id /* block */)arg0;
- (void)setTextField:(id)arg0;
- (id)textField;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)searchIconImageView;
- (void)setSearchIconImageView:(id)arg0;

@end
