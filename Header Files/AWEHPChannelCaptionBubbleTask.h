//
//     Generated by private class-dump
//

@class AWEHPCaptionBubbleCallContext, AWEHomePageBubbleTask;
@protocol AWEPzComponentProtocol;

@interface AWEHPChannelCaptionBubbleTask : NSObject <NSCopying> {
    BOOL _isValid;
    BOOL _isShowing;
    BOOL _consumed;
    long long _taskID;
    long long _showTimeStamp;
    AWEHPCaptionBubbleCallContext *_context;
    AWEHomePageBubbleTask *_holdingTask;
    id /* block */ _showBlock;
    id /* block */ _clickBlock;
    id /* block */ _dismissBlock;
    id /* block */ _completionBlock;
    id /* block */ _consumeBlock;
    id<AWEPzComponentProtocol> _component;
}

@property (nonatomic) long long taskID;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL consumed;
@property (nonatomic) long long showTimeStamp;
@property (retain, nonatomic) AWEHPCaptionBubbleCallContext *context;
@property (retain, nonatomic) AWEHomePageBubbleTask *holdingTask;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ consumeBlock;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;

+ (id)createTask;

- (void)setIsShowing:(BOOL)arg0;
- (void)setShowTimeStamp:(long long)arg0;
- (long long)showTimeStamp;
- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)showWithResult:(long long)arg0;
- (void)dismissWithReason:(long long)arg0;
- (void)completionWithSuccess:(BOOL)arg0;
- (id)holdingTask;
- (void)setHoldingTask:(id)arg0;
- (void)setConsumeBlock:(id /* block */)arg0;
- (id /* block */)consumeBlock;
- (BOOL)isIdenticalWithComponentID:(id)arg0;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setContext:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)component;
- (void)setCompletionBlock:(id /* block */)arg0;
- (BOOL)isValid;
- (BOOL)isShowing;
- (void)consume;
- (long long)taskID;
- (id)context;
- (BOOL)consumed;
- (void)cancel;
- (void)setTaskID:(long long)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)setConsumed:(BOOL)arg0;
- (id)description;
- (void)setComponent:(id)arg0;
- (void)click;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (id)initWithTaskID:(long long)arg0;

@end