//
//     Generated by private class-dump
//

@class UIButton, UILabel, UIImageView;
@protocol AWEAboutEaterEggTableViewProtocol;

@interface AWENativeAppDebugCenterTableViewCell : UITableViewCell {
    id<AWEAboutEaterEggTableViewProtocol> _delegate;
    UIButton *_scanButton;
    UILabel *_hintLabel;
    UIImageView *_selectImageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIButton *scanButton;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<AWEAboutEaterEggTableViewProtocol> delegate;

- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (id)scanButton;
- (void)setScanButton:(id)arg0;
- (void)updateEasterEggModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;

@end
