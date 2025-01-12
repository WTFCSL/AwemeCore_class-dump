//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface AWENewVersionFeedbackView : UIView {
    BOOL _isShowOnRecommendFeedPage;
    UIView *_backgroundView;
    UIImageView *_feedbackImageView;
    UILabel *_feedbackLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *feedbackImageView;
@property (retain, nonatomic) UILabel *feedbackLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL isShowOnRecommendFeedPage;

+ (BOOL)isUserSetHided;
+ (Class)aAWEOuterTestSettingsDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (void)didChangedLanguage;
- (void)setIsShowOnRecommendFeedPage:(BOOL)arg0;
- (BOOL)isShowOnRecommendFeedPage;
- (id)feedbackImageView;
- (void)setFeedbackImageView:(id)arg0;
- (void)setupWindow;
- (void)configureFrame;
- (void)windowClicked:(id)arg0;
- (void)windowLongPressed:(id)arg0;
- (void)setFeedbackLabel:(id)arg0;
- (id)feedbackLabel;
- (id)aAWEOuterTestSettingsDOUYINLiteAdapter;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setTapGestureRecognizer:(id)arg0;
- (id)tapGestureRecognizer;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (void)setupSubviews;
- (void)setupLayout;

@end
