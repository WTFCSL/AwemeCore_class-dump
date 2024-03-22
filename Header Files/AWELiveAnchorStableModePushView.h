//
//     Generated by private class-dump
//

@class NSString, AWELiveAnchorStableModePushContent, UILabel, UIView;
@protocol AWEInnerNotificationContentOperator;

@interface AWELiveAnchorStableModePushView : UIView <AWEInnerNotificationContent> {
    id<AWEInnerNotificationContentOperator> notificationOperator;
    UIView *_content;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_actionLabel;
    AWELiveAnchorStableModePushContent *_anchorContentModel;
}

@property (retain, nonatomic) UIView *content;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) AWELiveAnchorStableModePushContent *anchorContentModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)handleTapAction;
- (id)notificationOperator;
- (BOOL)disableDismissPanGesture;
- (double)dismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)arg0;
- (void)setNotificationOperator:(id)arg0;
- (void)setAnchorContentModel:(id)arg0;
- (id)anchorContentModel;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setContent:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)view;
- (id)detailLabel;
- (id)actionLabel;
- (void)setDetailLabel:(id)arg0;
- (void)setActionLabel:(id)arg0;

@end
