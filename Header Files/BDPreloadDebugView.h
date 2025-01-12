//
//     Generated by private class-dump
//

@class UILabel;

@interface BDPreloadDebugView : UIView {
    UILabel *_finishLabel;
    UILabel *_runningLabel;
    UILabel *_pendingLabel;
    UILabel *_waitingLabel;
}

@property (class, readonly, nonatomic) BOOL enable;

@property (retain, nonatomic) UILabel *finishLabel;
@property (retain, nonatomic) UILabel *runningLabel;
@property (retain, nonatomic) UILabel *pendingLabel;
@property (retain, nonatomic) UILabel *waitingLabel;

+ (BOOL)isIPhoneXSeries;
+ (id)createLabelWithColor:(id)arg0;
+ (BOOL)enable;
+ (id)sharedInstance;

- (id)finishLabel;
- (void)setFinishLabel:(id)arg0;
- (id)runningLabel;
- (void)setRunningLabel:(id)arg0;
- (void)setPendingLabel:(id)arg0;
- (id)pendingLabel;
- (void)setWaitingLabel:(id)arg0;
- (id)waitingLabel;
- (id)init;
- (void).cxx_destruct;
- (void)_setup;

@end
