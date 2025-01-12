//
//     Generated by private class-dump
//

@class UIImageView, AWEUILoadingView, AWEIMDouyinRedPacketDataManager, UILabel, NSDictionary, NSMutableDictionary, AWEPayRPExchangeRedPacketDataManager, AWEPayRPExchangeRedPacketPreConsultResponseModel, AWEPayRPExchangeRedPacketDetailResponseModel, UIView, UIScrollView, NSString, AWEPayCollectionView, CJPayBaseLynxView;
@protocol AWEIMEmoticonContainerViewProtocol;

@interface AWEPayRPSendExchangeRedPacketViewController : UIViewController <UIScrollViewDelegate, CJPayAPIDelegate, CJPayLynxViewDelegate, AWEIMEmoticonKeyBoardDelegate, DUXActionSheetDelegate> {
    BOOL _isViewAppeared;
    BOOL _transToParticipate;
    BOOL _isKeyboardShowing;
    NSString *_orderNo;
    NSString *_targetUid;
    NSString *_conversationId;
    NSString *_conversationShortId;
    NSString *_conversationType;
    NSString *_messageId;
    NSString *_redPacketId;
    NSString *_imExtraInfo;
    NSString *_lynxViewSchema;
    AWEPayRPExchangeRedPacketPreConsultResponseModel *_preConsultModel;
    AWEPayRPExchangeRedPacketDetailResponseModel *_detailModel;
    NSDictionary *_exchangeTrackParams;
    NSMutableDictionary *_performanceTrackParams;
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
    AWEPayCollectionView *_topParticipatorsView;
    UIImageView *_topArcImageView;
    UIView *_lynxViewContainer;
    CJPayBaseLynxView *_lynxView;
    NSDictionary *_lynxInitData;
    UILabel *_lynxErrorTitleLabel;
    UILabel *_lynxErrorInfoLabel;
    AWEUILoadingView *_lynxLoadingView;
    unsigned long long _redPacketType;
    NSString *_greetingMessage;
    NSString *_emojiIcon;
    AWEIMDouyinRedPacketDataManager *_dataManager;
    AWEPayRPExchangeRedPacketDataManager *_exchangeDataManager;
    long long _participateType;
    UIView<AWEIMEmoticonContainerViewProtocol> *_emoticonView;
    double _inputViewButtonOffset;
    UIView *_insetView;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) AWEPayCollectionView *topParticipatorsView;
