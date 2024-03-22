//
//     Generated by private class-dump
//

@protocol EcLogProtocol;

@interface EcLogManager : NSObject {
    id<EcLogProtocol> _logDelegate;
}

@property (weak, nonatomic) id<EcLogProtocol> logDelegate;

+ (id)shareInstance;

- (void)setLogDelegate:(id)arg0;
- (id)logDelegate;
- (void)updateLogDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)debug:(id)arg0;
- (void)info:(id)arg0;

@end