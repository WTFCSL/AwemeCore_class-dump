//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HGAutoTestManager : NSObject {
    NSMutableDictionary *_handlerMap;
}

+ (id)sharedInstance;

- (void)registerHandler:(id)arg0 forAction:(id)arg1;
- (void)autoTestWithParam:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
