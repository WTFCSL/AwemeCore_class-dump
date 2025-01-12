//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate, UIViewController;

@interface AWERouteTransitionInfo : NSObject {
    BOOL _canOpen;
    NSString *_URLString;
    NSDictionary *_paramsDictionary;
    UIViewController *_targetViewController;
    UIViewController *_sourceViewController;
    long long _transitionType;
    id /* block */ _transitionCompletion;
    id /* block */ _defaultTransitionHandler;
    NSString *_errorMessage;
    NSDate *_start;
    unsigned long long _options;
    id /* block */ _bizTransitionCompletion;
    id /* block */ _transferCompletion;
}

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSDictionary *paramsDictionary;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (nonatomic) long long transitionType;
@property (copy, nonatomic) id /* block */ transitionCompletion;
@property (copy, nonatomic) id /* block */ defaultTransitionHandler;
@property (nonatomic) BOOL canOpen;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSDate *start;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ bizTransitionCompletion;
@property (copy, nonatomic) id /* block */ transferCompletion;

- (BOOL)canOpen;
- (void)completeWithSucceed:(BOOL)arg0 viewController:(id)arg1;
- (id)paramsDictionary;
- (id)targetViewController;
- (id /* block */)defaultTransitionHandler;
- (void)setTargetViewController:(id)arg0;
- (void)setParamsDictionary:(id)arg0;
- (void)setBizTransitionCompletion:(id /* block */)arg0;
- (void)setTransferCompletion:(id /* block */)arg0;
- (id /* block */)transferCompletion;
- (id /* block */)bizTransitionCompletion;
- (void)setCanOpen:(BOOL)arg0;
- (void)setDefaultTransitionHandler:(id /* block */)arg0;
- (id)URLString;
- (long long)transitionType;
- (id)init;
- (void)setTransitionType:(long long)arg0;
- (void)setStart:(id)arg0;
- (void).cxx_destruct;
- (void)setSourceViewController:(id)arg0;
- (void)setOptions:(unsigned long long)arg0;
- (id)sourceViewController;
- (id)start;
- (unsigned long long)options;
- (id)errorMessage;
- (id /* block */)transitionCompletion;
- (void)setTransitionCompletion:(id /* block */)arg0;
- (void)setURLString:(id)arg0;
- (void)setErrorMessage:(id)arg0;

@end
