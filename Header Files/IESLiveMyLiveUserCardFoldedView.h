//
//     Generated by private class-dump
//

@class IESLiveCircleRollLabel;

@interface IESLiveMyLiveUserCardFoldedView : IESLiveUserCard {
    IESLiveCircleRollLabel *_nickNameLabel;
}

@property (retain, nonatomic) IESLiveCircleRollLabel *nickNameLabel;

- (void)didSetAttachingDIContext;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (id)initWithStore:(id)arg0 landscapeMode:(BOOL)arg1;
- (void)setupBackgroundContainer;
- (id)colorOfBackground;
- (void)setupUsercardHierarchy;
- (void)setupUIContainer;
- (id)createNickNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createAvatarView;

@end
