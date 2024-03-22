//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface LynxEventReporter : NSObject {
    NSMutableDictionary *_allGenericInfo;
}

@property (retain, nonatomic) NSMutableDictionary *allGenericInfo;

+ (void)onEvent:(id)arg0 instanceId:(int)arg1 props:(id)arg2;
+ (void)updateGenericInfo:(id)arg0 key:(id)arg1 instanceId:(int)arg2;
+ (void)runOnReportThread:(id /* block */)arg0;
+ (void)onEvent:(id)arg0 instanceId:(int)arg1 propsBuilder:(id /* block */)arg2;
+ (void)removeGenericInfo:(int)arg0;
+ (id)sharedInstance;

- (void)handleEvent:(id)arg0 props:(id)arg1 instanceId:(int)arg2;
- (id)allGenericInfo;
- (void)setAllGenericInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end