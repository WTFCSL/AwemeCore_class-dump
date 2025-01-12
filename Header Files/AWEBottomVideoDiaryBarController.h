//
//     Generated by private class-dump
//

@class AWEButton, NSString, UIImageView, AWEAwemeModel, UIView, AWEAwemeDetailBottomBarCommonContext, UILabel;

@interface AWEBottomVideoDiaryBarController : NSObject <AWEAwemeDetailBottomBarController> {
    AWEAwemeDetailBottomBarCommonContext *_context;
    UIView *_bottomView;
    UIImageView *_coverImageView;
    UILabel *_topicLabel;
    AWEButton *_publishButton;
}

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeDetailBottomBarCommonContext *context;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *topicLabel;
@property (retain, nonatomic) AWEButton *publishButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (void)trackVideoDiaryWithEvent:(id)arg0;
- (void)onPublishButtonTapped:(id)arg0;
- (id)topicLabel;
- (id)publishButton;
- (void)setTopicLabel:(id)arg0;
- (void)setPublishButton:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)bottomView;
- (void)setBottomView:(id)arg0;
- (Class)contextClass;
- (id)bottomBarView;

@end
