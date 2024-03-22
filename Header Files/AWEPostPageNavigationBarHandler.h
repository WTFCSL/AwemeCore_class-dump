//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageNavigationBarHandler : NSObject <AWEPostPageNavigationBarService> {
    id<AWEPostPageContext> _context;
    long long _backButtonDidClickSignal;
    long long _draftCancelButtonDidClickSignal;
    long long _cancelButtonDidClickSignal;
    long long _finishButtonDidClickSignal;
    long long _draftButtonDidClickSignal;
    long long _publishButtonDidClickSignal;
    long long _switchInputButtonDidClickSignal;
}

@property (nonatomic) long long backButtonDidClickSignal;
@property (nonatomic) long long draftCancelButtonDidClickSignal;
@property (nonatomic) long long cancelButtonDidClickSignal;
@property (nonatomic) long long finishButtonDidClickSignal;
@property (nonatomic) long long draftButtonDidClickSignal;
@property (nonatomic) long long publishButtonDidClickSignal;
@property (nonatomic) long long switchInputButtonDidClickSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)arg0;
- (void)sendBackButtonDidClickSignal;
- (void)sendDraftCancelButtonDidClickSignal;
- (void)sendCancelButtonDidClickSignal;
- (void)sendFinishButtonDidClickSignal;
- (void)sendDraftButtonDidClickSignal;
- (void)sendPublishButtonDidClickSignal;
- (void)sendSwitchInputButtonDidClickSignal;
- (long long)backButtonDidClickSignal;
- (long long)draftCancelButtonDidClickSignal;
- (long long)cancelButtonDidClickSignal;
- (long long)finishButtonDidClickSignal;
- (long long)draftButtonDidClickSignal;
- (long long)publishButtonDidClickSignal;
- (long long)switchInputButtonDidClickSignal;
- (void)setBackButtonDidClickSignal:(long long)arg0;
- (void)setDraftCancelButtonDidClickSignal:(long long)arg0;
- (void)setCancelButtonDidClickSignal:(long long)arg0;
- (void)setFinishButtonDidClickSignal:(long long)arg0;
- (void)setDraftButtonDidClickSignal:(long long)arg0;
- (void)setPublishButtonDidClickSignal:(long long)arg0;
- (void)setSwitchInputButtonDidClickSignal:(long long)arg0;
- (void).cxx_destruct;
- (id)context;

@end