//
//     Generated by private class-dump
//

@class UILabel;

@interface IESLiveScreenRecordAudienceProfileView : UIView {
    UILabel *_nickName;
    UILabel *_displayID;
}

@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) UILabel *displayID;

- (void)renderUser:(id)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (id)displayID;
- (void)setDisplayID:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nickName;
- (id)containerView;
- (void)setupView;

@end
