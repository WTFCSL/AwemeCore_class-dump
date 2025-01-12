//
//     Generated by private class-dump
//

@class NSError, NSString;

@interface AWESECAppJumpRulerResult : AWESECAppJumpBasicCheckResult {
    NSError *_engineError;
    NSString *_strategyHit;
    long long _silentModeDuration;
    NSString *_style;
    NSString *_heading;
    NSString *_body;
    NSString *_leftButton;
    NSString *_rightButton;
}

@property (retain, nonatomic) NSError *engineError;
@property (retain, nonatomic) NSString *strategyHit;
@property (nonatomic) long long silentModeDuration;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *leftButton;
@property (copy, nonatomic) NSString *rightButton;

- (void)setEngineError:(id)arg0;
- (id)engineError;
- (id)strategyHit;
- (long long)silentModeDuration;
- (void)setStrategyHit:(id)arg0;
- (void)setSilentModeDuration:(long long)arg0;
- (void)setHeading:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (void)setBody:(id)arg0;
- (id)leftButton;
- (id)style;
- (id)body;
- (id)rightButton;
- (id)init;
- (id)heading;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (void)setStyle:(id)arg0;

@end
