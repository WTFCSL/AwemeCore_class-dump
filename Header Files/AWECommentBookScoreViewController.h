//
//     Generated by private class-dump
//

@class UIStackView, UIButton, AWECommentBookStarView, UILabel, DUXCheckBox;
@protocol AWECommentBookScoreDelegate;

@interface AWECommentBookScoreViewController : UIViewController {
    BOOL _hasUpdateComment;
    id<AWECommentBookScoreDelegate> _delegate;
    AWECommentBookStarView *_starView;
    UIStackView *_checkBoxStackView;
    DUXCheckBox *_checkBox;
    UILabel *_checkBoxLabel;
    UILabel *_bookTitleLabel;
    UIButton *_closeButton;
    UILabel *_extraBookTitleLabel;
}

@property (retain, nonatomic) AWECommentBookStarView *starView;
@property (retain, nonatomic) UIStackView *checkBoxStackView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkBoxLabel;
@property (retain, nonatomic) UILabel *bookTitleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *extraBookTitleLabel;
@property (weak, nonatomic) id<AWECommentBookScoreDelegate> delegate;
@property (nonatomic) BOOL hasUpdateComment;

- (float)getBookScore;
- (void)closeButtonClicked;
- (id)starView;
- (void)setStarView:(id)arg0;
- (void)initView;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (id)checkBoxLabel;
- (void)setCheckBoxLabel:(id)arg0;
- (BOOL)getCheckBoxState;
- (void)setSingelLottieSource:(id)arg0 finalLottieSource:(id)arg1;
- (void)setBookTitle:(id)arg0 isUpdate:(BOOL)arg1;
- (void)setBookRating:(float)arg0;
- (void)setHasUpdateComment:(BOOL)arg0;
- (void)setUICorner;
- (BOOL)hasUpdateComment;
- (void)setUpExtraUI;
- (id)checkBoxStackView;
- (id)bookTitleLabel;
- (id)extraBookTitleLabel;
- (void)setCheckBoxStackView:(id)arg0;
- (void)setBookTitleLabel:(id)arg0;
- (void)setExtraBookTitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (id)initWithParams:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
