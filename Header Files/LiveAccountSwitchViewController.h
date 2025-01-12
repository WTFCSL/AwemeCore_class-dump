//
//     Generated by private class-dump
//

@class NSString, LiveAccountSwitchButton, UILabel, LiveAccountSwitchModel, UIButton;

@interface LiveAccountSwitchViewController : UIViewController {
    BOOL _isAnchor;
    id /* block */ _completionBlock;
    NSString *_otherUID;
    NSString *_currentUID;
    LiveAccountSwitchModel *_model;
    UIButton *_acceptButton;
    LiveAccountSwitchButton *_currentUserButton;
    LiveAccountSwitchButton *_otherButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_nickNameLabel;
}

@property (retain, nonatomic) NSString *otherUID;
@property (retain, nonatomic) NSString *currentUID;
@property (retain, nonatomic) LiveAccountSwitchModel *model;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) LiveAccountSwitchButton *currentUserButton;
@property (retain, nonatomic) LiveAccountSwitchButton *otherButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)setIsAnchor:(BOOL)arg0;
- (id)currentUID;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setCurrentUID:(id)arg0;
- (void)acceptAction;
- (id)initWithModel:(id)arg0 isAnchor:(BOOL)arg1;
- (id)currentUserButton;
- (void)tapCurrentUserButton;
- (void)tapOtherButton;
- (id)sec_uid2uid:(id)arg0;
- (id)otherUID;
- (void)setOtherUID:(id)arg0;
- (void)setCurrentUserButton:(id)arg0;
- (void)setModel:(id)arg0;
- (void)dismissAction;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)model;
- (BOOL)isAnchor;
- (id)titleLabel;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (void)setOtherButton:(id)arg0;
- (id)otherButton;

@end
