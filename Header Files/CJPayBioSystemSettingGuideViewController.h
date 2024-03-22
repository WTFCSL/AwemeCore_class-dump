//
//     Generated by private class-dump
//

@class CJPayButton, CJPayBaseVerifyManager, CJPayResultFigureGuideView, CJPayResultPageGuideInfoModel;

@interface CJPayBioSystemSettingGuideViewController : CJPayHalfPageBaseViewController {
    BOOL _isToOpened;
    CJPayBaseVerifyManager *_verifyManager;
    id /* block */ _completeBlock;
    CJPayResultPageGuideInfoModel *_model;
    CJPayResultFigureGuideView *_figureGuideView;
    CJPayButton *_cancelButton;
}

@property (retain, nonatomic) CJPayResultPageGuideInfoModel *model;
@property (retain, nonatomic) CJPayResultFigureGuideView *figureGuideView;
@property (retain, nonatomic) CJPayButton *cancelButton;
@property (nonatomic) BOOL isToOpened;
@property (retain, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void)p_setupUI;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)p_didBecomeActive;
- (id)verifyManager;
- (void)setVerifyManager:(id)arg0;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)p_confirmButtonClick;
- (id)initWithGuideInfoModel:(id)arg0;
- (id)figureGuideView;
- (void)p_setNavbarTitle;
- (void)p_cancelButtonClick;
- (void)setFigureGuideView:(id)arg0;
- (BOOL)p_isGifImg;
- (void)p_openFailed;
- (void)setIsToOpened:(BOOL)arg0;
- (void)p_clickTrack:(id)arg0;
- (BOOL)isToOpened;
- (void)setModel:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)model;
- (void)dealloc;
- (void)viewDidLoad;
- (void)back;

@end
