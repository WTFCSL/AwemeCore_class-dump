//
//     Generated by private class-dump
//

@class UIButton, UILabel, NSString;

@interface AWECloudAlbumResourceBottomView : UIView <ACCSelectedAssetsBottomViewProtocol> {
    BOOL _doAnimation;
    UILabel *_titleLabel;
    UIButton *_nextButton;
}

@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForBottomView;

- (BOOL)doAnimation;
- (void)setDoAnimation:(BOOL)arg0;
- (void)updateStateWith:(BOOL)arg0;
- (void)makeConstraint;
- (id)init;
- (void).cxx_destruct;
- (id)customBackgroundColor;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)nextButton;
- (void)setNextButton:(id)arg0;

@end
