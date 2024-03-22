//
//     Generated by private class-dump
//

@class AWEUILoadingView, UILabel, NSMutableArray, AWEPOIGradeTagSelectableView, UIView, UIButton, NSString, AWEPOITouchThroughView, AWEPOICommonModalViewController, UITextView, NSArray, YYLabel, AWEPOISubTitlesSelectableView, AWEPOIGradeSelectableView, UIImageView;
@protocol AWEPOIModalContentDelegate;

@interface AWEPOIUGCPopupView : UIView <UITextViewDelegate, AWEPOIGradeSelectableViewDelegate, AWEPOIGradeTagSelectableViewDelegate, AWEPOISubTitlesSelectableViewDelegate, AWEPOICommonModalCustomContentProtocol, AWEPOICommonModalViewControllerDelegate> {
    BOOL _isModal;
    BOOL _shouldShowSubTitles;
    BOOL _isCommitingRate;
    BOOL _rateSuccess;
    BOOL _closeOnPurpose;
    BOOL _hasSelectedTag;
    BOOL _hasTrackedTextInput;
    BOOL _hasReward;
    BOOL _hasRemindRateLimit;
    BOOL _textNumOverLimit;
    BOOL _isNewLayout;
    long long _sourceType;
    long long _gradeType;
    NSString *_poiId;
    NSString *_sourceId;
    NSString *_enterFrom;
    AWEPOICommonModalViewController *_modalVC;
    UIView *_closeButton;
    id /* block */ _onClose;
    double _contentHeight;
    UIView *_headerContainerView;
    UILabel *_titleLabel;
    UIImageView *_closeIconImageView;
    AWEPOITouchThroughView *_middleContainerView;
    AWEPOIGradeSelectableView *_gradeSelectableView;
    AWEPOIGradeTagSelectableView *_tagSelecteableView;
    UITextView *_textView;
    UILabel *_textCountLabel;
    YYLabel *_promoteLabel;
    UIButton *_promoteIconButton;
    AWEPOITouchThroughView *_bottomContainerView;
    UIButton *_commitButton;
    NSArray *_subTitles;
    AWEPOISubTitlesSelectableView *_subTitlesSelectView;
    NSMutableArray *_subTitleHadUsed;
    AWEUILoadingView *_loadingView;
    double _keyboardHeight;
    NSString *_poiBackendType;
    UIImageView *_topGradientBackView;
    UIButton *_topCommitButton;
    UIImageView *_topBarGradientBackView;
    UILabel *_topLabel;
    UIView *_topLabelLeftGradView;
    UIView *_topLabelRightGradView;
    UILabel *_poiLabel;
    UILabel *_poiNameRightLabel;
    UIView *_lineView;
}

