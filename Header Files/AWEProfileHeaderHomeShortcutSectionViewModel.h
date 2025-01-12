//
//     Generated by private class-dump
//

@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderHomeShortcutSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderHomeShortcutSectionProtocol> {
    BOOL _showProfileInfoComplete;
    BOOL _hidePercentWhenCompleted;
    BOOL _languageDidChange;
    AWEProfileHeaderContext *_context;
    double _topPadding;
    double _profileInfoCompletePercent;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL showProfileInfoComplete;
@property (nonatomic) double profileInfoCompletePercent;
@property (nonatomic) BOOL hidePercentWhenCompleted;
@property (nonatomic) BOOL languageDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)arg0;
- (void)updateProfileCompletion:(float)arg0 hidePercentWhenCompleted:(BOOL)arg1;
- (void)showProfileInfoCompletionAnimation;
- (double)topPaddingWithUpperSection:(long long)arg0;
- (BOOL)hidePercentWhenCompleted;
- (void)p_languageDidChange;
- (void)setLanguageDidChange:(BOOL)arg0;
- (void)setShowProfileInfoComplete:(BOOL)arg0;
- (void)setHidePercentWhenCompleted:(BOOL)arg0;
- (void)setProfileInfoCompletePercent:(double)arg0;
- (BOOL)showProfileInfoComplete;
- (double)profileInfoCompletePercent;
- (id)init;
- (void).cxx_destruct;
- (long long)sectionType;
- (void)setContext:(id)arg0;
- (double)topPadding;
- (id)context;
- (void)dealloc;
- (void)setTopPadding:(double)arg0;
- (struct CGSize { double x0; double x1; })sectionSize;
- (BOOL)languageDidChange;

@end
