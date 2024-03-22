//
//     Generated by private class-dump
//

@interface MSVolumeHelper : NSObject {
    int _isMute;
    int _isLockScreen;
    float _curVolumeSize;
    float _oriVolumeSize;
    id /* block */ _silentNotify;
}

@property (nonatomic) int isMute;
@property (nonatomic) int isLockScreen;
@property (nonatomic) float curVolumeSize;
@property (nonatomic) float oriVolumeSize;
@property (copy, nonatomic) id /* block */ silentNotify;

+ (void)initialize;
+ (id)sharedInstance;

- (void)setIsLockScreen:(int)arg0;
- (void)setIsMute:(int)arg0;
- (id /* block */)silentNotify;
- (void)setSilentNotify:(id /* block */)arg0;
- (void)setCurVolumeSize:(float)arg0;
- (void)setOriVolumeSize:(float)arg0;
- (void)SystemVolumeDidChange:(id)arg0;
- (BOOL)checkTouchIDAndPasscodeStatus;
- (float)curVolumeSize;
- (float)oriVolumeSize;
- (id)init;
- (int)isLockScreen;
- (void).cxx_destruct;
- (void)dealloc;
- (void)volumeChanged:(id)arg0;
- (int)isMute;

@end