//
//     Generated by private class-dump
//

@class DYBindContext;

@interface DYBindContextManager : NSObject {
    DYBindContext *_bindContext;
}

@property (retain, nonatomic) DYBindContext *bindContext;

+ (id)sharedInstance;

- (void)startBindContext:(id)arg0;
- (id)bindContext;
- (void)setBindContext:(id)arg0;
- (void)finishAndCallBlock:(BOOL)arg0;
- (void).cxx_destruct;
- (void)finish;

@end
