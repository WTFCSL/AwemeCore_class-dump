//
//     Generated by private class-dump
//

@class NSDictionary;

@interface APBBackwardCommand : NSObject {
    long long _commandType;
    NSDictionary *_params;
}

@property (nonatomic) long long commandType;
@property (retain, nonatomic) NSDictionary *params;

- (id)initWithCommandType:(long long)arg0 withParams:(id)arg1;
- (void).cxx_destruct;
- (void)setCommandType:(long long)arg0;
- (long long)commandType;
- (id)params;
- (void)setParams:(id)arg0;

@end
