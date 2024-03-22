//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSTimer;

@interface BDUGLuckyDogPopUpObj : NSObject {
    BOOL _keepAlive;
    BOOL _isLynxPopObj;
    NSString *_dialogName;
    double _nextPollingTime;
    long long _priority;
    NSDictionary *_extraInfo;
    id /* block */ _shouldShowHandler;
    id /* block */ _showPopUpHandler;
    id /* block */ _forceHideHandler;
    NSTimer *_expiredTimer;
}

@property (copy, nonatomic) NSString *dialogName;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ shouldShowHandler;
@property (copy, nonatomic) id /* block */ showPopUpHandler;
@property (copy, nonatomic) id /* block */ forceHideHandler;
@property (retain, nonatomic) NSTimer *expiredTimer;
@property (nonatomic) BOOL keepAlive;
@property (nonatomic) BOOL isLynxPopObj;
@property (nonatomic) double nextPollingTime;

- (void)setExtraInfo:(id)arg0;
- (void)setupExpiredTimer;
- (void)renewalExpiredTimer;
- (double)nextPollingTime;
- (void)setNextPollingTime:(double)arg0;
- (void)setDialogName:(id)arg0;
- (void)setShouldShowHandler:(id /* block */)arg0;
- (void)setShowPopUpHandler:(id /* block */)arg0;
- (void)setForceHideHandler:(id /* block */)arg0;
- (id)dialogName;
- (id /* block */)shouldShowHandler;
- (id /* block */)forceHideHandler;
- (id /* block */)showPopUpHandler;
- (BOOL)finishSelfWithType:(unsigned long long)arg0;
- (BOOL)removeSelf;
- (BOOL)isLynxPopObj;
- (void)setIsLynxPopObj:(BOOL)arg0;
- (id)expiredTimer;
- (void)setExpiredTimer:(id)arg0;
- (BOOL)keepAlive;
- (id)init;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)setPriority:(long long)arg0;
- (void)setKeepAlive:(BOOL)arg0;
- (void)dealloc;
- (long long)priority;
- (void)onTimer;
- (id)extraInfo;

@end