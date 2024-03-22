//
//     Generated by private class-dump
//

@class IESECURLModel, UIImageView, NSString, UILabel, UIButton;
@protocol IESECWinSecondaryAuthorInfoViewDelegate;

@interface IESECWinSecondaryAuthorInfoView : UIView {
    IESECURLModel *_authorURL;
    NSString *_name;
    id<IESECWinSecondaryAuthorInfoViewDelegate> _delegate;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIButton *_goWindowBtn;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *goWindowBtn;
@property (weak, nonatomic) id<IESECWinSecondaryAuthorInfoViewDelegate> delegate;

- (id)goWindowBtn;
- (void)goWindowAction;
- (id)initWithAuthor:(id)arg0 name:(id)arg1;
- (void)isFromInnerWindow:(BOOL)arg0;
- (void)setGoWindowBtn:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (id)nameLabel;
- (void)setDelegate:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;

@end
