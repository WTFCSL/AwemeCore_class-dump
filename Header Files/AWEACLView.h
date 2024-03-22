//
//     Generated by private class-dump
//

@class DUXNavigationBar, NSString, UIButton, UIImageView, UILabel, DUXNavigationBarImageAction;

@interface AWEACLView : UIView {
    long long _itemType;
    long long _pageType;
    NSString *_topTitle;
    NSString *_title;
    NSString *_desc;
    NSString *_buttonDesc;
    NSString *_imageName;
    id /* block */ _buttonClickCallback;
    id /* block */ _action;
    DUXNavigationBar *_duxNaviBar;
    DUXNavigationBarImageAction *_duxImageAction;
    UIButton *_button;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UILabel *_descLabel;
}

@property (nonatomic) long long itemType;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *topTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) id /* block */ buttonClickCallback;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) DUXNavigationBar *duxNaviBar;
@property (retain, nonatomic) DUXNavigationBarImageAction *duxImageAction;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)initView;
- (id)buttonDesc;
- (void)setButtonDesc:(id)arg0;
- (void)setDuxNaviBar:(id)arg0;
- (id)duxNaviBar;
- (void)setDuxImageAction:(id)arg0;
- (id)duxImageAction;
- (void)openButtonClicked;
- (void)setButtonClickCallback:(id /* block */)arg0;
- (id /* block */)buttonClickCallback;
- (id)initWithButtonDesc:(id)arg0 title:(id)arg1 imageName:(id)arg2 desc:(id)arg3 topTitle:(id)arg4 itemType:(long long)arg5 pageType:(long long)arg6 buttonClickCallback:(id /* block */)arg7 action:(id /* block */)arg8;
- (long long)pageType;
- (id)desc;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (id)button;
- (void)setButton:(id)arg0;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (id)title;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (void)setPageType:(long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setDesc:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)topTitle;
- (void)setTopTitle:(id)arg0;

@end
