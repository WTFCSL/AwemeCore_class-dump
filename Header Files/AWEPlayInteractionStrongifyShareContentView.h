//
//     Generated by private class-dump
//

@class UIStackView, NSArray, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEIMShareModelProtocol;

@interface AWEPlayInteractionStrongifyShareContentView : UIView {
    BOOL _isFromGoldShareToIMEntrance;
    BOOL _isOnline;
    id /* block */ _didClickAvatarAction;
    id /* block */ _didClickShareLabelAction;
    NSDictionary *_incentiveChatTrackParams;
    unsigned long long _style;
    UIView *_subSingleContentView;
    UIView *_subMultiContentView;
    unsigned long long _type;
    NSArray *_dataSource;
    UIStackView *_avatarStackView;
    AWEAwemeModel *_awemeModel;
    UIView *_onlineDotView;
    id<AWEIMShareModelProtocol> _userModel;
}

@property (retain, nonatomic) UIView *subSingleContentView;
@property (retain, nonatomic) UIView *subMultiContentView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UIStackView *avatarStackView;
@property (retain, nonatomic) NSDictionary *incentiveChatTrackParams;
@property (nonatomic) BOOL isFromGoldShareToIMEntrance;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> userModel;
@property (nonatomic) BOOL isOnline;
@property (copy, nonatomic) id /* block */ didClickAvatarAction;
@property (copy, nonatomic) id /* block */ didClickShareLabelAction;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)onlineDotView;
- (void)setOnlineDotView:(id)arg0;
- (void)p_updateActiveUserState;
- (id)createSingleContentViewIfNeeded;
- (void)setSubSingleContentView:(id)arg0;
- (id)subSingleContentView;
- (id)createMultiContentViewIfNeeded;
- (void)setSubMultiContentView:(id)arg0;
- (id)subMultiContentView;
- (void)setIsFromGoldShareToIMEntrance:(BOOL)arg0;
- (id)createGoldIconView;
- (id)createGoldLabelView;
- (id /* block */)didClickAvatarAction;
- (void)didClickShareLabel;
- (id /* block */)didClickShareLabelAction;
- (id)initWithShareModels:(id)arg0 shareViewType:(unsigned long long)arg1 awemeModel:(id)arg2;
- (void)changeBgColorToRed;
- (void)setDidClickAvatarAction:(id /* block */)arg0;
- (void)setDidClickShareLabelAction:(id /* block */)arg0;
- (id)incentiveChatTrackParams;
- (void)setIncentiveChatTrackParams:(id)arg0;
- (BOOL)isFromGoldShareToIMEntrance;
- (unsigned long long)style;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)dealloc;
- (void)setStyle:(unsigned long long)arg0;
- (BOOL)isOnline;
- (void)createContentView;
- (id)avatarStackView;
- (void)setAvatarStackView:(id)arg0;
- (void)setIsOnline:(BOOL)arg0;

@end
