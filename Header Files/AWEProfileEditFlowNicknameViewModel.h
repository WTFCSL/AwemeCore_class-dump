//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileEditFlowNicknameViewModel : AWEProfileEditFlowStepViewModel {
    NSString *_enteredNickname;
    NSString *_title;
    NSString *_placeHolder;
}

@property (retain, nonatomic) NSString *enteredNickname;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeHolder;

- (id)trackFlowType;
- (void)trackImpression;
- (Class)stepViewClass;
- (id)enteredNickname;
- (BOOL)editingChanged:(id)arg0;
- (void)p_trackGuideProfileNameWithEventType:(id)arg0;
- (void)setEnteredNickname:(id)arg0;
- (void).cxx_destruct;
- (id)impressionEvent;
- (id)title;
- (void)finishWithCompletion:(id /* block */)arg0;
- (void)setTitle:(id)arg0;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg0;

@end
