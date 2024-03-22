//
//     Generated by private class-dump
//

@class NSError, AWEECJumpToMallContextModel, AWEAwemeModel;

@interface AWEECFeedMallJumpGuideAction : NSObject {
    BOOL _isFeedShowing;
    BOOL _isActive;
    BOOL _running;
    AWEECJumpToMallContextModel *_jumpTabGrassContext;
    AWEAwemeModel *_awemeModel;
    NSError *_error;
    id /* block */ _completion;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isFeedShowing;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL running;
@property (retain, nonatomic) AWEECJumpToMallContextModel *jumpTabGrassContext;

+ (id)mallJumpGuideActionWithContextModel:(id)arg0;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)initWithContextModel:(id)arg0;
- (void)checkCanStart;
- (void)setIsFeedShowing:(BOOL)arg0;
- (BOOL)isFeedShowing;
- (void)setJumpTabGrassContext:(id)arg0;
- (void)active:(id /* block */)arg0;
- (void)markFeedShowing;
- (BOOL)checkCanShowTab;
- (id)jumpTabGrassContext;
- (BOOL)running;
- (void)setRunning:(BOOL)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)handleNotification:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (void)stop;
- (BOOL)isActive;
- (void)setError:(id)arg0;
- (id)error;
- (void)finishWithError:(id)arg0;

@end