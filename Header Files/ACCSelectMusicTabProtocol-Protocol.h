//
//     Generated by private class-dump
//

@protocol ACCSelectMusicTabProtocol <NSObject>

@property (copy, nonatomic) id /* block */ tabCompletion;
@property (copy, nonatomic) id /* block */ tabShouldSelect;

- (unsigned long long)selectedTabType;
- (id /* block */)tabShouldSelect;
- (id /* block */)tabCompletion;
- (void)showBottomLineView:(BOOL)arg0;
- (void)forceSwitchSelectedType:(unsigned long long)arg0;
- (void)setTabCompletion:(id /* block */)arg0;
- (void)setTabShouldSelect:(id /* block */)arg0;

@end
