//
//     Generated by private class-dump
//

@interface AWEAwemeClearScreenManager : NSObject {
    BOOL _isInClearScreen;
    BOOL _enterByLongPressPanel;
    BOOL _enterByPauseFrameWork;
    BOOL _exitByLongPressPanel;
    double _enterClearScreenTime;
}

@property (nonatomic) BOOL isInClearScreen;
@property (nonatomic) BOOL enterByLongPressPanel;
@property (nonatomic) BOOL enterByPauseFrameWork;
@property (nonatomic) BOOL exitByLongPressPanel;
@property (nonatomic) double enterClearScreenTime;

+ (id)shareManager;

- (BOOL)isInClearScreen;
- (BOOL)enterByLongPressPanel;
- (BOOL)enterByPauseFrameWork;
- (void)trackerEnterClearScreen:(id)arg0 enterMethod:(id)arg1 referStr:(id)arg2 model:(id)arg3;
- (BOOL)exitByLongPressPanel;
- (void)trackerExitClearScreen:(id)arg0 enterMethod:(id)arg1 referStr:(id)arg2 model:(id)arg3 duration:(long long)arg4 exitMethod:(id)arg5;
- (void)setEnterByPauseFrameWork:(BOOL)arg0;
- (void)setIsInClearScreen:(BOOL)arg0;
- (double)enterClearScreenTime;
- (void)setEnterByLongPressPanel:(BOOL)arg0;
- (void)setExitByLongPressPanel:(BOOL)arg0;
- (void)trackerExitElementClearScreen:(id)arg0 enterMethod:(id)arg1 referStr:(id)arg2 model:(id)arg3 exitMethod:(id)arg4;
- (long long)getPureModeType;
- (long long)getPureModeEntryPosition;
- (void)setEnterClearScreenTime:(double)arg0;
- (void)resetTracker;

@end
