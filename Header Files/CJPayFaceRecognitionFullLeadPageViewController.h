//
//     Generated by private class-dump
//

@class CJPayFaceRecognitionFullLeadPageView, NSTimer, UIImageView, CJPayFaceRecognitionFullLeadPageModel;

@interface CJPayFaceRecognitionFullLeadPageViewController : CJPayFullPageBaseViewController {
    BOOL _isUserCheckProtocol;
    BOOL _isNeedRetain;
    BOOL _isInMiddleStationPage;
    CJPayFaceRecognitionFullLeadPageModel *_model;
    long long _countDown;
    NSTimer *_timer;
    UIImageView *_topTitleImageView;
    CJPayFaceRecognitionFullLeadPageView *_contentView;
}

@property (nonatomic) long long countDown;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIImageView *topTitleImageView;
@property (retain, nonatomic) CJPayFaceRecognitionFullLeadPageView *contentView;
@property (nonatomic) BOOL isUserCheckProtocol;
@property (nonatomic) BOOL isNeedRetain;
@property (nonatomic) BOOL isInMiddleStationPage;
@property (retain, nonatomic) CJPayFaceRecognitionFullLeadPageModel *model;

- (BOOL)cjShouldShowBottomView;
- (void)setCountDown:(long long)arg0;
- (void)p_setupUI;
- (void)p_setupConstraints;
- (BOOL)isNeedRetain;
- (void)setIsNeedRetain:(BOOL)arg0;
- (long long)cjpay_preferredStatusBarStyle;
- (void)trackerWithName:(id)arg0 params:(id)arg1;
- (void)p_clickConfirmBtn;
- (void)confirmBtnLoading:(BOOL)arg0;
- (id)p_createProtocolModel;
- (void)p_checkProperties;
- (void)setIsUserCheckProtocol:(BOOL)arg0;
- (void)setIsInMiddleStationPage:(BOOL)arg0;
- (void)p_startCountDown;
- (BOOL)isInMiddleStationPage;
- (id)topTitleImageView;
- (void)p_countDownAction;
- (BOOL)isUserCheckProtocol;
- (void)p_clickProtocolCheckBox:(BOOL)arg0;
- (id)p_getDescArray;
- (void)p_checkProtocol:(id)arg0;
- (void)setTopTitleImageView:(id)arg0;
- (id)timer;
- (void)setModel:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)close;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentView;
- (void)invalidate;
- (void)setTimer:(id)arg0;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (long long)countDown;

@end
