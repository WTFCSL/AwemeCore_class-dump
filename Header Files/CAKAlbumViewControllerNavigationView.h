//
//     Generated by private class-dump
//

@class NSString, UILabel, CAKAlbumSelectAlbumButton, UIButton;

@interface CAKAlbumViewControllerNavigationView : UIView <CAKAlbumNavigationViewProtocol> {
    UIButton *_closeButton;
    UILabel *_titleLabel;
    CAKAlbumSelectAlbumButton *_selectAlbumButton;
    long long _themeType;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAKAlbumSelectAlbumButton *selectAlbumButton;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *enableMultiSelectButton;
@property (retain, nonatomic) UIButton *selectAllAssetsBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)selectAlbumButton;
- (void)setSelectAlbumButton:(id)arg0;
- (id)initWithThemeType:(long long)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (long long)themeType;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setThemeType:(long long)arg0;

@end