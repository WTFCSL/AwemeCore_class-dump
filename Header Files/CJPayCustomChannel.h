//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayCustomChannel : CJPayBasicChannel {
    BOOL _wakingApp;
    NSString *_scheme;
}

@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) BOOL wakingApp;

+ (void)registerPlugin;

- (BOOL)canProcessWithURL:(id)arg0;
- (void)payActionWithDataDict:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)setWakingApp:(BOOL)arg0;
- (BOOL)wakingApp;
- (void)setScheme:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)scheme;
- (void)dealloc;
- (void)appWillEnterForeground;

@end
