//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveResouceBundleHooker : NSObject <IESLiveResouceBundleHookerProtocol> {
    id /* block */ _preHook;
    id /* block */ _postHook;
}

@property (copy, nonatomic) id /* block */ preHook;
@property (copy, nonatomic) id /* block */ postHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreHook:(id /* block */)arg0 postHook:(id /* block */)arg1;
- (void)setPreHook:(id /* block */)arg0;
- (void)setPostHook:(id /* block */)arg0;
- (id /* block */)preHook;
- (id /* block */)postHook;
- (void).cxx_destruct;

@end