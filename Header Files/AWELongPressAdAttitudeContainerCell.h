//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel, UILabel, NSMutableArray, UIButton;

@interface AWELongPressAdAttitudeContainerCell : UICollectionViewCell <AWELongPressAdAttitudeContainerCell> {
    BOOL _submitFeedbackHasShown;
    BOOL _hasBeenInit;
    BOOL _isFromLongPress;
    AWEAwemeModel *_aweme;
    long long _longPressType;
    id /* block */ _dismissBlock;
    id /* block */ _updateHeightAnimatedBlock;
    NSArray *_likeReasons;
    NSArray *_notInterestingReasons;
    NSMutableArray *_reasonButtonArray;
    UIButton *_likeButton;
    UIButton *_notInterestingButton;
    UIButton *_clickingButton;
    UILabel *_chooseAttitudeDescriptionGuideLabel;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long longPressType;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ updateHeightAnimatedBlock;
@property (retain, nonatomic) NSArray *likeReasons;
@property (retain, nonatomic) NSArray *notInterestingReasons;
@property (retain, nonatomic) NSMutableArray *reasonButtonArray;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIButton *notInterestingButton;
@property (weak, nonatomic) UIButton *clickingButton;
@property (retain, nonatomic) UILabel *chooseAttitudeDescriptionGuideLabel;
@property (nonatomic) BOOL submitFeedbackHasShown;
@property (nonatomic) BOOL hasBeenInit;
@property (nonatomic) BOOL isFromLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)getCellClassWithAweme:(id)arg0;
+ (double)initHeightWithAweme:(id)arg0;
+ (BOOL)shouldDisplayAdAttitude:(id)arg0;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (long long)longPressType;
- (void)setLongPressType:(long long)arg0;
- (BOOL)hasBeenInit;
- (id)positiveFilterWordsWithAweme:(id)arg0;
- (void)setLikeReasons:(id)arg0;
- (id)negativeFilterWordsWithAweme:(id)arg0;
- (void)setNotInterestingReasons:(id)arg0;
- (void)setUpdateHeightAnimatedBlock:(id /* block */)arg0;
- (void)setHasBeenInit:(BOOL)arg0;
- (void)setIsFromLongPress:(BOOL)arg0;
- (id)likeReasons;
- (id)notInterestingReasons;
- (void)feedbackReasonOnClick:(id)arg0;
- (id)reasonButtonArray;
- (BOOL)isFromLongPress;
- (void)buttonClickUIChangeHelper:(id)arg0;
- (id)notInterestingButton;
- (void)setClickingButton:(id)arg0;
- (void)configureWithAweme:(id)arg0 dismissBlock:(id /* block */)arg1 updateHeightAnimatedBlock:(id /* block */)arg2 isFromLongPress:(BOOL)arg3;
- (void)submitFeedbackButtonOnClick:(id)arg0;
- (void)likeButtonOnClick:(id)arg0;
- (void)notInterestionButtonOnClick:(id)arg0;
- (id)chooseAttitudeDescriptionGuideLabel;
- (id /* block */)updateHeightAnimatedBlock;
- (void)setReasonButtonArray:(id)arg0;
- (void)setNotInterestingButton:(id)arg0;
- (id)clickingButton;
- (void)setChooseAttitudeDescriptionGuideLabel:(id)arg0;
- (BOOL)submitFeedbackHasShown;
- (void)setSubmitFeedbackHasShown:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
