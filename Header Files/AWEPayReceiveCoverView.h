//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface AWEPayReceiveCoverView : UIView {
    unsigned long long _status;
    id /* block */ _buttonBlock;
    UILabel *_titleLabel;
    UIImageView *_downArrow;
    NSString *_coverID;
    UITapGestureRecognizer *_tapGesture;
}

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *downArrow;
@property (copy, nonatomic) NSString *coverID;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ buttonBlock;

- (void)p_setupUI;
- (id)downArrow;
- (void)p_setTitle;
- (id /* block */)buttonBlock;
- (void)p_setupButtonClick;
- (void)switchStatus:(unsigned long long)arg0;
- (id)getButtonName;
- (void)setButtonBlock:(id /* block */)arg0;
- (void)setDownArrow:(id)arg0;
- (id)coverID;
- (void)setCoverID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)titleLabel;
- (id)tapGesture;
- (void)setStatus:(unsigned long long)arg0;
- (id)initWithStatus:(unsigned long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end
