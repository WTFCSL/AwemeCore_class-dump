//
//     Generated by private class-dump
//

@class UIView;

@interface CSJDynamicClickInfo : NSObject {
    BOOL _openPlayableLandingPage;
    BOOL _removeOpenPlayableLandingPage;
    UIView *_responseView;
    long long _clickViewSource;
    long long _convertActionType;
    long long _downTime;
    long long _upTime;
    struct CGPoint { double x; double y; } _downPoint;
    struct CGPoint { double x; double y; } _upPoint;
    struct CGPoint { double x; double y; } _reportDownPoint;
    struct CGPoint { double x; double y; } _reportUpPoint;
}

@property (nonatomic) long long downTime;
@property (nonatomic) long long upTime;
@property (nonatomic) struct CGPoint { double x; double y; } reportDownPoint;
@property (nonatomic) struct CGPoint { double x; double y; } reportUpPoint;
@property (weak, nonatomic) UIView *responseView;
@property (nonatomic) struct CGPoint { double x; double y; } downPoint;
@property (nonatomic) struct CGPoint { double x; double y; } upPoint;
@property (nonatomic) long long clickViewSource;
@property (nonatomic) BOOL openPlayableLandingPage;
@property (nonatomic) BOOL removeOpenPlayableLandingPage;
@property (nonatomic) long long convertActionType;

- (BOOL)openPlayableLandingPage;
- (void)setDownPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setUpPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setClickViewSource:(long long)arg0;
- (long long)convertActionType;
- (void)setConvertActionType:(long long)arg0;
- (struct CGPoint { double x0; double x1; })reportDownPoint;
- (long long)downTime;
- (struct CGPoint { double x0; double x1; })reportUpPoint;
- (struct CGPoint { double x0; double x1; })upPoint;
- (void)setReportUpPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })downPoint;
- (void)setReportDownPoint:(struct CGPoint { double x0; double x1; })arg0;
- (long long)clickViewSource;
- (void)setUpTime:(long long)arg0;
- (void)setDownTime:(long long)arg0;
- (void)mapToView:(id)arg0;
- (BOOL)removeOpenPlayableLandingPage;
- (void)setRemoveOpenPlayableLandingPage:(BOOL)arg0;
- (void)setOpenPlayableLandingPage:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (long long)upTime;
- (id)keyPrefix;
- (id)responseView;
- (void)setResponseView:(id)arg0;

@end
