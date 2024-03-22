//
//     Generated by private class-dump
//

@class DUXCheckBox, NSString, UITextField, UILabel, UIView, UIButton;
@protocol AWEMusicPlaylistTitleInputViewDelegate;

@interface AWEMusicPlaylistTitleInputView : UIView {
    BOOL _showPrivateCreate;
    NSString *_title;
    NSString *_completionButtonTitle;
    id<AWEMusicPlaylistTitleInputViewDelegate> _delegate;
    UIButton *_cancelBtn;
    UIButton *_finishBtn;
    UIButton *_clearBtn;
    UILabel *_titleLB;
    UITextField *_textField;
    UIView *_textFieldBg;
    UIView *_privateContainer;
    DUXCheckBox *_privateBox;
    UILabel *_privateLB;
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *finishBtn;
@property (retain, nonatomic) UIButton *clearBtn;
@property (retain, nonatomic) UILabel *titleLB;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *textFieldBg;
@property (retain, nonatomic) UIView *privateContainer;
@property (retain, nonatomic) DUXCheckBox *privateBox;
@property (retain, nonatomic) UILabel *privateLB;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *completionButtonTitle;
@property (nonatomic) BOOL showPrivateCreate;
@property (weak, nonatomic) id<AWEMusicPlaylistTitleInputViewDelegate> delegate;

- (void)awe_themeReload;
- (void)handleTextFieldInputEditingChanged:(id)arg0;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (id)clearBtn;
- (void)setClearBtn:(id)arg0;
- (id)titleLB;
- (void)setTitleLB:(id)arg0;
- (id)finishBtn;
- (id)textFieldBg;
- (id)privateBox;
- (id)privateLB;
- (void)p_clearBtnClick;
- (void)disKeyboard;
- (void)setShowPrivateCreate:(BOOL)arg0;
- (BOOL)showPrivateCreate;
- (void)setFinishBtn:(id)arg0;
- (void)setTextFieldBg:(id)arg0;
- (void)setPrivateBox:(id)arg0;
- (void)setPrivateLB:(id)arg0;
- (void)setPrivateContainer:(id)arg0;
- (id)privateContainer;
- (void)setTextField:(id)arg0;
- (id)textField;
- (void).cxx_destruct;
- (void)showKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupViews;
- (id)completionButtonTitle;
- (void)setCompletionButtonTitle:(id)arg0;

@end