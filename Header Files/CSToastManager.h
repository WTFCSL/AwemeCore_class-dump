//
//     Generated by private class-dump
//

@class CSToastStyle;

@interface CSToastManager : NSObject {
    BOOL _tapToDismissEnabled;
    BOOL _queueEnabled;
    CSToastStyle *_sharedStyle;
    double _defaultDuration;
    id _defaultPosition;
}

@property (retain, nonatomic) CSToastStyle *sharedStyle;
@property (nonatomic, getter=isTapToDismissEnabled) BOOL tapToDismissEnabled;
@property (nonatomic, getter=isQueueEnabled) BOOL queueEnabled;
@property (nonatomic) double defaultDuration;
@property (retain, nonatomic) id defaultPosition;

+ (void)setSharedStyle:(id)arg0;
+ (void)setDefaultPosition:(id)arg0;
+ (void)setQueueEnabled:(BOOL)arg0;
+ (BOOL)isQueueEnabled;
+ (BOOL)isTapToDismissEnabled;
+ (void)setTapToDismissEnabled:(BOOL)arg0;
+ (void)setDefaultDuration:(double)arg0;
+ (double)defaultDuration;
+ (id)sharedManager;
+ (id)sharedStyle;
+ (id)defaultPosition;

- (void)setSharedStyle:(id)arg0;
- (void)setDefaultPosition:(id)arg0;
- (void)setQueueEnabled:(BOOL)arg0;
- (BOOL)isQueueEnabled;
- (BOOL)isTapToDismissEnabled;
- (void)setTapToDismissEnabled:(BOOL)arg0;
- (void)setDefaultDuration:(double)arg0;
- (id)init;
- (double)defaultDuration;
- (void).cxx_destruct;
- (id)sharedStyle;
- (id)defaultPosition;

@end
