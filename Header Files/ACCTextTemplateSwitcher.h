//
//     Generated by private class-dump
//

@class NSMutableArray, ACCTextTemplateSwitchView;

@interface ACCTextTemplateSwitcher : UIView {
    id /* block */ _userSelectCallback;
    unsigned long long _selectedIndex;
    ACCTextTemplateSwitchView *_currentSelectedSwitchView;
    NSMutableArray *_switchViewList;
}

@property (retain, nonatomic) NSMutableArray *switchViewList;
@property (weak, nonatomic) ACCTextTemplateSwitchView *currentSelectedSwitchView;
@property (copy, nonatomic) id /* block */ userSelectCallback;
@property (nonatomic) unsigned long long selectedIndex;

+ (double)height;

- (void)unSelectAnyIndex;
- (id)currentSelectedSwitchView;
- (void)setUserSelectCallback:(id /* block */)arg0;
- (id)switchViewList;
- (id /* block */)userSelectCallback;
- (id)initWithTitleList:(id)arg0;
- (void)setCurrentSelectedSwitchView:(id)arg0;
- (void)setSwitchViewList:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)arg0;
- (unsigned long long)selectedIndex;
- (void)selectIndex:(unsigned long long)arg0;

@end
