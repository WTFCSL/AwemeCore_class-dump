//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSShadow;

@interface AWEVideoDiaryTagView : UIView {
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    NSShadow *_nameShadow;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSShadow *nameShadow;

- (void)updateIconImage:(id)arg0 name:(id)arg1;
- (id)nameShadow;
- (void)setNameShadow:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)nameLabel;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)buildView;

@end
