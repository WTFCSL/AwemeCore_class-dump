//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSTimer, AWEPerfFMPCalculateConfig, AWEPerfFMPGestureRecognizer, NSMutableArray, UIView;
@protocol AWEPerfFMPCalculateDelegate;

@interface AWEPerfFMPCalculator : NSObject <UIGestureRecognizerDelegate> {
    BOOL _respondToGesture;
    BOOL _isCalculating;
    BOOL _timeoutCancelled;
    BOOL _shouldUpdateRecord;
    int _screenWidth;
    int _screenHeight;
    int _totalCalculateCount;
    double _timeThreshold;
    AWEPerfFMPCalculateConfig *_config;
    id<AWEPerfFMPCalculateDelegate> _delegate;
    double _startTime;
    double _lastRenderTime;
    double _fmpDuration;
    double _totalCostTime;
    char *_widthBitMap;
    char *_heightBitMap;
    UIView *_currentCalculateView;
    id /* block */ _completionHandler;
    AWEPerfFMPGestureRecognizer *_gestureRecognizer;
    NSMutableArray *_meaningfulClasses;
    NSTimer *_timeoutTimer;
    NSTimer *_completedTimer;
    NSMutableDictionary *_lastRenderInfos;
    NSTimer *_scheduledTimer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenBounds;
}

@property (nonatomic) BOOL isCalculating;
@property (nonatomic) BOOL timeoutCancelled;
@property (nonatomic) int screenWidth;
@property (nonatomic) int screenHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenBounds;
@property (nonatomic) double startTime;
@property (nonatomic) double lastRenderTime;
@property (nonatomic) double fmpDuration;
@property (nonatomic) double totalCostTime;
@property (nonatomic) int totalCalculateCount;
@property (nonatomic) char *widthBitMap;
@property (nonatomic) char *heightBitMap;
@property (weak, nonatomic) UIView *currentCalculateView;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) AWEPerfFMPGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSMutableArray *meaningfulClasses;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (retain, nonatomic) NSTimer *completedTimer;
@property (retain, nonatomic) NSMutableDictionary *lastRenderInfos;
@property (retain, nonatomic) NSTimer *scheduledTimer;
@property (nonatomic) BOOL shouldUpdateRecord;
@property (nonatomic) double timeThreshold;
@property (retain, nonatomic) AWEPerfFMPCalculateConfig *config;
@property (weak, nonatomic) id<AWEPerfFMPCalculateDelegate> delegate;
@property (nonatomic) BOOL respondToGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timeThreshold;
- (void)setTimeThreshold:(double)arg0;
- (void)setLastRenderTime:(double)arg0;
- (id)scheduledTimer;
- (void)setScheduledTimer:(id)arg0;
- (double)totalCostTime;
- (void)setTotalCostTime:(double)arg0;
- (int)totalCalculateCount;
- (void)setTotalCalculateCount:(int)arg0;
- (void)calculateFMPForView:(id)arg0 startTime:(double)arg1 completion:(id /* block */)arg2;
- (void)setRespondToGesture:(BOOL)arg0;
- (void)userInteractionHappened;
- (void)layoutHappened;
- (id)currentCalculateView;
- (void)updateRecordWithInnerFMPForView:(id)arg0 offsetX:(double)arg1 offsetY:(double)arg2 widthBitMap:(char *)arg3 heightBitMap:(char *)arg4;
- (void)updateFMPRecordForView:(id)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (void)cancelPerformTimeout;
- (void)performCompletedAfterDelay:(double)arg0;
- (BOOL)isMeaningfulClasses:(id)arg0;
- (void)updateRecordForSubviewsForView:(id)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (void)calculateInnerFMPForView:(id)arg0 currentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 innerWidthBitMap:(const char *)arg2 innerHeightBitMap:(const char *)arg3;
- (void)calculateCompleted;
- (void)stopFMPCalculate;
- (void)calculateCompletedWithResult:(unsigned long long)arg0;
- (void)resetCalculate;
- (void)performTimeoutAfterDelay:(double)arg0;
- (void)updateRecordIfNeed;
- (BOOL)respondToGesture;
- (void)setIsCalculating:(BOOL)arg0;
- (BOOL)timeoutCancelled;
- (void)setTimeoutCancelled:(BOOL)arg0;
- (double)fmpDuration;
- (void)setFmpDuration:(double)arg0;
- (char *)widthBitMap;
- (void)setWidthBitMap:(char *)arg0;
- (char *)heightBitMap;
- (void)setHeightBitMap:(char *)arg0;
- (void)setCurrentCalculateView:(id)arg0;
- (id)meaningfulClasses;
- (void)setMeaningfulClasses:(id)arg0;
- (id)completedTimer;
- (void)setCompletedTimer:(id)arg0;
- (id)lastRenderInfos;
- (void)setLastRenderInfos:(id)arg0;
- (BOOL)shouldUpdateRecord;
- (void)setShouldUpdateRecord:(BOOL)arg0;
- (void)setGestureRecognizer:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (int)screenWidth;
- (id)gestureRecognizer;
- (void)setCompletionHandler:(id /* block */)arg0;
- (id)config;
- (void)setScreenWidth:(int)arg0;
- (void)setScreenHeight:(int)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)delegate;
- (int)screenHeight;
- (double)startTime;
- (id /* block */)completionHandler;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBounds;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isCalculating;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg0;
- (double)lastRenderTime;
- (void)calculateTimeout;

@end
