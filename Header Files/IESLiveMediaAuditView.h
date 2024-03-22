//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESLiveMediaAuditView : UIView <IESLiveAnchorMediaAuditActions> {
    UIView *_mainContentView;
    UIButton *_startLiveButton;
    UIImageView *_finishedIcon;
    UIImageView *_reviewIcon;
    UILabel *_titleLabel;
    UILabel *_instructionLabel;
}

@property (retain, nonatomic) UIView *mainContentView;
@property (retain, nonatomic) UIButton *startLiveButton;
@property (retain, nonatomic) UIImageView *finishedIcon;
@property (retain, nonatomic) UIImageView *reviewIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *instructionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startLive;
- (void)setAuditStatus:(BOOL)arg0;
- (id)startLiveButton;
- (id)reviewIcon;
- (id)finishedIcon;
- (void)setStartLiveButton:(id)arg0;
- (void)setFinishedIcon:(id)arg0;
- (void)setReviewIcon:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)instructionLabel;
- (void)setInstructionLabel:(id)arg0;
- (void)setMainContentView:(id)arg0;
- (id)mainContentView;

@end