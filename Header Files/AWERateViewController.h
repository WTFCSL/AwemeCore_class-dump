//
//     Generated by private class-dump
//

@class AWERateAlertButton, NSString, AWERateSlider, UILabel, UIView;

@interface AWERateViewController : UIViewController {
    id /* block */ _finishedDisplayViewController;
    NSString *_rateWindowTypeString;
    UIView *_backgroundView;
    UIView *_alertView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    AWERateSlider *_rateSlider;
    UIView *_seperatorHorizontalFirst;
    UIView *_seperatorHorizontalSecond;
    UIView *_seperatorVertical;
    AWERateAlertButton *_cancelButton;
    AWERateAlertButton *_submitButton;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *alertView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWERateSlider *rateSlider;
@property (retain, nonatomic) UIView *seperatorHorizontalFirst;
@property (retain, nonatomic) UIView *seperatorHorizontalSecond;
@property (retain, nonatomic) UIView *seperatorVertical;
@property (retain, nonatomic) AWERateAlertButton *cancelButton;
@property (retain, nonatomic) AWERateAlertButton *submitButton;
@property (copy, nonatomic) id /* block */ finishedDisplayViewController;
@property (retain, nonatomic) NSString *rateWindowTypeString;

- (void)setRateWindowTypeString:(id)arg0;
- (void)setFinishedDisplayViewController:(id /* block */)arg0;
- (id)rateSlider;
- (id)seperatorHorizontalFirst;
- (id)seperatorHorizontalSecond;
- (id)seperatorVertical;
- (void)rateChanged;
- (id)rateWindowTypeString;
- (void)submitFeedback;
- (void)dismissWithCompletion:(id /* block */)arg0 hasReplied:(BOOL)arg1;
- (id /* block */)finishedDisplayViewController;
- (void)setRateSlider:(id)arg0;
- (void)setSeperatorHorizontalFirst:(id)arg0;
- (void)setSeperatorHorizontalSecond:(id)arg0;
- (void)setSeperatorVertical:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setAlertView:(id)arg0;
- (id)titleLabel;
- (void)submit;
- (void)cancel;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (id)alertView;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)submitButton;
- (void)setSubmitButton:(id)arg0;

@end
