//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWERegisterPageAgeAndGenderSelectCollectionViewCell : UICollectionViewCell {
    long long _type;
    UILabel *_contenTextLabel;
    UIImageView *_iconView;
    UILabel *_selectBirthdayTipsLabel;
}

@property (retain, nonatomic) UILabel *contenTextLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *selectBirthdayTipsLabel;
@property (nonatomic) long long type;

+ (id)identifier;

- (void)configWithContentType:(long long)arg0;
- (void)removeDarkBorder;
- (void)addDarkBorder;
- (void)setBirthdayWith:(id)arg0;
- (id)contenTextLabel;
- (id)selectBirthdayTipsLabel;
- (void)configWithContentText:(id)arg0;
- (void)setContenTextLabel:(id)arg0;
- (void)setSelectBirthdayTipsLabel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(long long)arg0;
- (void)setupUI;

@end
