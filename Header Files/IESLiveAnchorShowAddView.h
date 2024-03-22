//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIButton, MASConstraint, UITextField, NSMutableArray, UILabel, UIScrollView;

@interface IESLiveAnchorShowAddView : UIView <UITextFieldDelegate> {
    BOOL _willDismiss;
    id /* block */ _sureHandler;
    long long _remainCount;
    long long _maxLength;
    UIView *_container;
    UIView *_topView;
    UIView *_topLineView;
    UIButton *_addButton;
    UIButton *_doneButton;
    UILabel *_titleLabel;
    UITextField *_textField;
    UILabel *_descLabel;
    UIScrollView *_scrollView;
    MASConstraint *_containerBottom;
    MASConstraint *_scrollTop;
    MASConstraint *_scrollHeight;
    NSArray *_observers;
    NSMutableArray *_topics;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) MASConstraint *containerBottom;
@property (retain, nonatomic) MASConstraint *scrollTop;
@property (retain, nonatomic) MASConstraint *scrollHeight;
@property (copy, nonatomic) NSArray *observers;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL willDismiss;
@property (copy, nonatomic) id /* block */ sureHandler;
@property (nonatomic) long long remainCount;
@property (nonatomic) long long maxLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)p_addNotifications;
- (void)setWillDismiss:(BOOL)arg0;
- (void)setContainerBottom:(id)arg0;
- (id)containerBottom;
- (void)setRemainCount:(long long)arg0;
- (long long)remainCount;
- (void)p_handleTabGestureAction;
- (void)handleKeyboardStatusDidChangeWithHidden:(BOOL)arg0 note:(id)arg1;
- (double)getCellWidthWithItem:(id)arg0;
- (void)p_textFieldTextDidChange:(id)arg0;
- (void)p_sureButtonClicked;
- (void)p_addNewTopic;
- (id /* block */)sureHandler;
- (void)p_refreshCells;
- (void)p_scrollToBottom;
- (void)setSureHandler:(id /* block */)arg0;
- (id)container;
- (void)setTextField:(id)arg0;
- (void)setScrollView:(id)arg0;
- (id)textField;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)titleLabel;
- (id)observers;
- (void)setTopics:(id)arg0;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)willDismiss;
- (void)setObservers:(id)arg0;
- (void)setMaxLength:(long long)arg0;
- (void)setDoneButton:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)scrollView;
- (long long)maxLength;
- (id)topics;
- (void)setScrollTop:(id)arg0;
- (id)scrollTop;
- (id)scrollHeight;
- (id)topView;
- (void)setTopView:(id)arg0;
- (id)addButton;
- (id)topLineView;
- (void)setTopLineView:(id)arg0;
- (void)setAddButton:(id)arg0;
- (void)p_commonInit;
- (void)setScrollHeight:(id)arg0;

@end
