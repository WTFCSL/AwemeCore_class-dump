//
//     Generated by private class-dump
//

@interface IESECPDPState : NSObject {
    BOOL _renderedFirst;
    BOOL _packFinished;
    BOOL _packDetailFinished;
    long long _currentMode;
    double _currentPercent;
}

@property (nonatomic) long long currentMode;
@property (nonatomic) double currentPercent;
@property (nonatomic) BOOL renderedFirst;
@property (nonatomic) BOOL packFinished;
@property (nonatomic) BOOL packDetailFinished;

- (void)setCurrentPercent:(double)arg0;
- (double)currentPercent;
- (void)receicveAction:(id)arg0;
- (BOOL)renderedFirst;
- (void)setRenderedFirst:(BOOL)arg0;
- (BOOL)packFinished;
- (void)setPackFinished:(BOOL)arg0;
- (BOOL)packDetailFinished;
- (void)setPackDetailFinished:(BOOL)arg0;
- (long long)currentMode;
- (void)setCurrentMode:(long long)arg0;

@end
