//
//     Generated by private class-dump
//

@interface IESLiveResourceLoadTraceHandler : NSObject {
    BOOL _booting;
}

@property (nonatomic) BOOL booting;

+ (id)handler;

- (void)recordLoadType:(unsigned long long)arg0 name:(id)arg1;
- (void)setBooting:(BOOL)arg0;
- (BOOL)booting;
- (void)executeAction:(id /* block */)arg0;

@end