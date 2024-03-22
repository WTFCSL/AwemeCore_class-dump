//
//     Generated by private class-dump
//

@class NSArray, AWEButton, NSString, UIView, AWEIMCompanyMenuModel, AWEUserModel;

@interface AWEIMCompanyMenuView : UIView {
    id /* block */ _didClickKeyboard;
    id /* block */ _didClickAutoreplyMenu;
    id /* block */ _didClickMenu;
    id /* block */ _didTapped;
    AWEIMCompanyMenuModel *_menuModel;
    NSArray *_menus;
    AWEButton *_switchToKeyboardButton;
    UIView *_separator;
    NSString *_conversationId;
    AWEUserModel *_userModel;
}

@property (retain, nonatomic) AWEIMCompanyMenuModel *menuModel;
@property (retain, nonatomic) NSArray *menus;
@property (retain, nonatomic) AWEButton *switchToKeyboardButton;
@property (retain, nonatomic) UIView *separator;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ didClickKeyboard;
@property (copy, nonatomic) id /* block */ didClickAutoreplyMenu;
@property (copy, nonatomic) id /* block */ didClickMenu;
@property (copy, nonatomic) id /* block */ didTapped;

- (id /* block */)didClickKeyboard;
- (void)setDidClickKeyboard:(id /* block */)arg0;
- (id /* block */)didClickAutoreplyMenu;
- (void)setDidClickAutoreplyMenu:(id /* block */)arg0;
- (id /* block */)didClickMenu;
- (void)setDidClickMenu:(id /* block */)arg0;
- (id /* block */)didTapped;
- (void)setDidTapped:(id /* block */)arg0;
- (id)initWithModel:(id)arg0 conversationId:(id)arg1 userModel:(id)arg2;
- (void)hideSubMenu;
- (void)hideSwitchKeyboradButton:(BOOL)arg0;
- (void)adjustSwitchKeyboardButtonWidth:(double)arg0 leftMargin:(double)arg1;
- (id)menus;
- (void)clickKeyboard;
- (void)setSwitchToKeyboardButton:(id)arg0;
- (id)generateSeparator;
- (id)menuModel;
- (void)setMenus:(id)arg0;
- (id)switchToKeyboardButton;
- (void)setMenuModel:(id)arg0;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)conversationId;
- (void)setConversationId:(id)arg0;
- (void)setupUI;

@end