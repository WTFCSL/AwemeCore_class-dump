//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMessageViewController : MFMessageComposeViewController <MFMessageComposeViewControllerDelegate> {
    id /* block */ _completion;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhoneNumber:(id)arg0 content:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)viewDidLoad;
- (void)messageComposeViewController:(id)arg0 didFinishWithResult:(long long)arg1;

@end