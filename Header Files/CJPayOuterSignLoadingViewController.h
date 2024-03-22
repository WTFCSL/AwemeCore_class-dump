//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayOuterSignLoadingViewController : CJPayOuterBaseViewController <CJPayAPIDelegate> {
    BOOL _isSignOnly;
}

@property (nonatomic) BOOL isSignOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)arg0 fromScene:(long long)arg1;
- (void)onResponse:(id)arg0;
- (void)setIsSignOnly:(BOOL)arg0;
- (void)didFinishParamsCheck:(BOOL)arg0;
- (BOOL)isSignOnly;
- (void)p_requestSignOnlySignInfo;
- (void)p_requestQuerySignInfo;
- (void)p_signAndPayWithResponse:(id)arg0;

@end
