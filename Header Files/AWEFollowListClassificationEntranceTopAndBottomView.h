//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEFollowListPageContext, UILabel, UIView;

@interface AWEFollowListClassificationEntranceTopAndBottomView : UIView {
    BOOL _unreadNeedTotal;
    BOOL _enableBadgeControl;
    int _entranceTag;
    UIImageView *_icon;
    UILabel *_title;
    NSString *_schema;
    long long _type;
    long long _unreadCount;
    long long _index;
    UIView *_containerView;
    UIView *_redDot;
    NSString *_frequencyControlKey;
    AWEFollowListPageContext *_pageContext;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long type;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) BOOL unreadNeedTotal;
@property (nonatomic) int entranceTag;
@property (nonatomic) BOOL enableBadgeControl;
@property (copy, nonatomic) NSString *frequencyControlKey;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)entranceNameByType:(long long)arg0;

- (id)aAWEPadModuleAdapter;
- (void)showRedDot;
- (BOOL)configModel:(id)arg0;
- (void)handletap:(id)arg0;
- (void)setRedDot:(id)arg0;
- (id)redDot;
- (void)setEntranceTag:(int)arg0;
- (void)setEnableBadgeControl:(BOOL)arg0;
- (id)frequencyControlKey;
- (void)setFrequencyControlKey:(id)arg0;
- (BOOL)enableBadgeControl;
- (int)entranceTag;
- (void)categoryButtonClick:(long long)arg0 unreadCount:(long long)arg1 order:(long long)arg2;
- (BOOL)unreadNeedTotal;
- (void)configBadgeFrequencyControl:(id)arg0;
- (void)setUnreadNeedTotal:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)icon;
- (id)init;
- (void).cxx_destruct;
- (void)setUnreadCount:(long long)arg0;
- (long long)type;
- (void)setContainerView:(id)arg0;
- (id)title;
- (void)setType:(long long)arg0;
- (long long)index;
- (id)containerView;
- (void)setIcon:(id)arg0;
- (void)layoutSubviews;
- (long long)unreadCount;
- (id)schema;
- (void)setTitle:(id)arg0;
- (void)setupView;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
