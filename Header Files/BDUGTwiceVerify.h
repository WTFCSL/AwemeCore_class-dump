//
//     Generated by private class-dump
//

@class NSString;
@protocol BDUGTwiceVerifyDelegate;

@interface BDUGTwiceVerify : NSObject {
    id<BDUGTwiceVerifyDelegate> _delegate;
    id /* block */ _callBack;
    NSString *_scene;
    NSString *_appid;
}

@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *appid;
@property (weak, nonatomic) id<BDUGTwiceVerifyDelegate> delegate;

+ (id)sharedInstance;

- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg0;
- (void)startWithRequest:(id)arg0 completion:(id /* block */)arg1;
- (void)requestVerifyAuthResultWithDomain:(id)arg0 params:(id)arg1 complete:(id /* block */)arg2;
- (void)openAuthVerifyFinishWithParams:(id)arg0 authParmas:(id)arg1 error:(id)arg2;
- (void)openLiveAuthFinishWithParams:(id)arg0 error:(id)arg1;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)scene;
- (id)appid;
- (void)setAppid:(id)arg0;

@end
