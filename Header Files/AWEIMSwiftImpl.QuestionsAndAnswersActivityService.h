//
//     Generated by private class-dump
//

@interface AWEIMSwiftImpl.QuestionsAndAnswersActivityService : HTSService <AWEUserMessage, AWEIMQuestionsAndAnswersActivityServiceProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_enable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disableText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forbidden;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forbiddenText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reject;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rejectText;
    void /* unknown type, empty encoding */ groupCache;
}

+ (id)questionsAndAnswersActivitySessionKeepAliveConnection;
+ (id)questionsAndAnswersActivitySession;
+ (id)questionsAndAnswersActivitySessionConfiguration;
+ (id)questionsAndAnswersActivityAction;
+ (id)questionsAndAnswersActivityViewModel;
+ (id)questionsAndAnswersActivityBannerView;
+ (id)questionsAndAnswersActivityViewController;

- (void)didFinishLogout;
- (void)onServiceInit;
- (void)enterWithConfiguration:(id)arg0 completion:(id /* block */)arg1;
- (void)enterPageWithSession:(id)arg0 completion:(id /* block */)arg1;
- (id)sessionForShortId:(id)arg0;
- (void)cacheSession:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end