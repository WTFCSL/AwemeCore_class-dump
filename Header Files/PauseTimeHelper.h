//
//     Generated by private class-dump
//

@class LynxUI;

@interface PauseTimeHelper : NSObject {
    double _pauseTime;
    LynxUI *_ui;
}

@property (nonatomic) double pauseTime;
@property (weak, nonatomic) LynxUI *ui;

- (id)initWithUI:(id)arg0;
- (void)recordPauseTime;
- (double)getPauseDuration;
- (void).cxx_destruct;
- (id)ui;
- (double)pauseTime;
- (void)setPauseTime:(double)arg0;
- (void)setUi:(id)arg0;

@end
