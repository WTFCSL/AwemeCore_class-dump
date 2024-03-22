//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UILabel, UIButton;

@protocol AWEStudioAuthorityViewProtocol <NSObject>

+ (id)getInstanceForRecordControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withUserGrantedBlock:(id /* block */)arg1;

@property (copy, nonatomic) id /* block */ didClickedCameraAuthorityBtn;
@property (copy, nonatomic) id /* block */ didClickedMikeAuthorityBtn;
@property (retain, nonatomic) UILabel *upLabel;
@property (retain, nonatomic) UILabel *downLabel;
@property (retain, nonatomic) UIButton *cameraAuthorityBtn;
@property (retain, nonatomic) UIButton *mikeAuthorityBtn;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSDictionary *referExtra;
@property (readonly, nonatomic) unsigned long long requiredPermission;

- (void)setUpLabel:(id)arg0;
- (id)upLabel;
- (void)setDownLabel:(id)arg0;
- (id)downLabel;
- (id)referExtra;
- (void)setCameraAuthoritySelected:(BOOL)arg0;
- (void)setDidClickedCameraAuthorityBtn:(id /* block */)arg0;
- (void)setMikeAuthoritySelected:(BOOL)arg0;
- (void)setDidClickedMikeAuthorityBtn:(id /* block */)arg0;
- (id)cameraAuthorityBtn;
- (id /* block */)didClickedCameraAuthorityBtn;
- (void)setCameraAuthorityBtn:(id)arg0;
- (void)setReferExtra:(id)arg0;
- (void)updateWithRequiredPermission:(unsigned long long)arg0;
- (void)updateCameraWidthConstraintsWhenRestricted;
- (id)mikeAuthorityBtn;
- (void)updateMikeWidthConstraintsWhenRestricted;
- (id /* block */)didClickedMikeAuthorityBtn;
- (void)setMikeAuthorityBtn:(id)arg0;
- (unsigned long long)requiredPermission;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end
