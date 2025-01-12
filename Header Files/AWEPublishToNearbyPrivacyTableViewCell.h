//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;
@protocol AWEPublishToNearbyPrivacySelectionViewProtocol;

@interface AWEPublishToNearbyPrivacyTableViewCell : UITableViewCell <AWEPublishToNearbyPrivacyTableViewCellProtocol> {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView<AWEPublishToNearbyPrivacySelectionViewProtocol> *_selectNearbyPrivacyView;
    UIView *_yellowPointView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWEPublishToNearbyPrivacySelectionViewProtocol> *selectNearbyPrivacyView;
@property (retain, nonatomic) UIView *yellowPointView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)yellowPointView;
- (void)setYellowPointView:(id)arg0;
- (void)__buildUI;
- (void)__layoutUI;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1 selectNearbyPrivacyView:(id)arg2;
- (void)setSelectNearbyPrivacyView:(id)arg0;
- (id)selectNearbyPrivacyView;
- (void)showYellowPointViewIfNeeds;
- (void)hiddenYellowPointView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end
