//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;
@protocol AWEFriendsContactCommonViewDelegate;

@interface AWEFriendsContactCommonView : UIView <AWEFriendsContactCommonViewProtocol> {
    BOOL _shouldHideEntryButton;
    BOOL _shouldUseConstColor;
    id<AWEFriendsContactCommonViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_entryButton;
}

@property (nonatomic) BOOL shouldUseConstColor;
@property (weak, nonatomic) id<AWEFriendsContactCommonViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *entryButton;
@property (nonatomic) BOOL shouldHideEntryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceCommonAdapterClass;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setShouldHideEntryButton:(BOOL)arg0;
- (id)aAFDServiceCommonAdapter;
- (id)entryButton;
- (void)setEntryButton:(id)arg0;
- (id)initWithConstColor:(BOOL)arg0;
- (void)entryButtonDidClicked:(id)arg0;
- (BOOL)shouldHideEntryButton;
- (BOOL)shouldUseConstColor;
- (void)setShouldUseConstColor:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end
