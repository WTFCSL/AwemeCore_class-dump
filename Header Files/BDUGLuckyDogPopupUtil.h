//
//     Generated by private class-dump
//

@interface BDUGLuckyDogPopupUtil : NSObject {
    id /* block */ _alertHandler;
}

@property (copy, nonatomic) id /* block */ alertHandler;

+ (id)getGlobalBlockListOfType:(long long)arg0;
+ (void)alert:(id)arg0;
+ (BOOL)enableFeedbackBypass;
+ (id)sharedInstance;

- (id /* block */)alertHandler;
- (void)setAlertHandler:(id /* block */)arg0;
- (void).cxx_destruct;

@end
