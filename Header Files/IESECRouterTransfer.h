//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIViewController;

@interface IESECRouterTransfer : NSObject {
    NSDictionary *_params;
    NSString *_URLString;
    UIViewController *_sourceViewController;
    id /* block */ _completion;
}

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *URLString;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (copy, nonatomic) id /* block */ completion;

- (void)addCustomHandleWithParam:(id /* block */)arg0;
- (void)preHandleWithSeachParam;
- (id)URLString;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setSourceViewController:(id)arg0;
- (id)sourceViewController;
- (id)params;
- (void)setURLString:(id)arg0;
- (void)setParams:(id)arg0;

@end