@property (retain, nonatomic) UIImageView *topArcImageView;
@property (retain, nonatomic) UIView *lynxViewContainer;
@property (retain, nonatomic) CJPayBaseLynxView *lynxView;
@property (copy, nonatomic) NSDictionary *lynxInitData;
@property (retain, nonatomic) UILabel *lynxErrorTitleLabel;
@property (retain, nonatomic) UILabel *lynxErrorInfoLabel;
@property (retain, nonatomic) AWEUILoadingView *lynxLoadingView;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) unsigned long long redPacketType;
@property (copy, nonatomic) NSString *greetingMessage;
@property (copy, nonatomic) NSString *emojiIcon;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (retain, nonatomic) AWEPayRPExchangeRedPacketDataManager *exchangeDataManager;
@property (nonatomic) long long participateType;
@property (nonatomic) BOOL transToParticipate;
@property (retain, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *emoticonView;
@property (nonatomic) double inputViewButtonOffset;
@property (retain, nonatomic) UIView *insetView;
@property (nonatomic) BOOL isKeyboardShowing;
@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *targetUid;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *conversationShortId;
@property (copy, nonatomic) NSString *conversationType;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *redPacketId;
@property (copy, nonatomic) NSString *imExtraInfo;
@property (copy, nonatomic) NSString *lynxViewSchema;
@property (retain, nonatomic) AWEPayRPExchangeRedPacketPreConsultResponseModel *preConsultModel;
@property (retain, nonatomic) AWEPayRPExchangeRedPacketDetailResponseModel *detailModel;
@property (copy, nonatomic) NSDictionary *exchangeTrackParams;
@property (retain, nonatomic) NSMutableDictionary *performanceTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)backButtonClicked;
- (id)lynxView;
- (id)conversationShortId;
- (void)setConversationShortId:(id)arg0;
- (void)hideLoading;
- (void)setLynxView:(id)arg0;
- (id)conversationType;
- (void)setConversationType:(id)arg0;
- (void)setLynxViewContainer:(id)arg0;
- (id)lynxViewContainer;
- (void)viewDidStartLoading;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)setLynxInitData:(id)arg0;
- (void)setEmoticonView:(id)arg0;
- (id)emoticonView;
- (void)emoticonView:(id)arg0 didSelectEmoticon:(id)arg1 theme:(id)arg2 themeView:(id)arg3;
- (void)emoticonViewDidSelectDelete:(id)arg0;
- (void)emoticonViewDidSendText:(id)arg0;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:(BOOL)arg0;
- (id)detailModel;
- (void)setDetailModel:(id)arg0;
- (void)p_setupNaviBar;
- (void)callState:(BOOL)arg0 fromScene:(long long)arg1;
- (void)onResponse:(id)arg0;
- (id)redPacketId;
- (void)performPayCallbackWithError:(id)arg0 showErrorToast:(BOOL)arg1 canceled:(BOOL)arg2;
- (void)setRedPacketId:(id)arg0;
- (id)exchangeDataManager;
- (void)setTargetUid:(id)arg0;
- (void)setImExtraInfo:(id)arg0;
- (void)setLynxViewSchema:(id)arg0;
- (void)setPreConsultModel:(id)arg0;
- (void)setExchangeTrackParams:(id)arg0;
- (id)performanceTrackParams;
- (void)setOrderNo:(id)arg0;
- (id)orderNo;
- (void)setExchangeDataManager:(id)arg0;
- (void)setRedPacketType:(unsigned long long)arg0;
- (unsigned long long)redPacketType;
- (void)p_alertWithMessage:(id)arg0;
- (void)p_trackEvent:(id)arg0 param:(id)arg1;
- (id)exchangeTrackParams;
- (void)setPerformanceTrackParams:(id)arg0;
- (id)topParticipatorsView;
- (id)topArcImageView;
- (void)onExchangeRedPacketUpdated:(id)arg0;
- (id)targetUid;
- (void)setTopParticipatorsView:(id)arg0;
- (void)setTopArcImageView:(id)arg0;
- (void)setupLynxData;
- (id)lynxLoadingView;
- (void)setLynxLoadingView:(id)arg0;
- (id)findBDXLynxTextFieldInView:(id)arg0;
- (void)setIsKeyboardShowing:(BOOL)arg0;
- (void)handleHideEmojiEvent;
- (void)p_handleKeyboardWillShowWithTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 animationCurve:(long long)arg1 duration:(double)arg2;
- (double)inputViewButtonOffset;
- (void)p_handleKeyboardWillHideWithAnimationCurve:(long long)arg0 duration:(double)arg1;
- (BOOL)isKeyboardShowing;
- (void)setParticipateType:(long long)arg0;
- (long long)participateType;
- (id)preConsultModel;
- (id)lynxViewSchema;
- (id)lynxErrorTitleLabel;
- (id)lynxErrorInfoLabel;
- (void)setGreetingMessage:(id)arg0;
- (void)setEmojiIcon:(id)arg0;
- (id)emojiIcon;
- (id)greetingMessage;
- (BOOL)transToParticipate;
- (void)setTransToParticipate:(BOOL)arg0;
- (id)imExtraInfo;
- (void)showLynxLoadingView;
- (void)dismissLynxLoadingView;
- (void)handleLynxViewOpenError:(id)arg0;
- (void)handleSetRemainingTimes:(id)arg0;
- (void)handleSetFirstAmount:(id)arg0;
- (void)handleSetPageOffsetY:(id)arg0;
- (void)handleShowEmojiEvent:(id)arg0;
- (void)handleShowActionSheetEvent;
- (void)handleSendExchangeRedPacket:(id)arg0;
- (void)handleRequestDetail:(id)arg0;
- (void)handleGotoResult:(id)arg0;
- (void)handleSetLynxViewHeight:(id)arg0;
- (void)setInputViewButtonOffset:(double)arg0;
- (double)emoticonViewHeight;
- (id)lynxInitData;
- (void)viewDidFinishLoadWithError:(id)arg0;
- (void)lynxView:(id)arg0 receiveEvent:(id)arg1 withData:(id)arg2;
- (void)setLynxErrorTitleLabel:(id)arg0;
- (void)setLynxErrorInfoLabel:(id)arg0;
- (id)dataManager;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)scrollContentView;
- (void)keyboardWillShow:(id)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)setDataManager:(id)arg0;
- (void)closeAction;
- (void)viewWillAppear:(BOOL)arg0;
- (id)messageId;
- (void)dealloc;
- (void)viewDidLoad;
- (id)scrollView;
- (void)setMessageId:(id)arg0;
- (id)conversationId;
- (void)setConversationId:(id)arg0;
- (void)setupUI;
- (void)setScrollContentView:(id)arg0;
- (void)addObservers;
- (void)removeObservers;
- (void)setupContent;
- (id)insetView;
- (void)setInsetView:(id)arg0;
- (void)showLoading;

@end
