//
//     Generated by private class-dump
//

@interface MSUSBHelper : NSObject {
    int _connected;
    id /* block */ _silentNotify;
}

@property (nonatomic) int connected;
@property (copy, nonatomic) id /* block */ silentNotify;

+ (void)initialize;
+ (id)sharedInstance;

- (id /* block */)silentNotify;
- (void)setSilentNotify:(id /* block */)arg0;
- (id)init;
- (void)setConnected:(int)arg0;
- (void).cxx_destruct;
- (int)connected;
- (void)dealloc;

@end