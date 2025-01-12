//
//     Generated by private class-dump
//

@class UIView, NSString, HTSLiveEmojiTemplateGetResponse_Data, IESLiveEmojiTextField, UIImageView, UIButton, NSMutableArray, UILabel, UIScrollView;
@protocol IESLiveCompoundSubscription, IESLiveSubscribeEmojiCreateViewdelagate;

@interface IESLiveSubscribeEmojiCreateView : UIView <UITextFieldDelegate, UIScrollViewDelegate> {
    BOOL _isFromRoom;
    BOOL _isMarkedText;
    id<IESLiveSubscribeEmojiCreateViewdelagate> _delegate;
    UIView *_preview;
    long long _bubbleIdx;
    NSString *_text;
    IESLiveEmojiTextField *_copywritingTextField;
    UIView *_topBarView;
    UIView *_dividingLineTopView;
    UIView *_avatorView;
    UIView *_recommendationView;
    UILabel *_titileLabel;
    UILabel *_previewLabel;
    UILabel *_avatorLabel;
    UILabel *_avatorDefaultLabel;
    UILabel *_copywritingLabel;
    UILabel *_wordCountLabel;
    UILabel *_recommendationLabel;
    UILabel *_bubbleLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIButton *_avatorButton;
    UIButton *_descriptionButton;
    NSMutableArray *_recommendationBtnArray;
    NSMutableArray *_bubbleButtonArray;
    UIImageView *_avatorImageView;
    UIImageView *_defaultPreview;
    UIImageView *_gradientView;
    UIScrollView *_scrollView;
    HTSLiveEmojiTemplateGetResponse_Data *_model;
    id /* block */ _completionBlock;
    NSString *_colorStr;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIView *dividingLineTopView;
@property (retain, nonatomic) UIView *avatorView;
@property (retain, nonatomic) UIView *recommendationView;
@property (retain, nonatomic) UILabel *titileLabel;
@property (retain, nonatomic) UILabel *previewLabel;
@property (retain, nonatomic) UILabel *avatorLabel;
@property (retain, nonatomic) UILabel *avatorDefaultLabel;
@property (retain, nonatomic) UILabel *copywritingLabel;
@property (retain, nonatomic) UILabel *wordCountLabel;
@property (retain, nonatomic) UILabel *recommendationLabel;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *avatorButton;
@property (retain, nonatomic) UIButton *descriptionButton;
@property (retain, nonatomic) NSMutableArray *recommendationBtnArray;
@property (retain, nonatomic) NSMutableArray *bubbleButtonArray;
@property (retain, nonatomic) UIImageView *avatorImageView;
@property (retain, nonatomic) UIImageView *defaultPreview;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) HTSLiveEmojiTemplateGetResponse_Data *model;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isFromRoom;
@property (copy, nonatomic) NSString *colorStr;
@property (nonatomic) BOOL isMarkedText;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (weak, nonatomic) id<IESLiveSubscribeEmojiCreateViewdelagate> delegate;
@property (retain, nonatomic) UIView *preview;
@property (nonatomic) long long bubbleIdx;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveEmojiTextField *copywritingTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)updateUIWithModel:(id)arg0;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg0;
- (void)setBubbleLabel:(id)arg0;
- (id)bubbleLabel;
- (void)setUI;
- (void)bindAction;
- (void)onTapped;
- (id)previewLabel;
- (void)setPreviewLabel:(id)arg0;
- (id)disable_emoji:(id)arg0;
- (long long)bubbleIdx;
- (void)setBubbleIdx:(long long)arg0;
- (void)textFieldEditChange:(id)arg0;
- (void)p_showTipsWhenReachMax:(id)arg0;
- (id)wordCountLabel;
- (void)setWordCountLabel:(id)arg0;
- (void)setIsFromRoom:(BOOL)arg0;
- (BOOL)isFromRoom;
- (void)showAvatorImageViewWith:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isFromRoom:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)descriptionButton;
- (void)setDescriptionButton:(id)arg0;
- (void)p_addKeyboardObserver;
- (id)copywritingTextField;
- (void)loadRecommendationBtns;
- (void)loadbubbleBtns;
- (BOOL)isMarkedText;
- (id)titileLabel;
- (id)dividingLineTopView;
- (id)avatorView;
- (id)avatorLabel;
- (id)avatorDefaultLabel;
- (id)avatorButton;
- (id)copywritingLabel;
- (void)setRecommendationView:(id)arg0;
- (id)recommendationView;
- (id)recommendationLabel;
- (void)setRecommendationBtnArray:(id)arg0;
- (id)createRecommendationButtonWithIdx:(unsigned long long)arg0;
- (id)recommendationBtnArray;
- (void)setBubbleButtonArray:(id)arg0;
- (id)createBubbleButtonWithIdx:(unsigned long long)arg0;
- (id)bubbleButtonArray;
- (void)tapDescriptionButton;
- (void)trackLivevipSampleEmojiWordEdit;
- (BOOL)hasEmoji:(id)arg0;
- (void)setIsMarkedText:(BOOL)arg0;
- (void)setCopywritingTextField:(id)arg0;
- (void)setDividingLineTopView:(id)arg0;
- (void)setAvatorView:(id)arg0;
- (void)setTitileLabel:(id)arg0;
- (void)setAvatorLabel:(id)arg0;
- (void)setAvatorDefaultLabel:(id)arg0;
- (void)setCopywritingLabel:(id)arg0;
- (void)setRecommendationLabel:(id)arg0;
- (void)setAvatorButton:(id)arg0;
- (void)setDefaultPreview:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)preview;
- (void)setText:(id)arg0;
- (id /* block */)completionBlock;
- (id)model;
- (void)keyboardWillShow:(id)arg0;
- (void)setGradientView:(id)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)setPreview:(id)arg0;
- (id)delegate;
- (void)cancel;
- (id)text;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)gradientView;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id)scrollView;
- (id)defaultPreview;
- (void)confirm;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;
- (id)colorStr;
- (void)setColorStr:(id)arg0;

@end
