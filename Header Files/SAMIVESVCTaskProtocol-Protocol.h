//
//     Generated by private class-dump
//

@protocol SAMIVESVCTaskEventDelegate;

@protocol SAMIVESVCTaskProtocol <NSObject>

@property (weak, nonatomic) id<SAMIVESVCTaskEventDelegate> eventDelegate;

- (void)prepareWithConfig:(id)arg0;
- (void)prepareToRelease;
- (void)startWithGroup:(id)arg0;
- (void)forceStopAndRelease;
- (id)eventDelegate;
- (void)prepareForReuse;
- (void)setEventDelegate:(id)arg0;

@end