@property (nonatomic) BOOL isModal;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeIconImageView;
@property (retain, nonatomic) AWEPOITouchThroughView *middleContainerView;
@property (retain, nonatomic) AWEPOIGradeSelectableView *gradeSelectableView;
@property (retain, nonatomic) AWEPOIGradeTagSelectableView *tagSelecteableView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *textCountLabel;
@property (retain, nonatomic) YYLabel *promoteLabel;
@property (retain, nonatomic) UIButton *promoteIconButton;
@property (retain, nonatomic) AWEPOITouchThroughView *bottomContainerView;
@property (retain, nonatomic) UIButton *commitButton;
@property (nonatomic) BOOL shouldShowSubTitles;
@property (copy, nonatomic) NSArray *subTitles;
@property (retain, nonatomic) AWEPOISubTitlesSelectableView *subTitlesSelectView;
@property (retain, nonatomic) NSMutableArray *subTitleHadUsed;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL isCommitingRate;
@property (nonatomic) BOOL rateSuccess;
@property (nonatomic) BOOL closeOnPurpose;
@property (nonatomic) BOOL hasSelectedTag;
@property (nonatomic) BOOL hasTrackedTextInput;
@property (copy, nonatomic) NSString *poiBackendType;
@property (nonatomic) BOOL hasReward;
@property (nonatomic) BOOL hasRemindRateLimit;
@property (nonatomic) BOOL textNumOverLimit;
@property (nonatomic) BOOL isNewLayout;
@property (retain, nonatomic) UIImageView *topGradientBackView;
@property (retain, nonatomic) UIButton *topCommitButton;
@property (retain, nonatomic) UIImageView *topBarGradientBackView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UIView *topLabelLeftGradView;
@property (retain, nonatomic) UIView *topLabelRightGradView;
@property (retain, nonatomic) UILabel *poiLabel;
@property (retain, nonatomic) UILabel *poiNameRightLabel;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long gradeType;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *sourceId;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AWEPOICommonModalViewController *modalVC;
@property (retain, nonatomic) UIView *closeButton;
@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEPOIModalContentDelegate> modalContentDelegate;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)poiBackendType;
- (BOOL)hasReward;
- (void)setPoiBackendType:(id)arg0;
- (void)setGradeType:(long long)arg0;
- (double)headerContainerHeight;
- (void)hideViews:(BOOL)arg0;
- (void)updateCountLabel;
- (void)setModalVC:(id)arg0;
- (void)enableContentScroll;
- (void)disableContentScroll;
- (void)commonModalViewWillClose:(id)arg0;
- (void)commonModalViewWillShow:(id)arg0;
- (void)setHasReward:(BOOL)arg0;
- (id)poiLabel;
- (void)setPoiLabel:(id)arg0;
- (void)gradeSelectableView:(id)arg0 rateGradeDidSelected:(id)arg1;
- (void)tagSelectableView:(id)arg0 rateTagDidSelected:(BOOL)arg1 tag:(id)arg2;
- (id)modalVC;
- (void)subSelectableViewClick:(id)arg0 subTitle:(id)arg1;
- (void)observeKeyboardEvents;
- (id)middleContainerView;
- (double)gapOfHeaderAndSelect;
- (double)gradeSelectViewHeight;
- (double)gapOfSelectAndTag;
- (double)gradeSelectTagViewHeight;
- (double)gapOfTagAndTextView;
- (double)textViewHeight;
- (void)setCloseOnPurpose:(BOOL)arg0;
- (void)closeSelf;
- (void)updateLayoutWhenTextViewChange;
- (void)updatePromote;
- (void)updateCommitBtn;
- (BOOL)hasRemindRateLimit;
- (void)setHasRemindRateLimit:(BOOL)arg0;
- (void)setTextNumOverLimit:(BOOL)arg0;
- (id)tagSelecteableView;
- (void)regenerateModalVCWithHeight:(double)arg0;
- (void)commitRate;
- (void)handleRepeatRate;
- (id)gradeSelectableView;
- (void)shakedGradeSelectable;
- (BOOL)isCommitingRate;
- (void)setIsCommitingRate:(BOOL)arg0;
- (id)subTitleHadUsed;
- (id)handleCommitContent;
- (id)formatSubtitlesUsed;
- (void)setRateSuccess:(BOOL)arg0;
- (void)showRepeatRateView;
- (void)showRepeatRateAlert;
- (void)updateHideTagSelectTableView;
- (id)subTitlesSelectView;
- (void)setShouldShowSubTitles:(BOOL)arg0;
- (void)setupNewUIWithBttomButton:(BOOL)arg0 withModel:(id)arg1;
- (void)updateTagSelecteableViewWithGrade:(id)arg0;
- (void)shakeAnimationForView:(id)arg0;
- (double)subTitleSelectedViewHeight;
- (void)subTitlesShowTrackHelper;
- (BOOL)textNumOverLimit;
- (BOOL)shouldShowSubTitles;
- (void)setbackgroundImage:(id)arg0;
- (id)backgroundImageFilePath;
- (void)p_headerContainerViewTap:(id)arg0;
- (double)newHeaderHeight;
- (id)topBarGradientBackView;
- (void)setIsNewLayout:(BOOL)arg0;
- (void)updateHeadViewWithBttomButton:(BOOL)arg0;
- (double)lineViewOffset;
- (double)newTextViewBasicHeight;
- (id)topGradientBackView;
- (id)topLabelLeftGradView;
- (id)topLabelRightGradView;
- (id)poiNameRightLabel;
- (BOOL)hasTrackedTextInput;
- (void)setHasTrackedTextInput:(BOOL)arg0;
- (BOOL)isNewLayout;
- (BOOL)hasSelectedTag;
- (id)promoteLabel;
- (id)textCountLabel;
- (id)topCommitButton;
- (void)updateShowSubTitles:(BOOL)arg0;
- (double)newGradeSelectTagViewHeight;
- (void)updateModalVCIfKeyboardHasShowed;
- (void)updateNewTagSelecteAbleViewWithGrade:(id)arg0;
- (void)setHasSelectedTag:(BOOL)arg0;
- (BOOL)rateSuccess;
- (BOOL)closeOnPurpose;
- (id)initWithModalMode:(BOOL)arg0;
- (void)doRequest;
- (id)closeIconImageView;
- (void)setCloseIconImageView:(id)arg0;
- (void)setMiddleContainerView:(id)arg0;
- (void)setGradeSelectableView:(id)arg0;
- (void)setTagSelecteableView:(id)arg0;
- (void)setTextCountLabel:(id)arg0;
- (void)setPromoteLabel:(id)arg0;
- (id)promoteIconButton;
- (void)setPromoteIconButton:(id)arg0;
- (void)setSubTitlesSelectView:(id)arg0;
- (void)setSubTitleHadUsed:(id)arg0;
- (void)setTopGradientBackView:(id)arg0;
- (void)setTopCommitButton:(id)arg0;
- (void)setTopBarGradientBackView:(id)arg0;
- (void)setTopLabelLeftGradView:(id)arg0;
- (void)setTopLabelRightGradView:(id)arg0;
- (void)setPoiNameRightLabel:(id)arg0;
- (id)textView;
- (id)sourceId;
- (double)currentHeight;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (double)keyboardHeight;
- (id)trackerInfo;
- (void).cxx_destruct;
- (void)setKeyboardHeight:(double)arg0;
- (double)contentHeight;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (id)contentView;
- (void)setTextView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setSourceId:(id)arg0;
- (void)setContentHeight:(double)arg0;
- (id)subTitles;
- (void)setSubTitles:(id)arg0;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)poiId;
- (void)setPoiId:(id)arg0;
- (void)setupUI;
- (id)topLabel;
- (void)setTopLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (BOOL)isModal;
- (long long)gradeType;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg0;
- (void)setIsModal:(BOOL)arg0;
- (id)commitButton;
- (void)setCommitButton:(id)arg0;
- (struct CGPoint { double x0; double x1; })currentContentOffset;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end