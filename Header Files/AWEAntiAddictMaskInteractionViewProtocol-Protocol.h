//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEAntiAddictMaskInteractionViewProtocol <NSObject>

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *laterRemindText;
@property (copy, nonatomic) NSString *exitText;

- (id)enterText;
- (void)setEnterText:(id)arg0;
- (id)exitText;
- (id)laterRemindText;
- (void)setExitText:(id)arg0;
- (void)showInteractionViewAnimationWithCompletion:(id /* block */)arg0;
- (void)setLaterRemindText:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)updateWithConfig:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)reset;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;

@end