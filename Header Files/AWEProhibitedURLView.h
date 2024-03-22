//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, NSString, UIImageView, UILabel, UIButton;
@protocol AWEProhibitedURLViewDelegate;

@interface AWEProhibitedURLView : UIView <AWEProhibitedURLViewProtocol> {
    id<AWEProhibitedURLViewDelegate> delegate;
    NSString *_text;
    NSString *_linkText;
    UIImageView *_iconImageView;
    UIButton *_hintButton;
    UILabel *_hintLabel;
    UIImageView *_arrowImageView;
    UITapGestureRecognizer *_recognizer;
    NSString *_iconName;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *hintButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *linkText;
@property (weak, nonatomic) id<AWEProhibitedURLViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onButtonClicked;
- (void)configUI;
- (void)configUI:(BOOL)arg0 showHintButton:(BOOL)arg1 showRightArrow:(BOOL)arg2;
- (void)jumpToNoticeDetail;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)iconName;
- (id)text;
- (void)setIconName:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)hintButton;
- (void)setHintButton:(id)arg0;
- (id)linkText;
- (void)setLinkText:(id)arg0;
- (id)hintLabelFont;
- (id)recognizer;
- (void)setRecognizer:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end