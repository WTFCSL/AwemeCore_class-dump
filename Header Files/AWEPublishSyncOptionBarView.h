//
//     Generated by private class-dump
//

@class DUXCheckBox, DUXPopover, UIImageView, NSString, UILabel, UIView, UIButton;

@interface AWEPublishSyncOptionBarView : UIView <DUXPopoverDelegate> {
    BOOL _isBubbleDismissing;
    BOOL _publishSyncStatus;
    BOOL _publishSyncDefaultStatus;
    BOOL _userHasSelected;
    UIView *_lineView;
    UILabel *_syncOptionLabel;
    UIButton *_syncOptionButton;
    DUXCheckBox *_checkBox;
    UIButton *_showDescBubbleButton;
    UIImageView *_showDescBubbleImageView;
    DUXPopover *_syncOptionBarHintbubble;
    long long _syncOptionBarStyle;
    NSString *_hotSpotWord;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *syncOptionLabel;
@property (retain, nonatomic) UIButton *syncOptionButton;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIButton *showDescBubbleButton;
@property (retain, nonatomic) UIImageView *showDescBubbleImageView;
@property (retain, nonatomic) DUXPopover *syncOptionBarHintbubble;
@property (nonatomic) BOOL isBubbleDismissing;
@property (nonatomic) BOOL publishSyncStatus;
@property (nonatomic) BOOL publishSyncDefaultStatus;
@property (nonatomic) BOOL userHasSelected;
@property (nonatomic) long long syncOptionBarStyle;
@property (copy, nonatomic) NSString *hotSpotWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)syncOptionBarHeight;

- (void)popoverDidDisappear:(id)arg0;
- (id)hotSpotWord;
- (void)setHotSpotWord:(id)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (void)configUI;
- (void)updateCurrentStyle:(long long)arg0;
- (void)updateCurrentSyncStatus:(BOOL)arg0;
- (void)updateCurrentHotSpotWord:(id)arg0;
- (BOOL)rememberUserSelection;
- (BOOL)isHideInMyPosts;
- (void)setSyncOptionBarStyle:(long long)arg0;
- (long long)syncOptionBarStyle;
- (id)showDescBubbleImageView;
- (id)syncOptionLabel;
- (BOOL)publishSyncStatus;
- (BOOL)userHasSelected;
- (BOOL)publishSyncDefaultStatus;
- (id)storageKeyForSyncOption;
- (void)updatePublishSyncStatus:(BOOL)arg0;
- (id)syncOptionButton;
- (id)showDescBubbleButton;
- (void)setIsBubbleDismissing:(BOOL)arg0;
- (void)setPublishSyncStatus:(BOOL)arg0;
- (void)setPublishSyncDefaultStatus:(BOOL)arg0;
- (void)setUserHasSelected:(BOOL)arg0;
- (id)syncButtonaccessibilityHint;
- (BOOL)isBubbleDismissing;
- (id)syncOptionBarHintbubble;
- (void)onSelectSyncBtnClicked:(id)arg0;
- (void)onBubbleBtnClicked:(id)arg0;
- (id)hintBubbleText;
- (void)setSyncOptionLabel:(id)arg0;
- (void)setSyncOptionButton:(id)arg0;
- (void)setShowDescBubbleButton:(id)arg0;
- (void)setShowDescBubbleImageView:(id)arg0;
- (void)setSyncOptionBarHintbubble:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end