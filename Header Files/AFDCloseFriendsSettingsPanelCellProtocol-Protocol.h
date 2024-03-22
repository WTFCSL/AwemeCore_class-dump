//
//     Generated by private class-dump
//

@class NSString, AWEUserModel, UIView;

@protocol AFDCloseFriendsSettingsPanelCellProtocol <NSObject>

@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly, nonatomic) AWEUserModel *userModel;
@property (readonly, nonatomic) UIView *lineView;

- (void)addCornerRadius:(double)arg0 corner:(unsigned long long)arg1;
- (void)renderModel:(id)arg0 strategy:(id)arg1;
- (void)enableProfilePageTransition:(BOOL)arg0;
- (id)userModel;
- (id)lineView;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
