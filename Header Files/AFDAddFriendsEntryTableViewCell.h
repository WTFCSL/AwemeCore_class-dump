//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEUserRecommendNormalContactsViewProtocol;

@interface AFDAddFriendsEntryTableViewCell : UITableViewCell {
    BOOL _isConstColor;
    unsigned long long _type;
    UIView *_containerView;
    UIView *_containerBackgroundView;
    UIView<AWEUserRecommendNormalContactsViewProtocol> *_basicView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerBackgroundView;
@property (retain, nonatomic) UIView<AWEUserRecommendNormalContactsViewProtocol> *basicView;
@property (nonatomic) BOOL isConstColor;
@property (nonatomic) unsigned long long type;

+ (double)suggestHeightWithIsFirstOrLastRow:(BOOL)arg0;
+ (double)heightForAddFriendsEntrySectionWithRowCount:(unsigned long long)arg0;

- (void)p_setupViews;
- (void)setIsConstColor:(BOOL)arg0;
- (id)basicView;
- (void)setBasicView:(id)arg0;
- (id)containerBackgroundView;
- (void)setContainerBackgroundView:(id)arg0;
- (BOOL)isConstColor;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1 isConstColor:(BOOL)arg2;
- (void)updateLayoutWithIsFirstRow:(BOOL)arg0 isLastRow:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setContainerView:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (id)containerView;

@end
