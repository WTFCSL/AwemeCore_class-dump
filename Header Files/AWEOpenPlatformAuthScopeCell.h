//
//     Generated by private class-dump
//

@class UIButton, UIImageView, TTTAttributedLabel, AWEOpenPlatformAuthScopeItem, DUXCheckBox;
@protocol AWEOpenPlatformScopeDelegate;

@interface AWEOpenPlatformAuthScopeCell : UITableViewCell {
    BOOL _isHalf;
    id<AWEOpenPlatformScopeDelegate> _delegate;
    TTTAttributedLabel *_scopeNameLabel;
    TTTAttributedLabel *_scopeDescLabel;
    DUXCheckBox *_checkBox;
    UIImageView *_leftImageView;
    UIButton *_rightTipsView;
    AWEOpenPlatformAuthScopeItem *_item;
    long long _authUICase;
}

@property (retain, nonatomic) TTTAttributedLabel *scopeNameLabel;
@property (retain, nonatomic) TTTAttributedLabel *scopeDescLabel;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIButton *rightTipsView;
@property (retain, nonatomic) AWEOpenPlatformAuthScopeItem *item;
@property (nonatomic) long long authUICase;
@property (nonatomic) BOOL isHalf;
@property (weak, nonatomic) id<AWEOpenPlatformScopeDelegate> delegate;

+ (double)marginTopOfScopeNameLabelWithUICase:(long long)arg0;
+ (double)heightForScopeItem:(id)arg0 topMargin:(double)arg1 width:(double)arg2;
+ (double)maxWidthOfScopeNameLabelWithCellWidth:(double)arg0 item:(id)arg1;
+ (id)attributedStringFromScopeItem:(id)arg0 style:(unsigned long long)arg1;
+ (id)scopeDescLabelFont;
+ (double)marginHorizonalWithUICase:(long long)arg0;
+ (id)scopeNameLabelColorWithItem:(id)arg0 style:(unsigned long long)arg1;
+ (id)scopeNameLabelFontWithUICase:(long long)arg0;

- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (long long)authUICase;
- (void)setAuthUICase:(long long)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1 uiCase:(long long)arg2 isHalf:(BOOL)arg3 cellWidth:(double)arg4;
- (void)configureWithModel:(id)arg0 style:(unsigned long long)arg1 topMargin:(double)arg2;
- (void)updateCheckStatusWithModel:(id)arg0 style:(unsigned long long)arg1;
- (id)scopeNameLabel;
- (id)scopeDescLabel;
- (id)rightTipsView;
- (void)tapRightTips:(id)arg0;
- (BOOL)isHalf;
- (id)noAuthDiaLogTitle;
- (void)setScopeNameLabel:(id)arg0;
- (void)setScopeDescLabel:(id)arg0;
- (void)setRightTipsView:(id)arg0;
- (void)setIsHalf:(BOOL)arg0;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setItem:(id)arg0;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg0;

@end