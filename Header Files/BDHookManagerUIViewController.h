//
//     Generated by private class-dump
//

@class NSString;

@interface BDHookManagerUIViewController : BDSystemClassHookManager <UIViewControllerBDHookProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)viewControllerLoadView:(id)arg0;
+ (void)viewControllerViewDidLoad:(id)arg0;
+ (void)viewController:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)viewController:(id)arg0 dismissViewController:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)viewControllerViewDidLayoutSubviews:(id)arg0;
+ (void)viewController:(id)arg0 viewWillDisappear:(BOOL)arg1;
+ (void)viewController:(id)arg0 viewWillAppear:(BOOL)arg1;
+ (void)viewController:(id)arg0 viewDidDisappear:(BOOL)arg1;
+ (void)viewController:(id)arg0 viewDidAppear:(BOOL)arg1;

@end
