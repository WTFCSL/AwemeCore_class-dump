//
//     Generated by private class-dump
//

@protocol NLEModelExporterDelegate <NSObject>

@optional

- (void)onCompileDone:(id)arg0;
- (void)onCompileError:(int)arg0 ext:(int)arg1 f:(float)arg2 msg:(id)arg3;
- (void)onVeError:(int)arg0 ext:(int)arg1 f:(float)arg2 msg:(id)arg3;
- (void)onCompileProgress:(float)arg0;
- (void)onCompileStart:(id)arg0;

@end
