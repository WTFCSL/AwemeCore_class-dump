//
//     Generated by private class-dump
//

@interface ASSArpResolveManager : NSObject {
    id /* block */ _callback;
}

@property (copy, nonatomic) id /* block */ callback;

+ (id)sharedInstance;

- (void)startPing:(id /* block */)arg0;
- (void)pingResult:(id)arg0;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;

@end