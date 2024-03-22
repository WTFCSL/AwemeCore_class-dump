//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableArray;
@protocol IESLivePKGuestInteractSettingsAction;

@interface IESLivePKGuestInteractSettingChooseViewModel : NSObject {
    BOOL _isOnlyJoinThroughInvitation;
    int _selectedIndex;
    NSString *_title;
    unsigned long long _type;
    NSArray *_items;
    unsigned long long _currentScene;
    id /* block */ _onItemSelected;
    NSMutableArray *_authorityItems;
    id<IESLivePKGuestInteractSettingsAction> _actionDelegate;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) int selectedIndex;
@property (nonatomic) unsigned long long currentScene;
@property (copy, nonatomic) id /* block */ onItemSelected;
@property (retain, nonatomic) NSMutableArray *authorityItems;
@property (nonatomic) BOOL isOnlyJoinThroughInvitation;
@property (weak, nonatomic) id<IESLivePKGuestInteractSettingsAction> actionDelegate;

- (void)setCurrentScene:(unsigned long long)arg0;
- (id)authorityItems;
- (BOOL)isOnlyJoinThroughInvitation;
- (id /* block */)onItemSelected;
- (void)didClickItem:(int)arg0 completion:(id /* block */)arg1;
- (void)setIsOnlyJoinThroughInvitation:(BOOL)arg0;
- (void)updateWithAuthoritySettings:(id)arg0;
- (void)setOnItemSelected:(id /* block */)arg0;
- (void)setAuthorityItems:(id)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)actionDelegate;
- (void)setSelectedIndex:(int)arg0;
- (unsigned long long)type;
- (unsigned long long)currentScene;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;
- (int)selectedIndex;
- (void)setActionDelegate:(id)arg0;

@end
