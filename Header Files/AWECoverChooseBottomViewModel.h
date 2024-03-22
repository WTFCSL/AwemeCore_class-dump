//
//     Generated by private class-dump
//

@class NSString, AWECoverTextEffectCellModel;

@interface AWECoverChooseBottomViewModel : NSObject {
    AWECoverTextEffectCellModel *_currentEffectModel;
    AWECoverTextEffectCellModel *_selectedEffectModel;
    NSString *_currentTitle;
    NSString *_selectedTitle;
}

@property (retain, nonatomic) AWECoverTextEffectCellModel *currentEffectModel;
@property (retain, nonatomic) AWECoverTextEffectCellModel *selectedEffectModel;
@property (retain, nonatomic) NSString *currentTitle;
@property (retain, nonatomic) NSString *selectedTitle;

- (void)setCurrentEffectModel:(id)arg0;
- (id)currentEffectModel;
- (void)selectTitle:(id)arg0;
- (void)updateEffectModel:(id)arg0;
- (BOOL)shouldHideResetButton;
- (void)selectEffectModel:(id)arg0;
- (void)setSelectedEffectModel:(id)arg0;
- (id)selectedEffectModel;
- (void).cxx_destruct;
- (id)currentTitle;
- (void)setCurrentTitle:(id)arg0;
- (id)selectedTitle;
- (void)updateTitle:(id)arg0;
- (void)setSelectedTitle:(id)arg0;

@end