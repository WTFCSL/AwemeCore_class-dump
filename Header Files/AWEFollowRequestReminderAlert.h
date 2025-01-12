//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIView, NSNumber, AWEUserModel;
@protocol AWEIMFollowRequestReminderProtocol;

@interface AWEFollowRequestReminderAlert : NSObject <AWEAlertProtocol> {
    BOOL _needsShow;
    id /* block */ _onClose;
    id<AWEIMFollowRequestReminderProtocol> _followRequestReminderView;
    UIView *_parentView;
    AWEUserModel *_user;
    NSNumber *_noticeID;
    NSDictionary *_extraTrackParams;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) id<AWEIMFollowRequestReminderProtocol> followRequestReminderView;
@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *noticeID;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL needsShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (BOOL)canShowWithContext:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (id)followRequestReminderView;
- (void)setNoticeID:(id)arg0;
- (id)noticeID;
- (void)setExtraTrackParams:(id)arg0;
- (id)extraTrackParams;
- (void)setNeedsShow:(BOOL)arg0;
- (BOOL)needsShow;
- (void)configWithParentView:(id)arg0 user:(id)arg1 noticeID:(id)arg2 extraTrackParams:(id)arg3;
- (void)setFollowRequestReminderView:(id)arg0;
- (void)setUser:(id)arg0;
- (id)init;
- (void)dismiss;
- (id)user;
- (void).cxx_destruct;
- (id)parentView;
- (void)setParentView:(id)arg0;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
