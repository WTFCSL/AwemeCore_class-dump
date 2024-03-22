//
//     Generated by private class-dump
//

@class DUXInAppNotificationInteractiveComponentView, UILabel, UIView, DUXInAppNotificationConfig;
@protocol DUXInAppNotificationViewDelegate;

@interface DUXInAppNotificationMainContentView : UIView {
    DUXInAppNotificationConfig *_config;
    id<DUXInAppNotificationViewDelegate> _delegate;
    UILabel *_primaryTextLabel;
    UILabel *_secondaryTextLabel;
    UIView *_headerComponentView;
    UIView *_headerSubView;
    DUXInAppNotificationInteractiveComponentView *_interactiveComponentView;
    UIView *_parentInAppNotificationView;
}

@property (retain, nonatomic) DUXInAppNotificationConfig *config;
@property (retain, nonatomic) UILabel *primaryTextLabel;
@property (retain, nonatomic) UILabel *secondaryTextLabel;
@property (retain, nonatomic) UIView *headerComponentView;
@property (retain, nonatomic) UIView *headerSubView;
@property (retain, nonatomic) DUXInAppNotificationInteractiveComponentView *interactiveComponentView;
@property (weak, nonatomic) UIView *parentInAppNotificationView;
@property (weak, nonatomic) id<DUXInAppNotificationViewDelegate> delegate;

- (void)updateWithConfig:(id)arg0 andDelegate:(id)arg1 andParentInAppNotificationView:(id)arg2;
- (id)initWithConfig:(id)arg0 andDelegate:(id)arg1 andParentInAppNotificationView:(id)arg2;
- (void)setParentInAppNotificationView:(id)arg0;
- (id)parentInAppNotificationView;
- (void)headerSubViewWithConfig:(id)arg0;
- (id)primaryTextLabel;
- (id)interactiveComponentView;
- (id)headerSubView;
- (void)setHeaderSubView:(id)arg0;
- (void)setPrimaryTextLabel:(id)arg0;
- (void)setInteractiveComponentView:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)config;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)secondaryTextLabel;
- (void)setSecondaryTextLabel:(id)arg0;
- (id)headerComponentView;
- (void)setHeaderComponentView:(id)arg0;

@end