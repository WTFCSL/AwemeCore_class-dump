//
//     Generated by private class-dump
//

@class UIView;

@interface AWEFriendStyleBaseCell : UITableViewCell {
    BOOL _isInsStyle;
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isInsStyle;

+ (id)identifier;

- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1 isInsStyle:(BOOL)arg2;
- (BOOL)isInsStyle;
- (void)setIsInsStyle:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;

@end
