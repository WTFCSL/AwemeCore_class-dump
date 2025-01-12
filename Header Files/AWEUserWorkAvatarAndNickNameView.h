//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAwemeModel, UILabel;

@interface AWEUserWorkAvatarAndNickNameView : UIButton {
    UIImageView *_waterfallAvatarView;
    UILabel *_waterfallUserNameLabel;
    AWEAwemeModel *_model;
    NSString *_referString;
}

@property (retain, nonatomic) UIImageView *waterfallAvatarView;
@property (retain, nonatomic) UILabel *waterfallUserNameLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)didClickWaterfallAuthorButton;
- (id)waterfallAvatarView;
- (id)waterfallUserNameLabel;
- (void)configWithModel:(id)arg0 referString:(id)arg1;
- (void)setWaterfallAvatarView:(id)arg0;
- (void)setWaterfallUserNameLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)setupUI;

@end
