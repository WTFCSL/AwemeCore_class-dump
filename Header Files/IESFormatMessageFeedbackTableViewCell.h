//
//     Generated by private class-dump
//

@class UIButton, UIView;

@interface IESFormatMessageFeedbackTableViewCell : IESFormatMessageBaseTableViewCell {
    UIButton *_thumbUpButton;
    UIView *_splitLineView;
    UIButton *_thumbDownButton;
}

@property (retain, nonatomic) UIButton *thumbUpButton;
@property (retain, nonatomic) UIView *splitLineView;
@property (retain, nonatomic) UIButton *thumbDownButton;

- (void)layoutMessage;
- (id)thumbUpButton;
- (id)splitLineView;
- (id)thumbDownButton;
- (void)onThumbUpButtonTapped;
- (void)onThumbDownButtonTapped;
- (void)setThumbUpButton:(id)arg0;
- (void)setSplitLineView:(id)arg0;
- (void)setThumbDownButton:(id)arg0;
- (void).cxx_destruct;

@end