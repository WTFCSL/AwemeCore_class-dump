//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface ACCLocalAudioAuthSection : UITableViewCell {
    BOOL _isNotDetermined;
    id /* block */ _clickAction;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_goSettingButton;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIButton *goSettingButton;
@property (nonatomic) BOOL isNotDetermined;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)sectionHeight;

- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg0;
- (BOOL)isNotDetermined;
- (void)setIsNotDetermined:(BOOL)arg0;
- (void)goSettingButtonClick;
- (id)goSettingButton;
- (void)setGoSettingButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setMessageLabel:(id)arg0;
- (id)messageLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end
