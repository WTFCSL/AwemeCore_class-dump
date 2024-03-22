//
//     Generated by private class-dump
//

@class NSArray, DUXTextField, UIView, NSMutableArray;

@interface DUXSearchBar : UIView {
    UIView *_containerView;
    DUXTextField *_textField;
    UIView *_contentContainerView;
    UIView *_leftActionContainerView;
    NSMutableArray *_leftActionsArray;
    UIView *_rightActionContainerView;
    NSMutableArray *_rightActionsArray;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) DUXTextField *textField;
@property (retain, nonatomic) UIView *leftActionContainerView;
@property (retain, nonatomic) NSMutableArray *leftActionsArray;
@property (retain, nonatomic) UIView *rightActionContainerView;
@property (retain, nonatomic) NSMutableArray *rightActionsArray;
@property (readonly, copy, nonatomic) NSArray *leftActions;
@property (readonly, copy, nonatomic) NSArray *rightActions;

- (void)addRightAction:(id)arg0;
- (void)addLeftAction:(id)arg0;
- (void)removeAllRightAction;
- (id)rightActions;
- (void)removeAllLeftAction;
- (id)rightActionContainerView;
- (id)leftActions;
- (id)leftActionContainerView;
- (id)leftActionsArray;
- (double)stackLengthWithActionsArray:(id)arg0;
- (id)rightActionsArray;
- (void)setLeftActionsArray:(id)arg0;
- (void)setRightActionsArray:(id)arg0;
- (void)setLeftActionContainerView:(id)arg0;
- (void)setRightActionContainerView:(id)arg0;
- (void)setTextField:(id)arg0;
- (BOOL)isFirstResponder;
- (id)textField;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setContentContainerView:(id)arg0;
- (BOOL)endEditing:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id)contentContainerView;
- (void)setupViews;

@end
