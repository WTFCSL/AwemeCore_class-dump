//
//     Generated by private class-dump
//

@class CJPayResultDetailItemView, NSString, CJPayResultPageView, UILabel, CJPaySignOnlyBindBytePayResultDesc;

@interface CJPaySignOnlyResultPageViewController : CJPayHalfPageBaseViewController <CJPayResultPageViewDelegate> {
    BOOL _isFromOuterApp;
    CJPaySignOnlyBindBytePayResultDesc *_result;
    CJPayResultPageView *_resultView;
    long long _stateType;
    CJPayResultDetailItemView *_successDescView;
    UILabel *_failDescLabel;
}

@property (retain, nonatomic) CJPayResultPageView *resultView;
@property (nonatomic) long long stateType;
@property (retain, nonatomic) CJPayResultDetailItemView *successDescView;
@property (retain, nonatomic) UILabel *failDescLabel;
@property (nonatomic) BOOL isFromOuterApp;
@property (retain, nonatomic) CJPaySignOnlyBindBytePayResultDesc *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)p_setupNaviBar;
- (void)p_trackEvent:(id)arg0 params:(id)arg1;
- (void)p_update;
- (void)stateButtonClick:(id)arg0;
- (BOOL)isFromOuterApp;
- (void)setIsFromOuterApp:(BOOL)arg0;
- (void)closeActionAfterTime:(long long)arg0;
- (long long)p_stateTypeWithSignStatus:(id)arg0;
- (void)p_setStateWithType:(long long)arg0;
- (id)successDescView;
- (id)failDescLabel;
- (id)p_iconWithStatus:(long long)arg0;
- (id)p_descTitleWithOrderStatus:(unsigned long long)arg0;
- (void)setSuccessDescView:(id)arg0;
- (void)setFailDescLabel:(id)arg0;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)result;
- (void)setStateType:(long long)arg0;
- (void)viewDidLoad;
- (long long)stateType;
- (id)resultView;
- (void)setResultView:(id)arg0;

@end
