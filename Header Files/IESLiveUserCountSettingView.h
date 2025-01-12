//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, IESLiveUserCountUpdateApi, UIButton;

@interface IESLiveUserCountSettingView : UIView {
    BOOL _clicking;
    int _currentType;
    id /* block */ _userTypeDidChange;
    UIButton *_UVbutton;
    UIButton *_PVbutton;
    UILabel *_contentLabel;
    UIImageView *_imageView;
    UIButton *_confirmButton;
    long long _currentPage;
    IESLiveUserCountUpdateApi *_updateApi;
    NSString *_pvCountIntro;
    NSString *_uvCountIntro;
    NSString *_pvCountUrl;
    NSString *_uvCountUrl;
}

@property (retain, nonatomic) UIButton *UVbutton;
@property (retain, nonatomic) UIButton *PVbutton;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) int currentType;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL clicking;
@property (retain, nonatomic) IESLiveUserCountUpdateApi *updateApi;
@property (retain, nonatomic) NSString *pvCountIntro;
@property (retain, nonatomic) NSString *uvCountIntro;
@property (retain, nonatomic) NSString *pvCountUrl;
@property (retain, nonatomic) NSString *uvCountUrl;
@property (copy, nonatomic) id /* block */ userTypeDidChange;

- (void)setCurrentType:(int)arg0;
- (void)confirmButtonDidClick:(id)arg0;
- (id)buildTitleLabel:(id)arg0;
- (void)updateConfirmButton;
- (id)initWithAudienceDisplayType:(int)arg0;
- (void)setUserTypeDidChange:(id /* block */)arg0;
- (void)setupResource;
- (void)setUvCountIntro:(id)arg0;
- (void)setPvCountIntro:(id)arg0;
- (void)setUvCountUrl:(id)arg0;
- (void)setPvCountUrl:(id)arg0;
- (id)buildContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)buildButtonWithTitle:(id)arg0 isChosen:(BOOL)arg1;
- (void)setUVbutton:(id)arg0;
- (id)UVbutton;
- (void)UVButtonDidClick:(id)arg0;
- (void)setPVbutton:(id)arg0;
- (id)PVbutton;
- (void)PVButtonDidClick:(id)arg0;
- (void)updatebutton:(id)arg0 chosen:(BOOL)arg1;
- (id)uvCountIntro;
- (id)uvCountUrl;
- (id)pvCountIntro;
- (id)pvCountUrl;
- (BOOL)clicking;
- (void)setClicking:(BOOL)arg0;
- (id)updateApi;
- (id /* block */)userTypeDidChange;
- (void)setUpdateApi:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentPage:(long long)arg0;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)updateContentView;
- (long long)currentPage;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (void)updateContent:(id)arg0;
- (int)currentType;

@end
