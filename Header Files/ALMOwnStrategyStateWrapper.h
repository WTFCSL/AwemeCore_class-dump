//
//     Generated by private class-dump
//

@class NSString;

@interface ALMOwnStrategyStateWrapper : NSObject <TTVideoEngineStrategyStateSupplier> {
    id /* block */ _networkSpeedblock;
}

@property (copy, nonatomic) id /* block */ networkSpeedblock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)getNetworkSpeedBitPerSec:(id)arg0;
- (id /* block */)networkSpeedblock;
- (void)setNetworkSpeedblock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;

@end
