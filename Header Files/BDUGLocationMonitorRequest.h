//
//     Generated by private class-dump
//

@interface BDUGLocationMonitorRequest : NSObject {
    long long _level;
    id /* block */ _changedCallback;
}

@property (nonatomic) long long level;
@property (copy, nonatomic) id /* block */ changedCallback;

- (id)initWithLevel:(long long)arg0 changedCallback:(id /* block */)arg1;
- (id /* block */)changedCallback;
- (void)setChangedCallback:(id /* block */)arg0;
- (void)setLevel:(long long)arg0;
- (long long)level;
- (void).cxx_destruct;

@end
