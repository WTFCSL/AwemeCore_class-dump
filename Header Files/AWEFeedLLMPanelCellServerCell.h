//
//     Generated by private class-dump
//

@class UIStackView, NSString, UIView, AWEFeedLLMPanelCellServerCellChangeView, NSThread, AWEFeedLLMRecommendPanelCellModel, YYLabel, LOTAnimationView;

@interface AWEFeedLLMPanelCellServerCell : UITableViewCell <AWEFeedLLMPanelCellServerCellWordViewDelegate, AWEFeedLLMPanelCellServerCellChangeViewDelegate, AWEFeedLLMRecommendPanelCellProtocol> {
    AWEFeedLLMRecommendPanelCellModel *_cellModel;
    UIView *_cellContainerView;
    YYLabel *_cellTextLabel;
    UIStackView *_wordsStackView;
    AWEFeedLLMPanelCellServerCellChangeView *_changeView;
    LOTAnimationView *_loadingView;
    long long _innerType;
    NSString *_cellType;
    NSThread *_textAnimationThread;
    double _textMaxWidth;
    long long _textLineNumber;
}

@property (retain, nonatomic) UIView *cellContainerView;
@property (retain, nonatomic) YYLabel *cellTextLabel;
@property (retain, nonatomic) UIStackView *wordsStackView;
@property (retain, nonatomic) AWEFeedLLMPanelCellServerCellChangeView *changeView;
@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (nonatomic) long long innerType;
@property (retain, nonatomic) NSString *cellType;
@property (retain, nonatomic) NSThread *textAnimationThread;
@property (nonatomic) double textMaxWidth;
@property (nonatomic) long long textLineNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEFeedLLMRecommendPanelCellModel *cellModel;

+ (struct CGSize { double x0; double x1; })lastLineSizeForAttributeString:(id)arg0 constraintSize:(struct CGSize { double x0; double x1; })arg1;
+ (double)calculateCellHeightWithCellModel:(id)arg0;
+ (id)getRealStringForCancelWithModel:(id)arg0;
+ (long long)getInnerTypeWithCellModel:(id)arg0;

- (void)cellWillDisplay;
- (void)setCellModel:(id)arg0;
- (void)cellDidEndDisplay;
- (id)cellTextLabel;
- (void)configCellWithCellModel:(id)arg0;
- (BOOL)closeKeyboardGestureCanBeginWithTouch:(id)arg0;
- (void)updateCellWithCellModel:(id)arg0 interactiveType:(long long)arg1;
- (void)setCellTextLabel:(id)arg0;
- (id)cellContainerView;
- (id)wordsStackView;
- (id)changeView;
- (void)setInnerType:(long long)arg0;
- (void)resetStackView;
- (id)textAnimationThread;
- (void)setTextAnimationThread:(id)arg0;
- (void)cancelTextDidTapped;
- (long long)innerType;
- (void)prepareForAnimation;
- (void)showWithAnimationWithFullString:(id)arg0;
- (void)setTextMaxWidth:(double)arg0;
- (void)setTextLineNumber:(long long)arg0;
- (double)textMaxWidth;
- (long long)textLineNumber;
- (void)wordViewDidClicked:(id)arg0;
- (void)changeViewDidClicked;
- (void)setCellContainerView:(id)arg0;
- (void)setWordsStackView:(id)arg0;
- (void)setChangeView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setCellType:(id)arg0;
- (void)prepareForReuse;
- (void)reset;
- (id)cellType;
- (void)setupUI;
- (void)updateUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)cellModel;

@end