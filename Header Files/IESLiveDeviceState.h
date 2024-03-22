//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveDeviceState : NSObject <IESLiveDeviceStateService> {
    BOOL _isLandscape;
    BOOL _isPortrait;
}

@property BOOL isLandscape;
@property BOOL isPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)deviceOrientChange;
- (BOOL)isPortrait;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isLandscape;
- (void)setIsPortrait:(BOOL)arg0;
- (void)startMonitor;

@end
