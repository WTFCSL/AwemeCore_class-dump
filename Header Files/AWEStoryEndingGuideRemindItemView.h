//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface AWEStoryEndingGuideRemindItemView : UIView {
    UIImageView *_iconView;
    UILabel *_remindLabel;
    NSString *_iconStr;
    NSString *_remindStr;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *remindLabel;
@property (copy, nonatomic) NSString *iconStr;
@property (copy, nonatomic) NSString *remindStr;

- (void)setIconStr:(id)arg0;
- (void)setRemindStr:(id)arg0;
- (void)setUpItemUI;
- (id)remindLabel;
- (id)initWithIcon:(id)arg0 remindLabelText:(id)arg1;
- (void)setRemindLabel:(id)arg0;
- (id)iconStr;
- (id)remindStr;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end