//
//     Generated by private class-dump
//

@class IESLiveTimorLiveStreamStatusView, IESLiveTimorLiveStreamStatusStore;

@interface IESLiveTimorLiveStreamStatusFragment : IESLiveRoomComponent {
    IESLiveTimorLiveStreamStatusStore *_store;
    IESLiveTimorLiveStreamStatusView *_statusRemindView;
}

@property (retain, nonatomic) IESLiveTimorLiveStreamStatusStore *store;
@property (retain, nonatomic) IESLiveTimorLiveStreamStatusView *statusRemindView;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)timorLiveStatusEnableWithRoom:(id)arg0;

- (void)componentCreate;
- (void)componentMount;
- (void)bindActions;
- (id)statusRemindView;
- (void)setStatusRemindView:(id)arg0;
- (void)bindXLiveObserveActions;
- (void)changeStatusRemindViewStatus:(BOOL)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end
